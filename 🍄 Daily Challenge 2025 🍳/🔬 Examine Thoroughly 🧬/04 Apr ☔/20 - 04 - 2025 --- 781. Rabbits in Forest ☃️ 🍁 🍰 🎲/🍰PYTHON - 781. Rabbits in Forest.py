#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 781

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(answers)

#? 🧺 Space complexity ➺ O(n)

from typing import Counter

class Solution:
      def numRabbits(self, answers: List[int]) -> int:
            # Count the frequency of each answer using Counter
            rabbitCnt = Counter(answers)

            # Total rabbits that could be in the forest
            total_rabbits = 0

            # Loop through each unique answer and its count
            for key, val in rabbitCnt.items():
                  # key: number of other rabbits with the same color
                  # val: number of rabbits who gave this answer

                  grpRabbit = key + 1

                  # Calculate how many full groups of (key + 1) we need
                  # If val is divisible by key + 1, use exact groups
                  # Else, add one extra group to account for the remaining rabbits
                  grp = val // grpRabbit if val % grpRabbit == 0 else (val // grpRabbit) + 1

                  # Total rabbits for this answer = number of groups * group size
                  total_rabbits += grp * grpRabbit

            # Return total number of rabbits in the forest
            return total_rabbits
