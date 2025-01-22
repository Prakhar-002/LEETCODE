//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1

//? ⌚ Time complexity -> O(n^2) 👉 array length

//? 🧺 Space complexity -> O(1) 

class Solution {
      public int[] twoSum(int[] nums, int target) {
            for (int i = 0; i < nums.length; i++) {
                  for (int j = i + 1; j < nums.length; j++) {
                        if ((nums[i] + nums[j]) == target) {
                              return new int[] { i, j };
                        }
                  }
            }
            return nums;
      }
}

// ---------------------------------------------

// ? ⌚ Time complexity -> O(n) 👉 array length

// ? 🧺 Space complexity -> O(n) 👉 map length

class Solution {
      public int[] twoSum(int[] nums, int target) {
            Map<Integer, Integer> mp = new HashMap<>();

            for (int i = 0; i < nums.length; i++) {
                  int diff = target - nums[i];

                  if (mp.containsKey(diff)) {
                        return new int[] { i, mp.get(diff) };
                  }

                  mp.put(nums[i], i);
            }

            return new int[] {}; // Return empty array if no solution found
      }
}