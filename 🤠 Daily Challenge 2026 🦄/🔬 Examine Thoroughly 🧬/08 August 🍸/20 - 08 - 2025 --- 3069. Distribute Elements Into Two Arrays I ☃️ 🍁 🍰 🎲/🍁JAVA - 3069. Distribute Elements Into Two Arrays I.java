//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3069

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.ArrayList;
import java.util.List;

class Solution {
      public int[] resultArray(int[] nums) {
            // Lists to simulate arr1 and arr2
            List<Integer> arr1 = new ArrayList<>();
            List<Integer> arr2 = new ArrayList<>();

            // Initialize arr1 with nums[0] and arr2 with nums[1]
            arr1.add(nums[0]);
            arr2.add(nums[1]);

            // Distribute remaining elements according to the problem rules
            for (int i = 2; i < nums.length; i++) {
                  if (arr1.get(arr1.size() - 1) > arr2.get(arr2.size() - 1)) {
                        arr1.add(nums[i]);
                  } else {
                        arr2.add(nums[i]);
                  }
            }

            // Concatenate arr1 and arr2 into the result array
            int[] result = new int[nums.length];
            int idx = 0;

            for (int num : arr1) {
                  result[idx++] = num;
            }
            for (int num : arr2) {
                  result[idx++] = num;
            }

            return result;
      }
}