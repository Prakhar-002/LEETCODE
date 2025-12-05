//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3432

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int countPartitions(int[] nums) {
            // Calculate total sum of entire array
            long totalSum = 0;
            for (int num : nums) {
                  totalSum += num;
            }

            // If total sum is odd, cannot partition into two equal sums
            if (totalSum % 2 != 0) {
                  return 0;
            }

            long leftSum = 0; // Running sum of left partition (prefix)
            int count = 0; // Count of valid partition points

            // Check each possible prefix as left partition
            for (int num : nums) {
                  leftSum += num; // Add to left partition
                  long rightSum = totalSum - leftSum; // Right partition sum (suffix)

                  // Condition checks if |left - right| is even
                  // This is ALWAYS TRUE for integers since totalSum is even!
                  // (left - right = 2*leftSum - totalSum, totalSum even → always even)
                  if (Math.abs(rightSum - leftSum) % 2 == 0) {
                        count++;
                  }
            }

            // Subtract 1 to exclude the full array case
            // Full array: leftSum = totalSum, rightSum = 0 → invalid partition
            return count - 1;
      }
}
