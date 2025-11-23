//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1262

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int maxSumDivThree(int[] nums) {
            int total = 0;
            // Track the smallest number with remainder 1 mod 3
            int smallestOne = Integer.MAX_VALUE;
            // Track the smallest number with remainder 2 mod 3
            int smallestTwo = Integer.MAX_VALUE;

            // Iterate through all numbers to calculate total sum
            // and keep track of smallest numbers with remainder 1 and 2
            for (int n : nums) {
                  total += n;

                  // If remainder is 1, update smallestTwo and smallestOne accordingly
                  if (n % 3 == 1) {
                        // Only add if smallestOne is valid to prevent overflow
                        if (smallestOne != Integer.MAX_VALUE) {
                              smallestTwo = Math.min(smallestTwo, n + smallestOne);
                        }
                        smallestOne = Math.min(smallestOne, n);
                  }

                  // If remainder is 2, update smallestOne and smallestTwo accordingly
                  if (n % 3 == 2) {
                        // Only add if smallestTwo is valid to prevent overflow
                        if (smallestTwo != Integer.MAX_VALUE) {
                              smallestOne = Math.min(smallestOne, n + smallestTwo);
                        }
                        smallestTwo = Math.min(smallestTwo, n);
                  }
            }

            // If total sum is divisible by 3, return total as is
            if (total % 3 == 0) {
                  return total;
            }

            // If remainder is 1, subtract smallestOne to make sum divisible by 3
            else if (total % 3 == 1) {
                  return total - smallestOne;
            }

            // If remainder is 2, subtract smallestTwo to make sum divisible by 3
            else {
                  return total - smallestTwo;
            }
      }
}
