#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2110

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution(object):
      def getDescentPeriods(self, prices):
            # `periods` accumulates the total count. It's initialized to 1 to account
            # for the first single-element subarray (prices[0]).
            # `prev` tracks the length of the current consecutive descent period. It also
            # starts at 1 for the first element.
            periods = prev = 1 

            # Iterate from the second element to the end of the list.
            for i in range(1, len(prices)):
                  # Check if the current price continues the smooth descent streak.
                  if prices[i] == prices[i - 1] - 1:
                        # If the streak continues, increment its length.
                        prev += 1
                  else:
                        # If the streak is broken, start a new one of length 1.
                        prev = 1

                  # Add the length of the current streak (`prev`) to the total.
                  # This works because a streak of length `k` adds `k` new subarrays
                  # that end at the current position.
                  periods += prev

            # Return the total count of all smooth descent periods.
            return periods