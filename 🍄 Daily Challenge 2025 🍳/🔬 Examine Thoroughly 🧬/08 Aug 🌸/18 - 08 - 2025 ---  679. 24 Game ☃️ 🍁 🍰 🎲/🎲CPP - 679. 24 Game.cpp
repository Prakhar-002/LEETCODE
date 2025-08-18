//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 679

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <cmath> // For abs
using namespace std;

class Solution {
public:
      bool judgePoint24(vector<int>& cards) {
            // ----------------------------------------------------------
            // Step 1: Initialization and Backtracking Setup
            // ----------------------------------------------------------
            // Convert initial integer cards to a vector of doubles for calculations.
            vector<double> nums;
            for (int card : cards) {
                  nums.push_back(static_cast<double>(card));
            }
            // Start the backtracking process.
            return backtrack(nums);
      }

private:
      // `EPS` (epsilon) for comparing floating-point numbers due to precision errors.
      const double EPS = 1e-6;

      // `backtrack` is the recursive helper function. Pass by value is simpler here.
      bool backtrack(vector<double> nums) {
            // ----------------------------------------------------------
            // Step 2: Base Case for Backtracking
            // ----------------------------------------------------------
            // If the list is reduced to a single number, check if it's approximately 24.
            if (nums.size() == 1) {
                  return abs(nums[0] - 24.0) < EPS;
            }

            // ----------------------------------------------------------
            // Step 3: Recursive Step - Explore All Operations
            // ----------------------------------------------------------
            int n = nums.size();
            // Iterate through every unique pair of numbers (a, b) from the list.
            for (int i = 0; i < n; i++) {
                  for (int j = i + 1; j < n; j++) {
                        // Create a new vector `rest` with all numbers except for `a` and `b`.
                        vector<double> rest;
                        for (int k = 0; k < n; k++) {
                              if (k != i && k != j) {
                                    rest.push_back(nums[k]);
                              }
                        }

                        double a = nums[i];
                        double b = nums[j];

                        // Generate all possible results from applying operations to `a` and `b`.
                        vector<double> candidates;
                        candidates.push_back(a + b);
                        candidates.push_back(a * b);
                        candidates.push_back(a - b);
                        candidates.push_back(b - a); // Subtraction is not commutative.

                        // For division, check for division by zero.
                        if (abs(b) > EPS) candidates.push_back(a / b);
                        if (abs(a) > EPS) candidates.push_back(b / a); // Division is not commutative.

                        // For each candidate result `x`, create a new list for the next recursive call.
                        for (double x : candidates) {
                              vector<double> nextNums = rest;
                              nextNums.push_back(x);
                              if (backtrack(nextNums)) {
                                    // If any recursive call finds a solution, propagate true up the call stack.
                                    return true;
                              }
                        }
                  }
            }
            // If all pairs and operations have been tried from this state, return false.
            return false;
      }
};
