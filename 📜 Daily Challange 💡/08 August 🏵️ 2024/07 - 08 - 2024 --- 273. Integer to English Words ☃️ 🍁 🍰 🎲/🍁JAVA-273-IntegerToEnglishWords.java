//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 273

//? ⌚ Time complexity ➺ O(Log(num))

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {
      public String numberToWords(int num) {
            if (num == 0) {
                  return "Zero";
            }

            Map<Integer, String> onesMap = new HashMap<>();
            onesMap.put(1, "One");
            onesMap.put(2, "Two");
            onesMap.put(3, "Three");
            onesMap.put(4, "Four");
            onesMap.put(5, "Five");
            onesMap.put(6, "Six");
            onesMap.put(7, "Seven");
            onesMap.put(8, "Eight");
            onesMap.put(9, "Nine");
            onesMap.put(10, "Ten");
            onesMap.put(11, "Eleven");
            onesMap.put(12, "Twelve");
            onesMap.put(13, "Thirteen");
            onesMap.put(14, "Fourteen");
            onesMap.put(15, "Fifteen");
            onesMap.put(16, "Sixteen");
            onesMap.put(17, "Seventeen");
            onesMap.put(18, "Eighteen");
            onesMap.put(19, "Nineteen");

            Map<Integer, String> tensMap = new HashMap<>();
            tensMap.put(20, "Twenty");
            tensMap.put(30, "Thirty");
            tensMap.put(40, "Forty");
            tensMap.put(50, "Fifty");
            tensMap.put(60, "Sixty");
            tensMap.put(70, "Seventy");
            tensMap.put(80, "Eighty");
            tensMap.put(90, "Ninety");

            // our final english word
            List<String> englishWords = new ArrayList<>();

            String[] placeValues = { "", " Thousand", " Million", " Billion" };

            // index that will tell the place
            int placeIdx = 0;

            while (num > 0) {
                  // extracting first 3 digit
                  int digits = num % 1000;

                  // get string for this digit
                  String string = getString(digits, onesMap, tensMap);

                  // if it's not an empty string add it in our english word
                  if (!string.isEmpty()) {
                        englishWords.add(0, string + placeValues[placeIdx]);
                  }

                  // then divide by 1000 to get next 3 digit
                  num /= 1000;
                  placeIdx++;
            }

            return String.join(" ", englishWords);
      }

      // we will process our 3 digit at a time
      private String getString(int n, Map<Integer, String> onesMap, Map<Integer, String> tensMap) {
            List<String> englishWord = new ArrayList<>();

            // first check for Hundreds
            int hundreds = n / 100;
            // if it's not 0 append it in our word
            if (hundreds > 0) {
                  // we take from ones map
                  englishWord.add(onesMap.get(hundreds) + " Hundred");
            }

            // get the last two words from it
            int lastTwo = n % 100;
            // check if it's > 20 or not 57
            if (lastTwo >= 20) {
                  int tens = lastTwo / 10;
                  int ones = lastTwo % 10;
                  englishWord.add(tensMap.get(tens * 10));
                  // now ones can be 0 or non zero
                  // if not zero
                  if (ones > 0) {
                        englishWord.add(onesMap.get(ones));
                  }
            } else if (lastTwo > 0) {
                  englishWord.add(onesMap.get(lastTwo));
            }
            // else if we have 00 then do nothing

            return String.join(" ", englishWord);
      }
}

// ------------------------------------------------------------

//* recursive solution

class Solution {

      private final String[] belowTwenty = { "", 
            "One", 
            "Two", 
            "Three", 
            "Four", 
            "Five", 
            "Six", 
            "Seven", 
            "Eight", 
            "Nine",
            "Ten", 
            "Eleven", 
            "Twelve", 
            "Thirteen", 
            "Fourteen", 
            "Fifteen", 
            "Sixteen", 
            "Seventeen", 
            "Eighteen",
            "Nineteen" 
      };

      private final String[] tens = { 
            "", 
            "", 
            "Twenty", 
            "Thirty", 
            "Forty", 
            "Fifty", 
            "Sixty", 
            "Seventy", 
            "Eighty",

            "Ninety" 
      };

      public String numberToWords(int num) {
            if (num == 0) {
                  return "Zero";
            }

            return helper(num);
      }

      private String helper(int num) {
            StringBuilder result = new StringBuilder();
            if (num < 20) {
                  result.append(belowTwenty[num]);
            } 

            else if (num < 100) {
                  result.append(tens[num / 10]).append(" ").append(belowTwenty[num % 10]);
            } 

            else if (num < 1000) {
                  result.append(helper(num / 100)).append(" Hundred ").append(helper(num % 100));
            } 

            else if (num < 1000000) {
                  result.append(helper(num / 1000)).append(" Thousand ").append(helper(num % 1000));
            } 

            else if (num < 1000000000) {
                  result.append(helper(num / 1000000)).append(" Million ").append(helper(num % 1000000));
            } 

            else {
                  result.append(helper(num / 1000000000)).append(" Billion ").append(helper(num % 1000000000));
            }

            return result.toString().trim();
      }
}