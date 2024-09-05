//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2028

//? ⌚ Time complexity ➺ O(n + m) 👉🏻  m = len(rolls)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      // `rolls` : An array of integers  the dice rolls that are already known
      // `mean` : The desired average (mean) of all rolls, including the missing ones.
      // `n` : The number of missing dice rolls.
      public int[] missingRolls(int[] rolls, int mean, int n) {
            // `m` : The number of already known rolls
            int m = rolls.length;
            // The total sum of all dice rolls (both known and missing)
            int totalSum = mean * (n + m);

            // calculating the known rolls sum 
            int knownDiceSum = 0;
            for (int roll : rolls) {
                  knownDiceSum += roll;
            }
            // missing dice rolls that needs to be distributed across `n` dice
            int missingSum = totalSum - knownDiceSum;

            // If the missing_sum is smaller than n or larger than 6 * n,
            // it's impossible to find a valid combination of missing dice rolls
            if (n > missingSum || missingSum > 6 * n) {
                  // returns an empty array
                  return new int[0];
            }

            // This array will store the missing dice rolls
            int[] missingObservation = new int[n];

            // The loop runs while there are still missing rolls to assign
            for (int i = 0; i < n; i++) {
                  // ensures that each roll is as high as possible (up to 6)
                  // but still allows for the remaining dice to be valid 1 - 6
                  int dice = Math.min(6, missingSum - (n - i - 1));
                  // Adds the current dice roll (`dice`) to the array
                  missingObservation[i] = dice;
                  // Reduces the remaining sum
                  missingSum -= dice;
            }

            // returns the array
            return missingObservation;
      }
}
