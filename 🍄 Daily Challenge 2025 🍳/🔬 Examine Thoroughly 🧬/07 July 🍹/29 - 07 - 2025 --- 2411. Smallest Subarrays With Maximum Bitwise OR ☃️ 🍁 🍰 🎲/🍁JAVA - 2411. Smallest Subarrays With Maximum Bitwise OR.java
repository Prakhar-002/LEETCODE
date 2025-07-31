//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2411

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public int[] smallestSubarrays(int[] nums) {
            int n = nums.length;

            // Array to store the last seen index for each bit (0 to 29)
            int[] lastSeen = new int[30];

            // Result array initialized with 1s
            int[] res = new int[n];
            Arrays.fill(res, 1);

            // Traverse from right to left
            for (int i = n - 1; i >= 0; i--) {
                  for (int bit = 0; bit < 30; bit++) {
                        // If bit 'bit' is set in nums[i]
                        if ((nums[i] & (1 << bit)) != 0) {
                              // Update the last seen index of this bit
                              lastSeen[bit] = i;
                        }

                        // Compute the minimum subarray length
                        res[i] = Math.max(res[i], lastSeen[bit] - i + 1);
                  }
            }

            return res;
      }
}
