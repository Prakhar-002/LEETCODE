//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2028

//? ⌚ Time complexity ➺ O(n + m) 👉🏻  m = len(rolls)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

class Solution {
public:
      // `rolls` : A vector of integers representing the dice rolls that are already known
      // `mean` : The desired average (mean) of all rolls, including the missing ones.
      // `n` : The number of missing dice rolls.
      vector<int> missingRolls(const vector<int>& rolls, int mean, int n) {
            // `m` : The number of already known rolls
            int m = rolls.size();
            // The total sum of all dice rolls (both known and missing)
            int total_sum = mean * (n + m);
            // missing dice rolls that needs to be distributed across `n` dice
            int missing_sum = total_sum - accumulate(rolls.begin(), rolls.end(), 0);

            // If the missing_sum is smaller than n or larger than 6 * n, 
            // it's impossible to find a valid combination of missing dice rolls
            if (!(n <= missing_sum && missing_sum <= 6 * n)) {
                  // returns an empty vector
                  return {};
            }

            // This vector will store the missing dice rolls
            vector<int> missingObservation;
            missingObservation.reserve(n);

            // The loop runs while there are still missing rolls to assign
            while (n) {
                  // ensures that each roll is as high as possible (up to 6) 
                  // but still allows for the remaining dice to be valid 1 - 6
                  int dice = min(6, missing_sum - n + 1);
                  // Adds the current dice roll (`dice`) to the vector 
                  missingObservation.push_back(dice);
                  // Reduces the remaining sum
                  missing_sum -= dice;
                  // Reduces the count of missing rolls left to allocate
                  n--;
            }

            // returns the vector
            return missingObservation;
      }
};

