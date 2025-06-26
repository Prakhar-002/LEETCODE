//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2200

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public List<Integer> findKDistantIndices(int[] nums, int key, int k) {
            List<Integer> res = new ArrayList<>();
            int r = 0; // r keeps track of the last unprocessed index
            int n = nums.length;

            // Traverse array to find all positions with value == key
            for (int j = 0; j < n; j++) {
                  if (nums[j] == key) {
                        // Compute left and right bounds of range to process
                        int l = Math.max(r, j - k);
                        r = Math.min(n - 1, j + k) + 1;

                        // Add all indices in [l, r) to the result list
                        for (int i = l; i < r; i++) {
                              res.add(i);
                        }
                  }
            }

            return res;
      }
}
