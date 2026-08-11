//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2996

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <unordered_set>

class Solution {
public:
      int missingInteger(std::vector<int>& nums) {
            // Store elements in an unordered_set for O(1) average lookup time
            std::unordered_set<int> numsSet(nums.begin(), nums.end());

            // Initialize seq with the first element of nums
            int seq = nums[0];

            // Accumulate sum of the longest sequential prefix
            for (size_t j = 1; j < nums.size(); ++j) {
                  if (nums[j] == nums[j - 1] + 1) {
                        seq += nums[j];
                  } else {
                        break;
                  }
            }

            // Increment seq until finding an integer not in numsSet
            while (numsSet.count(seq)) {
                  seq++;
            }

            return seq;
      }
};