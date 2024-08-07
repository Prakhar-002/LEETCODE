#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 273

#? ⌚ Time complexity ➺ O(Log(num))

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def numberToWords(self, num: int) -> str:
            if num == 0:
                  return "Zero"

            onesMap = {
                  1: "One",
                  2: "Two",
                  3: "Three",
                  4: "Four",
                  5: "Five",
                  6: "Six",
                  7: "Seven",
                  8: "Eight",
                  9: "Nine",
                  10: "Ten",
                  11: "Eleven",
                  12: "Twelve",
                  13: "Thirteen",
                  14: "Fourteen",
                  15: "Fifteen",
                  16: "Sixteen",
                  17: "Seventeen",
                  18: "Eighteen",
                  19: "Nineteen"
            }

            tensMap = {
                  20: "Twenty",
                  30: "Thirty",
                  40: "Forty",
                  50: "Fifty",
                  60: "Sixty",
                  70: "Seventy",
                  80: "Eighty",
                  90: "Ninety",
            }

            # our final english word
            englishWords = []

            # we will process our 3 digit at a time
            def getString(n):
                  englishWord = []
                  # first check for Hundreds
                  hundreds = n // 100
                  # if it's not 0 append it in our word
                  if hundreds:
                        # we take from ones map
                        englishWord.append(onesMap[hundreds] + " Hundred")

                  # get the last two words from it 
                  lastTwo = n % 100
                  # check if it's > 20 or not 57
                  if lastTwo >= 20:
                        tens, ones = lastTwo // 10, lastTwo % 10
                        englishWord.append(tensMap[tens * 10])
                        # now ones can be 0 or non zero
                        # if not zero
                        if ones:
                              englishWord.append(onesMap[ones])

                  # if this is not 00 means 100
                  elif lastTwo:
                        englishWord.append(onesMap[lastTwo])
                  # else if we have 00 then do nothing

                  return " ".join(englishWord)

            placeValues = ["", " Thousand", " Million", " Billion"]

            # index that will tell the place
            placeIdx = 0

            while num :
                  # extracting first 3 digit 
                  digits = num % 1000

                  # get string for this digit
                  string = getString(digits)

                  # if it's not an empty string add it in our english word
                  if string:
                        englishWords.append(string + placeValues[placeIdx])

                  # then divide by 1000 to get next 3 digit
                  num //= 1000
                  placeIdx += 1

            # reverse it before join
            englishWords.reverse()

            return " ".join(englishWords)
