#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1386

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from collections import defaultdict
from typing import List

class Solution:
      def maxNumberOfFamilies(self, n: int, reservedSeats: List[List[int]]) -> int:

            # Dictionary to store reserved seats for each row
            # Example: {row_number : {set of reserved seat numbers}}
            rows = defaultdict(set)

            # Fill the dictionary with reserved seat information
            for r, c in reservedSeats:
                  rows[r].add(c)

            # Rows without any reserved seats can always seat 2 families
            # because both left block (2-5) and right block (6-9) are free
            res = (n - len(rows)) * 2

            # Process only rows that contain reserved seats
            for r in rows:

                  # Get the reserved seats for this row
                  seats = rows[r]

                  # Check if left block (seats 2,3,4,5) is free
                  left = all(s not in seats for s in [2, 3, 4, 5])

                  # Check if middle block (seats 4,5,6,7) is free
                  middle = all(s not in seats for s in [4, 5, 6, 7])

                  # Check if right block (seats 6,7,8,9) is free
                  right = all(s not in seats for s in [6, 7, 8, 9])

                  # If both left and right blocks are free
                  # then we can seat 2 families in this row
                  if left and right:
                        res += 2

                  # Otherwise if any one block is available
                  # (left OR middle OR right)
                  # then only 1 family can sit
                  elif left or middle or right:
                        res += 1

            # Return the total number of families that can be seated
            return res