//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3471

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
      int largestInteger(vector<int>& nums, int k) {
            int n = nums.size();

            // Frequency map to count occurrences of each element
            unordered_map<int, int> freq;
            for (int num : nums) {
                  freq[num]++;
            }

            // Case 1: k == 1, any element appearing once is in exactly 1 subarray of size 1
            if (k == 1) {
                  int maxVal = -1;
                  for (int num : nums) {
                        if (freq[num] == 1) {
                              maxVal = max(maxVal, num);
                        }
                  }
                  return maxVal;
            }

            // Case 2: k == n, exactly one subarray of size n exists
            if (k == n) {
                  return *max_element(nums.begin(), nums.end());
            }

            // Case 3: 1 < k < n, only boundary elements (nums[0], nums[n-1]) can be valid
            int ans = -1;

            if (freq[nums[0]] == 1) {
                  ans = max(ans, nums[0]);
            }

            if (freq[nums[n - 1]] == 1) {
                  ans = max(ans, nums[n - 1]);
            }

            return ans;
      }
};