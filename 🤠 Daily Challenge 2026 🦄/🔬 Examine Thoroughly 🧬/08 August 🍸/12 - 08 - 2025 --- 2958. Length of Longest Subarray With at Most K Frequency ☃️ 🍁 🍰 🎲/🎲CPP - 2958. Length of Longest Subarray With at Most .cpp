//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2958

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
      int maxSubarrayLength(vector<int>& nums, int k) {
            // Hash map to store frequency of elements in current window
            unordered_map<int, int> freq;

            int left = 0;
            int maxLen = 0;

            // Expand window using the right pointer
            for (int right = 0; right < nums.size(); ++right) {
                  freq[nums[right]]++;

                  // Shrink window from left if frequency exceeds k
                  while (freq[nums[right]] > k) {
                        freq[nums[left]]--;
                        left++;
                  }

                  // Record maximum valid subarray length
                  maxLen = max(maxLen, right - left + 1);
            }

            return maxLen;
      }
};