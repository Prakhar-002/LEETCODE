//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3318

//? ⌚ Time complexity ➺ O(k log k * (n - k + 1)) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n - k + 1)

#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
      /**
       * For each contiguous subarray of size k in nums,
       * find the sum of top x frequent elements.
       * If distinct count <= x, sum full window; else sum top x by frequency.
       *
       * @param nums Input vector of integers
       * @param k Window size
       * @param x Number of top frequent elements to sum
       * @return Vector of sums for each window
       */
      vector<int> findXSum(const vector<int>& nums, int k, int x) {
            int n = nums.size();
            vector<int> res;  // Store sums for each subarray

            // Iterate over all subarrays of length k
            for (int i = 0; i <= n - k; i++) {
                  unordered_map<int, int> countMap;  // Frequency map for current window

                  // Count frequency of each element in the current window
                  for (int j = i; j < i + k; j++) {
                        countMap[nums[j]]++;
                  }

                  // If distinct elements count is <= x, sum all elements in window
                  if ((int)countMap.size() <= x) {
                        int sum = 0;
                        for (int j = i; j < i + k; j++)
                              sum += nums[j];
                        res.push_back(sum);
                  } else {
                        // Otherwise, select top x frequent elements
                        vector<pair<int,int>> pairs(countMap.begin(), countMap.end());

                        // Sort by descending frequency, tie break by descending element value
                        sort(pairs.begin(), pairs.end(), [](const auto& a, const auto& b) {
                              if (b.second != a.second)
                                    return b.second < a.second;  // freq descending
                              return b.first < a.first;          // value descending
                        });

                        int curSum = 0;
                        // Sum of values times their count for top x elements
                        for (int j = 0; j < x; j++) {
                              curSum += pairs[j].first * pairs[j].second;
                        }
                        res.push_back(curSum);
                  }
            }
            return res;
      }
};
