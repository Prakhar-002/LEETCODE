//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2145

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(differences)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int numberOfArrays(vector<int>& differences, int lower, int upper) {
            // Track current prefix sum
            long long currentPrefix = 0;

            // Track min and max of prefix sum
            long long maxPrefix = 0;
            long long minPrefix = 0;

            // Traverse the differences array
            for (int diff : differences) {
                  currentPrefix += diff;                           // Update prefix
                  maxPrefix = max(maxPrefix, currentPrefix);      // Update max prefix
                  minPrefix = min(minPrefix, currentPrefix);      // Update min prefix
            }

            // Compute the usable range
            long long validRange = upper - lower;

            // Compute the required range for sequence
            long long neededRange = maxPrefix - minPrefix;

            // Total ways = range that fits + 1
            long long totalWays = validRange - neededRange + 1;

            // Return result based on whether it's valid
            return totalWays > 0 ? (int) totalWays : 0;
      }
};
