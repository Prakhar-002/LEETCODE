//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 162

//? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int findPeakElement(vector<int>& nums) {

            // Initialize left and right pointers
            int left = 0;
            int right = nums.size() - 1;

            // Binary search until left == right
            while (left < right) {

                  // Calculate mid index
                  int mid = left + (right - left) / 2;

                  // If mid element is greater than next,
                  // then peak is on the left side
                  if (nums[mid] > nums[mid + 1]) {
                        right = mid;
                  } else {
                        // Else, peak is on the right side
                        left = mid + 1;
                  }
            }

            // Return the peak index
            return left;
      }
};
