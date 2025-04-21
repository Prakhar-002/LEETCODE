//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2145

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(differences)

//? 🧺 Space complexity ➺ O(1) 

class Solution {
      public int numberOfArrays(int[] differences, int lower, int upper) {
            // Track the current prefix sum
            long currentPrefix = 0;

            // Track max and min prefix values
            long maxPrefix = 0;
            long minPrefix = 0;

            // Loop through all differences
            for (int diff : differences) {
                  currentPrefix += diff;                          // Update prefix sum
                  maxPrefix = Math.max(maxPrefix, currentPrefix); // Update max seen
                  minPrefix = Math.min(minPrefix, currentPrefix); // Update min seen
            }

            // Calculate total usable range
            long validRange = upper - lower;

            // Calculate needed range to accommodate the shifts
            long neededRange = maxPrefix - minPrefix;

            // Calculate total valid starting values
            long totalWays = validRange - neededRange + 1;

            // If at least one way is valid, return count, else return 0
            return totalWays > 0 ? (int) totalWays : 0;
      }
}
