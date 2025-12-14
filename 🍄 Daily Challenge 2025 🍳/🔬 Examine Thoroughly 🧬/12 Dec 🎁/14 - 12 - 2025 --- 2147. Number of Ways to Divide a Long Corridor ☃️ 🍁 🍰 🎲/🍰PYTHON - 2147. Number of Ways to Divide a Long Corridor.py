#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2147

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(corridor)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def numberOfWays(self, corridor: str) -> int:
            """
            Count ways to divide corridor into sections with exactly 2 'S' (seats) each.
            Dynamic Programming with 3 states tracking seat counts between dividers.
            corridor contains 'S' (seats) and 'P' (plants/empty).
            """
            MOD = 10**9 + 7

            # DP states:
            # zero = ways to reach current position with 0 seats in current section
            # one = ways with 1 seat in current section  
            # two = ways with 2 seats in current section
            zero = 0   # Previous section ended (0 seats so far)
            one = 0    # 1 seat in current unfinished section
            two = 1    # Valid section completed (2 seats, ready for divider)

            # Process corridor left to right
            for thing in corridor:
                  if thing == 'S':  # Encounter a seat
                        # Shift states: new seat advances previous states
                        zero = one      # Previous "1-seat" → now "0-seat" (new section)
                        one, two = two, one  # Rotate: 2→1, 1→2
                  else:  # 'P' - plant/empty (no state change for seats)
                        # Can only add empty to completed sections
                        two = (two + zero) % MOD

            # Answer: ways ending with valid section (exactly 2 seats)
            return zero
