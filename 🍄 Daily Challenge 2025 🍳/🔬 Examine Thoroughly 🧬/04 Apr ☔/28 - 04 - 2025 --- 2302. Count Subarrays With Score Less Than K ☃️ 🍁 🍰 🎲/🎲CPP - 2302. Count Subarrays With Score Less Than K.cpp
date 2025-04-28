//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2302

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      long long countSubarrays(vector<int> &nums, int k) {

            long long cntSubArr = 0, total = 0; // Count of subarrays and total sum (use long long)
            int n = nums.size();                // Length of array

            int left = 0; // Left pointer for sliding window

            for (int right = 0; right < n; right++) {

                  total += nums[right]; // Add current element to total sum

                  // Shrink window while condition breaks
                  while (left <= right && total * (right - left + 1) >= k) {
                        total -= nums[left]; // Remove leftmost element
                        left++;              // Move left pointer
                  }

                  cntSubArr += right - left + 1; // Add valid subarrays ending at 'right'
            }

            return cntSubArr; // Return total count
      }
};
