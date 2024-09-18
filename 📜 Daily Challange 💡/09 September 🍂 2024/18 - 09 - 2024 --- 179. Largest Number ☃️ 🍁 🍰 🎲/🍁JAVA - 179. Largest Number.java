//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 179

//? ⌚ Time complexity ➺ O(NLogN) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public String largestNumber(int[] nums) {
            // `numStrings` is created to store string equivalents of the integer
            String[] numStrings = new String[nums.length];

            // Loop through the `nums` array and convert each integer
            for (int i = 0; i < nums.length; i++) {
                  // to a string using `String.valueOf()`
                  numStrings[i] = String.valueOf(nums[i]);
            }

            // sorted using `Arrays.sort` with a custom `Comparator<String>` 
            Arrays.sort(numStrings, new Comparator<String>() {
                  @Override
                  public int compare(String n1, String n2) {
                        // effectively determines which concatenation results 
                        // in a numerically larger string and sorts accordingly
                        return (n2 + n1).compareTo(n1 + n2);
                  }
            });

            // If the largest number is 0, return "0" { Handling Edge Case }
            if (numStrings[0].equals("0")) {
                  //* `['0', '0']` should become `0`, not `00`
                  return "0";
            }

            // `StringBuilder`:`result` is used to concatenate the sorted strings
            StringBuilder result = new StringBuilder();

            // Iterate over `numStrings`
            for (String numString : numStrings) {
                  // appending each one to `result
                  result.append(numString);
            }

            // covert `result` (which is a `StringBuilder`)
            //  to a string using `toString()` and return it
            return result.toString();
      }
}
