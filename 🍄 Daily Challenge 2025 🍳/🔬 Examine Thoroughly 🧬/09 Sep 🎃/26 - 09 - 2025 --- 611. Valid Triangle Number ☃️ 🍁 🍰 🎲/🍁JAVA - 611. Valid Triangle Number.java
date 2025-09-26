//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 611

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

public class Solution {
      public int triangleNumber(int[] nums) {
            int count = 0;
            // Sort the array to use two-pointer technique
            Arrays.sort(nums);

            // Fix the first side (smallest)
            for (int i = 0; i < nums.length - 2; i++) {
                  int k = i + 2;

                  // For each pair (i, j) check how many k can form a triangle
                  for (int j = i + 1; j < nums.length - 1 && nums[i] != 0; j++) {
                        // Increment k until nums[i] + nums[j] <= nums[k]
                        while (k < nums.length && nums[i] + nums[j] > nums[k])
                              k++;

                        // All values from j+1 to k-1 (inclusive) are valid
                        count += k - j - 1;
                  }
            }

            return count;
      }
}
