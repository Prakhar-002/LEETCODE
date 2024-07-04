//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 35

//? ⌚ Time complexity -> O(LogN)

//? 🧺 Space complexity -> O(1)

int searchInsert(int *nums, int numsSize, int target){
      int low = 0;
      int high = numsSize - 1;

      if (target > nums[high]){
            return numsSize;
      }

      while (low <= high){
            int mid = low + (high - low) / 2;
            if (nums[mid] == target){
                  return mid;
            }

            if (target < nums[mid]){
                  high = mid - 1;
            }
            else{
                  low = mid + 1;
            }
      }

      return low;
}
