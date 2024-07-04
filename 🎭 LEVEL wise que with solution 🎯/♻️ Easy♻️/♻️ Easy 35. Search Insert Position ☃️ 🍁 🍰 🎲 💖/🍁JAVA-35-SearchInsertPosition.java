//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 35

//? ⌚ Time complexity -> O(LogN) 

//? 🧺 Space complexity -> O(1)

class Solution {
      public int searchInsert(int[] nums, int target) {
            int low = 0;
            int high = nums.length - 1;
            int mid;

            if (target > nums[high]) {
                  return nums.length;
            }

            while (low <= high) {
                  mid = low + (high - low) / 2;
                  if (nums[mid] == target) {
                        return mid;
                  }

                  if (target < nums[mid]) {
                        high = mid - 1;
                  } else {
                        low = mid + 1;
                  }
            }
            return low;
      }
}