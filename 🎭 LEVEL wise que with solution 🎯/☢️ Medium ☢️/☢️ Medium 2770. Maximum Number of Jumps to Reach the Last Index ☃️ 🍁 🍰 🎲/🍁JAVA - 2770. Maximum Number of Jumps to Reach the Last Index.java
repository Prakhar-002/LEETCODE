// ! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2770

// ? ⌚ Time complexity ➺ O(n) 👉🏻 n = len(nums)

// ? 🧺 Space complexity ➺ O(n)

import java.util.Arrays;

class Solution {
      int n;

      public int solve(int i, int[] nums, int target, int[] t) {
            // Reached last index — no more jumps needed
            if (i == n - 1)
                  return t[i] = 0;

            // Return cached result if already computed
            if (t[i] != Integer.MIN_VALUE)
                  return t[i];

            int result = Integer.MIN_VALUE;

            // Try every index ahead as a potential next jump
            for (int j = i + 1; j < n; j++) {
                  // Only jump if difference is within target
                  if (Math.abs(nums[i] - nums[j]) <= target) {
                        int temp = 1 + solve(j, nums, target, t);
                        result = Math.max(result, temp);
                  }
            }

            return t[i] = result;
      }

      public int maximumJumps(int[] nums, int target) {
            n = nums.length;
            // Fill memo table with MIN_VALUE as "not yet computed" sentinel
            int[] t = new int[n + 1];
            Arrays.fill(t, Integer.MIN_VALUE);

            int result = solve(0, nums, target, t);
            // Negative result means no valid path to last index
            return result < 0 ? -1 : result;
      }
}