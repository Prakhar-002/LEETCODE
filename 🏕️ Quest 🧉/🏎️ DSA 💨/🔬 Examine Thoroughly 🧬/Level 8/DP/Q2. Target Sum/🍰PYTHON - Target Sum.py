#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 494

#? ⌚ Time complexity ➺ O(n + m) 👉🏻 n = [-sum(numbers), sum(numbers)]

#? 🧺 Space complexity ➺ O(m)    👉🏻 m = sum of absolute values

from collections import defaultdict

class Solution:
      def findTargetSumWays(self, numbers: List[int], target_sum: int) -> int:
            # Dictionary to store the number of ways to achieve each sum
            ways_to_sum = defaultdict(int)

            # Base case: one way to achieve sum 0 (using no numbers)
            ways_to_sum[0] = 1

            # Iterate over each number in the input list
            for number in numbers:
                  # Temporary dictionary for the current iteration
                  current_ways = defaultdict(int)

                  # Update ways to achieve each possible sum with the current number
                  for current_sum, count in ways_to_sum.items():
                        current_ways[current_sum + number] += count
                        current_ways[current_sum - number] += count

                  # Move to the next iteration by replacing the old dictionary
                  ways_to_sum = current_ways

            # Return the number of ways to achieve the target sum
            return ways_to_sum[target_sum]