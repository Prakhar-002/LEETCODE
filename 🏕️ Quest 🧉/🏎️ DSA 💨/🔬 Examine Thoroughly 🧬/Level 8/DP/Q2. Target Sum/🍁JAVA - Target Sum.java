//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 494

//? ⌚ Time complexity ➺ O(n + m) 👉🏻 n = [-sum(numbers), sum(numbers)]

//? 🧺 Space complexity ➺ O(m)    👉🏻 m = sum of absolute values

import java.util.HashMap;
import java.util.Map;

class Solution {
      public int findTargetSumWays(int[] numbers, int targetSum) {
            // Map to store the number of ways to achieve each sum
            Map<Integer, Integer> waysToSum = new HashMap<>();
            waysToSum.put(0, 1); // Base case: one way to achieve sum 0

            // Iterate over each number in the input array
            for (int number : numbers) {
                  // Temporary map for the current iteration
                  Map<Integer, Integer> currentWays = new HashMap<>();

                  // Update ways to achieve each possible sum with the current number
                  for (Map.Entry<Integer, Integer> entry : waysToSum.entrySet()) {
                        int currentSum = entry.getKey();
                        int count = entry.getValue();

                        currentWays.put(currentSum + number, currentWays.getOrDefault(currentSum + number, 0) + count);
                        currentWays.put(currentSum - number, currentWays.getOrDefault(currentSum - number, 0) + count);
                  }

                  // Move to the next iteration by replacing the old map
                  waysToSum = currentWays;
            }

            // Return the number of ways to achieve the target sum
            return waysToSum.getOrDefault(targetSum, 0);
      }
}