#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1578

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(colors)

#? 🧺 Space complexity ➺ O(1) 

from typing import List

class Solution:
      def minCost(self, colors: str, neededTime: List[int]) -> int:
            res = 0   # Total minimum cost
            l = 0     # Left pointer to start of current color segment

            # Traverse the colors string with right pointer
            for r in range(1, len(colors)):
                  if colors[r] == colors[l]:
                        # If colors match, remove the one with smaller needed time
                        if neededTime[l] < neededTime[r]:
                              res += neededTime[l]    # Remove left color
                              l = r                   # Move left pointer forward
                        else:
                              res += neededTime[r]    # Remove right color
                        # Do not move l, as there could be further duplicates
                  else:
                        l = r   # Move to next color segment

            return res
