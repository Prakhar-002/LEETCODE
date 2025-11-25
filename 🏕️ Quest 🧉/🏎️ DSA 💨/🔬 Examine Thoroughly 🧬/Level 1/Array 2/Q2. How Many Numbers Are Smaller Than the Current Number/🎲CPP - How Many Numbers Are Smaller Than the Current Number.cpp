//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L1.2 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

// C++ version
#include <vector>
#include <map>
#include <algorithm>

class Solution {
public:
      vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
            vector<int> sortedNums = nums;
            sort(sortedNums.begin(), sortedNums.end());

            // Map number to smallest index (rank)
            map<int, int> rank;
            for (int i = 0; i < (int)sortedNums.size(); i++) {
                  if (rank.find(sortedNums[i]) == rank.end()) {
                        rank[sortedNums[i]] = i;
                  }
            }

            vector<int> result;
            for (int num : nums) {
                  result.push_back(rank[num]);
            }
            return result;
      }
};
