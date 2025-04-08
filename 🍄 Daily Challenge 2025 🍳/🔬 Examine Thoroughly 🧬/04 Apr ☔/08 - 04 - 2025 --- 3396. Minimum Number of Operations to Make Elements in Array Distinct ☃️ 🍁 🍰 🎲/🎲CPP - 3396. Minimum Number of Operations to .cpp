//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3396

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
      int minimumOperations(vector<int>& nums) {
            // Initialize a set to store unique elements from the end
            unordered_set<int> unique_set;

            // Traverse the array from the end
            for (int i = nums.size() - 1; i >= 0; i--) {
                  // If a duplicate is found, break the loop
                  if (unique_set.count(nums[i])) {
                        break;
                  }

                  // Otherwise, add the number to the set
                  unique_set.insert(nums[i]);
            }

            // Calculate the number of elements before the unique suffix
            int rem_len = nums.size() - unique_set.size();

            // Calculate the minimum number of operations
            return (rem_len % 3 == 0) ? (rem_len / 3) : (rem_len / 3 + 1);
      }
};
