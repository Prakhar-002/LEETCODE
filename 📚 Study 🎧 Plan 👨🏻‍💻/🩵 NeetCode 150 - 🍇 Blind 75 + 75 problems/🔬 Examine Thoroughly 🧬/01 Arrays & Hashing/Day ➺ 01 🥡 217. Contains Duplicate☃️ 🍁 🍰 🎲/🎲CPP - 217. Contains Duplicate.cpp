//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 217

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
      public:
            bool containsDuplicate(vector<int>& nums) {
                  // Initialize an unordered_set to store unique elements.
                  unordered_set<int> seen;

                  // Iterate through each number in the vector.
                  for (int num : nums) {
                        // If the current number is already in the set,
                        // it means we have found a duplicate.
                        if (seen.find(num) != seen.end()) {
                              return true;
                        }

                        // Add the current number to the set to mark it as seen.
                        seen.insert(num);
                  }

                  // If no duplicates are found, return false.
                  return false;
            }
};
