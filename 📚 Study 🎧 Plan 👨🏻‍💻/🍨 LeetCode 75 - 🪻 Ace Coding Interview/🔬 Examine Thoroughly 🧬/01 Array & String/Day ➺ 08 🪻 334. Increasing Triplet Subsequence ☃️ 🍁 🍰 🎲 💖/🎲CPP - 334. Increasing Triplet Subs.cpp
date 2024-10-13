//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 334

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = nums.length

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <limits>
using namespace std;

class Solution {
public:
      // Define a method 'increasingTriplet' that takes 'nums' as a vector of integers
      bool increasingTriplet(vector<int>& nums) {
            // Check if the vector is empty or has fewer than 3 elements; no triplet is possible
            if (nums.empty() || nums.size() < 3) {
                  return false;  // Return false if the condition is met
            }

            // Initialize 'a' to positive infinity (this will track the smallest number)
            int a = numeric_limits<int>::max();
            // Initialize 'b' to positive infinity (this will track the second smallest number)
            int b = numeric_limits<int>::max();

            // Iterate over each number in the vector
            for (int num : nums) {
                  // If the current number is smaller than or equal to 'a', update 'a'
                  if (num <= a) {
                        a = num;
                  }

                  // Else if the current number is smaller than or equal to 'b', update 'b'
                  else if (num <= b) {
                        b = num;
                  }

                  // If the current number is greater than both 'a' and 'b', return true (triplet found)
                  else {
                        return true;
                  }
            }

            // If the loop completes without finding an increasing triplet, return false
            return false;
      }
};

