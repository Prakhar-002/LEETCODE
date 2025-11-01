//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 45

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int jump(int[] nums) {
            int jump = 0;   // Total jumps required
            int l = 0, r = 0; // Current window [l, r] representing the range reachable in the current number of jumps

            // Continue until the right boundary reaches or exceeds the last index
            while (r < nums.length - 1) {
                  int farthest = 0; // Tracks the farthest index reachable from current window

                  // Check all positions within the current window to find the farthest reachable index
                  for (int i = l; i <= r; i++) {
                        farthest = Math.max(farthest, i + nums[i]);
                  }

                  // Update the window for the next jump:
                  // The next jump can start right after the current window
                  l = r + 1;
                  // Extend the right boundary to the farthest reachable index found
                  r = farthest;
                  jump++;  // Increase the jump count as we move to the next range
            }
            return jump; // Return the minimum jumps needed to reach the end
      }
}
