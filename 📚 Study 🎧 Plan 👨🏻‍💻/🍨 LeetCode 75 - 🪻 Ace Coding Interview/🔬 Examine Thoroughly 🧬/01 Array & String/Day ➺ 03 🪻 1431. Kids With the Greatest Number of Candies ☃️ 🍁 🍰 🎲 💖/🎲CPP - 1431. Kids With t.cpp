//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1431

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(candies)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
            // vector `result` where the outcome for each kid
            vector<bool> result;

            // calculates the maximum number of candies any single kid currently has
            int maxCandy = *max_element(candies.begin(), candies.end());

            // iterates over each count in the `candies` vector
            for (int candy : candies) {
                  // if a child has highest candy in hand after taking extra candies
                  if (candy + extraCandies >= maxCandy) {
                        // set true for that child
                        result.push_back(true);
                  } else {
                        // else set false for that child
                        result.push_back(false);
                  }
            }

            // return result indicating whether each kid can or cannot have the most candies.
            return result;
      }
};

