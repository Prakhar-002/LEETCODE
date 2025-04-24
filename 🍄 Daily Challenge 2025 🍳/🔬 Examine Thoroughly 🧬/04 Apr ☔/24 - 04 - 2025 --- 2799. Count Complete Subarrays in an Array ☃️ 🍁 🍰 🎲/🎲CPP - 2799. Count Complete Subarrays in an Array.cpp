//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2799

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <unordered_set>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
      int countCompleteSubarrays(vector<int>& nums) {
            int n = nums.size();

            // Count unique elements in array
            unordered_set<int> uniqueSet(nums.begin(), nums.end());
            int k = uniqueSet.size();

            unordered_map<int, int> freq; // Frequency map
            int left = 0, count = 0;

            // Right pointer moves across the array
            for (int right = 0; right < n; ++right) {
                  freq[nums[right]]++; // Add current to map

                  // While all unique elements are in current window
                  while (freq.size() == k) {
                        count += n - right; // Count all possible subarrays starting from left

                        freq[nums[left]]--; // Shrink window from left
                        if (freq[nums[left]] == 0) {
                              freq.erase(nums[left]);
                        }
                        left++;
                  }
            }

            return count;
      }
};
