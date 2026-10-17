//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3551

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;

class Solution {
      // Helper method to compute sum of digits
      private int digitSum(int n) {
            int res = 0;
            while (n > 0) {
                  res += n % 10;
                  n /= 10;
            }
            return res;
      }

      public int minSwaps(int[] nums) {
            int n = nums.length;
            Map<Integer, Integer> items = new HashMap<>();

            // Store pairs of [digit_sum, value]
            int[][] ans = new int[n][2];
            for (int i = 0; i < n; i++) {
                  items.put(nums[i], i);
                  ans[i][0] = digitSum(nums[i]);
                  ans[i][1] = nums[i];
            }

            // Sort primarily by digitSum, secondarily by value
            Arrays.sort(ans, (a, b) -> {
                  if (a[0] != b[0]) {
                        return Integer.compare(a[0], b[0]);
                  }
                  return Integer.compare(a[1], b[1]);
            });

            // Extract target sorted array
            int[] target = new int[n];
            for (int i = 0; i < n; i++) {
                  target[i] = ans[i][1];
            }

            int res = 0;

            // Iterate and swap elements to their target positions
            for (int i = 0; i < n; i++) {
                  if (nums[i] != target[i]) {
                        res++;

                        // Find current index of the target element
                        int j = items.get(target[i]);

                        // Swap nums[i] and nums[j]
                        int temp = nums[i];
                        nums[i] = nums[j];
                        nums[j] = temp;

                        // Update positions in the map
                        items.put(nums[j], j);
                        items.put(nums[i], i);
                  }
            }

            return res;
      }
}