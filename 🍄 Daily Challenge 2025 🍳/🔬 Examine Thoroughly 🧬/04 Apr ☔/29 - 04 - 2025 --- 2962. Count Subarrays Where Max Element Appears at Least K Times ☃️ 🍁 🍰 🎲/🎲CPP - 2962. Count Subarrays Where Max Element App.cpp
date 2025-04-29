//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2962

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      long long countSubarrays(vector<int>& nums, int k) {

            int maxElem = *max_element(nums.begin(), nums.end());  // Find the max element
            int n = nums.size();                                    // Length of array
            int count = 0;                                          // Count of maxElem in current window
            int left = 0;                                           // Left pointer
            long long subArr = 0;                                   // Result

            for (int right = 0; right < n; right++) {

                  if (nums[right] == maxElem) {
                        count++;                                    // Increment count if maxElem is found
                  }

                  // Maintain exactly k maxElem in window
                  while (left <= right && count == k) {
                        subArr += (n - right);                      // Valid subarrays count
                        if (nums[left] == maxElem) {
                              count--;                              // Decrease count if removing maxElem
                        }
                        left++;                                     // Move left
                  }
            }

            return subArr;                                          // Return the final answer
      }
};
