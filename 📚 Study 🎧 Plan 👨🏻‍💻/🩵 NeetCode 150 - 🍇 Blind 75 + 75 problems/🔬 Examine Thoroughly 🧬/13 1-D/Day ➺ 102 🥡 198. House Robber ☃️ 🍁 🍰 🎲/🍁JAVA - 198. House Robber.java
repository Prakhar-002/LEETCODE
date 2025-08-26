//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 198

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int rob(int[] nums) {
            int firstHouseRob = 0;
            int secHouseRob = 0;

            // ? [firstSum, secSum, n, n + 1 ...]
            for (int n : nums) {
                  // in temp variable we'll check for max after taking n with our self
                  int temp = Math.max(firstHouseRob + n, secHouseRob);
                  // update both variable
                  firstHouseRob = secHouseRob;
                  secHouseRob = temp;
            }

            return Math.max(firstHouseRob, secHouseRob);
      }
}