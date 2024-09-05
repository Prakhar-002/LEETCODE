#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2028

#? ⌚ Time complexity ➺ O(n + m) 👉🏻  m = len(rolls)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      # `rolls` : A list of integers representing the dice rolls that are already known
      # `mean` : The desired average (mean) of all rolls, including the missing ones.
      # `n` : The number of missing dice rolls.
      def missingRolls(self, rolls: List[int], mean: int, n: int) -> List[int]:
            # `m` : The number of already known rolls
            m = len(rolls)
            # The total sum of all dice rolls (both known and missing)
            total_sum = mean * (n + m)
            # missing dice rolls that needs to be distributed across `n` dice
            missing_sum = total_sum - sum(rolls)

            # If the missing_sum is smaller than n or larger than 6 * n, 
            # it's impossible to find a valid combination of missing dice rolls
            if not (n <= missing_sum <= 6 * n): 
                  # returns an empty list
                  return []

            # This list will store the missing dice rolls
            missingObservation = []

            # The loop runs while there are still missing rolls to assign
            while n:
                  # ensures that each roll is as high as possible (up to 6) 
                  # but still allows for the remaining dice to be valid 1 - 6
                  dice = min(6, missing_sum - n + 1)
                  # Adds the current dice roll (`dice`) to the list 
                  missingObservation.append(dice)
                  # Reduces the remaining sum
                  missing_sum -= dice
                  # Reduces the count of missing rolls left to allocate
                  n -= 1

            # returns the list
            return missingObservation
