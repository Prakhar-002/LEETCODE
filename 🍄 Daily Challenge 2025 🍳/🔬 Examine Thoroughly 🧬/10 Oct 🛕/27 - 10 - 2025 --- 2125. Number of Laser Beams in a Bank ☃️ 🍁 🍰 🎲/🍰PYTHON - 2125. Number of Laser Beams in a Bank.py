#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2125

#? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(bank)

#? 🧺 Space complexity ➺ O(1)   -> m = len(max(bank))

from typing import List 

class Solution:
      def numberOfBeams(self, bank: List[str]) -> int:
            beams = 0         # Total beams count
            prev = 0          # Number of security devices in previous row with devices

            for s in bank:
                  # Count devices in current row
                  cam = sum(1 for ch in s if ch == "1")

                  if cam > 0:
                        # Beams formed are product of current and previous row devices
                        beams += prev * cam
                        prev = cam  # Update previous row devices count

            return beams
