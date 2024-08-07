//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 273

//? ⌚ Time complexity ➺ O(Log(num))

//? 🧺 Space complexity ➺ O(1)

var numberToWords = function (num) {
      if (num === 0) {
            return "Zero";
      }

      const onesMap = {
            1: "One", 2: "Two", 3: "Three", 4: "Four", 5: "Five",
            6: "Six", 7: "Seven", 8: "Eight", 9: "Nine", 10: "Ten",
            11: "Eleven", 12: "Twelve", 13: "Thirteen", 14: "Fourteen",
            15: "Fifteen", 16: "Sixteen", 17: "Seventeen", 18: "Eighteen",
            19: "Nineteen"
      };

      const tensMap = {
            20: "Twenty", 30: "Thirty", 40: "Forty", 50: "Fifty",
            60: "Sixty", 70: "Seventy", 80: "Eighty", 90: "Ninety"
      };

      // our final english word
      const englishWords = [];

      // we will process our 3 digit at a time
      const getString = (n) => {
            const englishWord = [];
            // first check for Hundreds
            const hundreds = Math.floor(n / 100);
            // if it's not 0 append it in our word
            if (hundreds) {
                  // we take from ones map
                  englishWord.push(onesMap[hundreds] + " Hundred");
            }

            // get the last two words from it 
            const lastTwo = n % 100;
            // check if it's > 20 or not 57
            if (lastTwo >= 20) {
                  const tens = Math.floor(lastTwo / 10);
                  const ones = lastTwo % 10;
                  englishWord.push(tensMap[tens * 10]);
                  // now ones can be 0 or non zero
                  // if not zero
                  if (ones) {
                        englishWord.push(onesMap[ones]);
                  }
            }
            // if this is not 00 means 100
            else if (lastTwo) {
                  englishWord.push(onesMap[lastTwo]);
            }
            // else if we have 00 then do nothing

            return englishWord.join(" ");
      };

      const placeValues = ["", " Thousand", " Million", " Billion"];

      // index that will tell the place
      let placeIdx = 0;

      while (num) {
            // extracting first 3 digit 
            const digits = num % 1000;

            // get string for this digit
            const string = getString(digits);

            // if it's not an empty string add it in our english word
            if (string) {
                  englishWords.push(string + placeValues[placeIdx]);
            }

            // then divide by 1000 to get next 3 digit
            num = Math.floor(num / 1000);
            placeIdx++;
      }

      // reverse it before join
      englishWords.reverse();

      return englishWords.join(" ");
};