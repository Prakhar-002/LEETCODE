#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2145

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(differences)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def numberOfArrays(self, differences: List[int], lower: int, upper: int) -> int:
            # Initialize the current value, and min/max values reached in the sequence
            maxPrefix = minPrefix = 0
            currentPrefix = 0

            # Traverse through each difference to simulate prefix sums
            for diff in differences:
                  currentPrefix += diff                        # Update the prefix sum
                  maxPrefix = max(maxPrefix, currentPrefix)   # Track max value reached
                  minPrefix = min(minPrefix, currentPrefix)   # Track min value reached

            # Calculate the total available range
            validRange = upper - lower

            # Calculate the maximum shift needed to fit the sequence in bounds
            neededRange = maxPrefix - minPrefix

            # Check how many valid starting values `x` can be chosen
            totalWays = validRange - neededRange + 1

            return totalWays if totalWays > 0 else 0
