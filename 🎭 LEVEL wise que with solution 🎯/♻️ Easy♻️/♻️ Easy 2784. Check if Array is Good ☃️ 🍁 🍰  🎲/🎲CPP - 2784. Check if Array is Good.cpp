//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2784

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
      bool isGood(vector<int>& nums) {
            // Build frequency map for all numbers
            unordered_map<int, int> countNum;
            int maxNum = 0;

            for (int num : nums) {
                  countNum[num]++;
                  // Track max while building the map
                  maxNum = max(maxNum, num);
            }

            // Max value must appear exactly twice (as per problem definition)
            if (countNum[maxNum] != 2)
                  return false;

            // Every value from 1 to maxNum-1 must appear exactly once
            for (int i = maxNum - 1; i >= 1; i--) {
                  if (countNum[i] != 1)
                        return false;
            }

            return true;
      }
};