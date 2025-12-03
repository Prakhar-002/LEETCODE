//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1732

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(gain)

//? 🧺 Space complexity ➺ O(1)

#include<vector>
#include<math.h> 
using namespace std;

class Solution {
public:
      int largestAltitude(vector<int>& gain) {
            // Initialize the highest altitude to negative infinity
            int highAltitude = INT_MIN;

            // Initialize the current altitude to 0
            int curSum = 0;

            // Iterate through the gain vector to calculate altitudes
            for (int n : gain) {
                  // Add the current gain to the cumulative altitude
                  curSum += n;

                  // Update the highest altitude encountered so far
                  highAltitude = max(highAltitude, curSum);
            }

            // If the highest altitude is positive, return it; otherwise, return 0
            return max(highAltitude, 0);
      }
};