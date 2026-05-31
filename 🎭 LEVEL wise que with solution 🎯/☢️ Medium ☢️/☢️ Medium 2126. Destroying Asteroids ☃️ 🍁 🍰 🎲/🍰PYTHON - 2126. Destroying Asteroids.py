#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2126

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from typing import List

class Solution:
      def asteroidsDestroyed(self, mass: int, asteroids: List[int]) -> bool:
            # Sort so we always face the smallest asteroid first
            for asteroid in sorted(asteroids):
                  # Can't destroy asteroid — it's too heavy
                  if mass < asteroid:
                        return False

                  # Absorb asteroid and grow
                  mass += asteroid

            return True