//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1399

//? ⌚ Time complexity ➺ O(n) 

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public int countLargestGroup(int n) {
            // Array to count frequency of each possible digit sum (index 1 to 36)
            int[] digitSumCount = new int[37];  // index 0 is unused

            // Array to store precomputed digit sums for numbers from 0 to n
            int[] digitSumCache = new int[n + 1];

            int maxGroupSize = 0;  // Track the largest group size

            // Loop through all numbers from 1 to n
            for (int num = 1; num <= n; num++) {
                  // Calculate digit sum: last digit + digit sum of the rest
                  int digitSum = num % 10 + digitSumCache[num / 10];

                  // Store digit sum for reuse
                  digitSumCache[num] = digitSum;

                  // Increase count of this digit sum group
                  digitSumCount[digitSum]++;

                  // Update the max group size if this group exceeds current max
                  maxGroupSize = Math.max(maxGroupSize, digitSumCount[digitSum]);
            }

            int largestGroups = 0;  // Count groups with max size

            // Count how many groups have max size
            for (int count : digitSumCount) {
                  if (count == maxGroupSize) {
                        largestGroups++;
                  }
            }

            return largestGroups;
      }
}
