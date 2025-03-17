//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2206

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
      bool divideArray(vector<int>& nums) {
            unordered_map<int, int> freqMap;

            // Count occurrences of each number
            for (int num : nums) {
                  freqMap[num]++;
            }

            // Check if every number appears an even number of times
            for (auto& entry : freqMap) {
                  if (entry.second % 2 != 0) {
                        return false;
                  }
            }

            return true;
      }
};
