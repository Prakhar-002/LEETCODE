//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3375

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
      int minOperations(vector<int>& nums, int k) {
            unordered_set<int> unique_set;  // To store unique elements

            // Iterate over each number in the vector
            for (int num : nums) {
                  if (num < k) {
                        return -1;  // If any number is less than k, return -1
                  }

                  unique_set.insert(num);  // Add the number to the set
            }

            // If k is in the set, subtract 1 from the count
            return unique_set.count(k) ? unique_set.size() - 1 : unique_set.size();
      }
};
