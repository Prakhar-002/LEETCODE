#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2141

#? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(batteries)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def maxRunTime(self, n: int, batteries: List[int]) -> int:
            # Calculate total available battery power
            sum_power = sum(batteries)

            # Binary search bounds: min=1, max=sum_power/n (average power per computer)
            left, right = 1, sum_power // n

            # Binary search for maximum feasible uniform running time
            while left < right:
                  # Upper midpoint to avoid infinite loop
                  target = right - (right - left) // 2

                  # Calculate total usable power if all computers run for 'target' time
                  extra = sum(min(power, target) for power in batteries)

                  # If we have enough power for n computers × target time, try longer
                  if extra >= n * target:
                        left = target
                  else:
                        right = target - 1

            return left
