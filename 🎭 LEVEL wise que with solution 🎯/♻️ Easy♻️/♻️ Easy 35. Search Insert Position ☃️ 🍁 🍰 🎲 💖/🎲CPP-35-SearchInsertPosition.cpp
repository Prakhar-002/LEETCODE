//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 35

//? ⌚ Time complexity -> O(LogN) 

//? 🧺 Space complexity -> O(1)

#include <vector>
using namespace std;

class Solution{ 
public:
      int searchInsert(vector<int> &nums, int target){
            int low = 0;
            int high = nums.size();
            int mid;

            if (target > nums[high - 1]){
                  return high;
            }

            while (low <= high){
                  mid = low + (high - low) / 2;
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
};