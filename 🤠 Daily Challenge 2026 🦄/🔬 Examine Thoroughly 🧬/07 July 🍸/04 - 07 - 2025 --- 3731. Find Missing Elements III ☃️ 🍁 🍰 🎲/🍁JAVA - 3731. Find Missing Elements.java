//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3731

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public List<Integer> findMissingElements(int[] nums) {

            // Sort the array
            Arrays.sort(nums);

            // Stores all missing numbers
            List<Integer> res = new ArrayList<>();

            // Traverse adjacent pairs
            for (int i = 0; i < nums.length - 1; i++) {

                  int cur = nums[i];
                  int nxt = nums[i + 1];

                  // Add every missing number between cur and nxt
                  while (cur + 1 != nxt) {
                        res.add(cur + 1);
                        cur++;
                  }
            }

            return res;
      }
}