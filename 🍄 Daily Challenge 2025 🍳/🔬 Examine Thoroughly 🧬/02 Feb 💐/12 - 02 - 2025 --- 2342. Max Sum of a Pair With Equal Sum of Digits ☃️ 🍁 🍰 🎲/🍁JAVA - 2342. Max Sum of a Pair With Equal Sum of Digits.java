//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2342

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      // Function to compute sum of digits of a number
      private int getDigitSum(int num) {
            int digitSum = 0;

            // Extract digits and sum them up
            while (num > 0) {
                  digitSum += num % 10; // Get last digit and add to sum
                  num /= 10; // Remove last digit
            }

            return digitSum;
      }

      // Function to find the maximum sum of two numbers with the same digit sum
      public int maximumSum(int[] nums) {
            // HashMap to store numbers grouped by their digit sum
            Map<Integer, List<Integer>> digitSumMap = new HashMap<>();

            for (int n : nums) {
                  int digitSum = getDigitSum(n); // Compute digit sum

                  // If key does not exist, initialize a new list
                  digitSumMap.putIfAbsent(digitSum, new ArrayList<>());

                  List<Integer> digitList = digitSumMap.get(digitSum);
                  digitList.add(n); // Add the number to the corresponding digit sum group

                  // Maintain only the top two largest numbers
                  if (digitList.size() > 2) {
                        Collections.sort(digitList);
                        digitList.remove(0); // Remove smallest element
                  }
            }

            int res = -1; // Initialize result with -1 (default if no valid pair exists)

            // Iterate through the map
            for (List<Integer> lst : digitSumMap.values()) {
                  if (lst.size() == 2) { // Consider only pairs of numbers
                        res = Math.max(res, lst.get(0) + lst.get(1)); // Update max sum
                  }
            }

            return res;
      }
}
