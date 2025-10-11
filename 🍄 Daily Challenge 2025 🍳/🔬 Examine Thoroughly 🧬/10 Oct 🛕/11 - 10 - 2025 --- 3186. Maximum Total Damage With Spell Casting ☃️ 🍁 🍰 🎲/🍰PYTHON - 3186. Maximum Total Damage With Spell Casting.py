#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3186

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from typing import List
from collections import Counter

class Solution:
      def maximumTotalDamage(self, power: List[int]) -> int:
            # Count occurrences of each unique power value
            power_counts = Counter(power)

            # Initialize a list with a dummy value to help indexing
            # Each element: (power_value, frequency)
            freq_list = [(-(10**9), 0)]

            # Append power values and their counts sorted by power values
            for val in sorted(power_counts.keys()):
                  freq_list.append((val, power_counts[val]))

            n = len(freq_list)
            dp = [0] * n  # dp[i] = max damage achievable using elements up to i

            max_damage = 0
            l = 1

            for r in range(1, n):
                  # Move left pointer forward while power difference > 2
                  while l < r and freq_list[l][0] < freq_list[r][0] - 2:
                        max_damage = max(max_damage, dp[l])
                        l += 1

                  # Update dp for r position
                  dp[r] = max_damage + freq_list[r][0] * freq_list[r][1]

            # Return the max damage achievable
            return max(dp)
