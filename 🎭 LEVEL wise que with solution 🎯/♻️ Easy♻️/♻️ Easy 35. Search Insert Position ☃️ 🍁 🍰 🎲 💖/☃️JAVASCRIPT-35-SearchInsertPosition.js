//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 35

//? ⌚ Time complexity -> O(LogN) 

//? 🧺 Space complexity -> O(1)

var searchInsert = function (nums, target) {
      let low = 0;
      let high = nums.length - 1;
      let mid;

      if (target > nums[high]) {
            return nums.length;
      }

      while (low <= high) {
            mid = low + Math.floor((high - low) / 2);
            if (nums[mid] === target) {
                  return mid;
            }

            if (target < nums[mid]) {
                  high = mid - 1;
            } else {
                  low = mid + 1;
            }
      }
      return low;
};