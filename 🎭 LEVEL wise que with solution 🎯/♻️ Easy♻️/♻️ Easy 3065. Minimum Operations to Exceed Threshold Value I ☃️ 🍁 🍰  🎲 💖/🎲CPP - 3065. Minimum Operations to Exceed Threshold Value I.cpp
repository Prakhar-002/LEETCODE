//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3065

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
using namespace std;

class Solution {
public:
      int minOperations(vector<int>& nums, int k) {
            int operation = 0; // Counter for operations

            // Iterate through the array
            for (int n : nums) {
                  if (n < k) { // If the number is less than k, increase the operation count
                        operation++;
                  }
            }

            return operation; // Return the total count of elements less than k
      }
};
