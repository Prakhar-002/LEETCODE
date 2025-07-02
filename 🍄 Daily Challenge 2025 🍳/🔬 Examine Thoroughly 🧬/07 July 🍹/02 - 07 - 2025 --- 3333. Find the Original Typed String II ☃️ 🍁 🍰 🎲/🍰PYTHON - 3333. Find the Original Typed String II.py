#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3333

#? ⌚ Time complexity ➺ O(k * g) 👉🏻  n = len(groups)

#? 🧺 Space complexity ➺ O(k)

# https://github.com/Prakhar-002/LEETCODE

# ⌚ Time complexity -> O(k * g) ->  n = len(groups)

#  Space complexity -> O(k)

class Solution:
      MOD = 10**9 + 7   # Define modulo constant

      def possibleStringCount(self, word: str, k: int) -> int:
            # Edge case: empty string has 0 possible strings
            if not word:
                  return 0

            groups = []     # List to store lengths of contiguous character groups
            count = 1

            # Step 1: Count length of each character group (like "aaabb" -> [3, 2])
            for i in range(1, len(word)):
                  if word[i] == word[i - 1]:
                        count += 1
                  else:
                        groups.append(count)
                        count = 1
            groups.append(count)  # Add the final group

            total = 1
            # Step 2: Multiply group sizes (initial total count)
            for num in groups:
                  total = (total * num) % self.MOD

            # Step 3: If k ≤ number of groups, return total directly
            if k <= len(groups):
                  return total

            # Step 4: Dynamic Programming to count invalid combinations
            dp = [0] * k  # dp[i] = number of ways to select i+1 characters violating group limits
            dp[0] = 1     # Base case: 1 way to choose 1 character initially

            # For each group, calculate number of ways to select characters exceeding limits
            for num in groups:
                  new_dp = [0] * k
                  sum_val = 0

                  for s in range(k):
                        if s > 0:
                              sum_val = (sum_val + dp[s - 1]) % self.MOD
                        if s > num:
                              # Subtract out-of-window contribution
                              sum_val = (sum_val - dp[s - num - 1] + self.MOD) % self.MOD
                        new_dp[s] = sum_val
                  dp = new_dp  # Move to next group

            # Sum up invalid sequences (those selecting more than `len(groups)` characters)
            invalid = sum(dp[len(groups):k]) % self.MOD

            # Subtract invalid from total to get valid strings
            return (total - invalid + self.MOD) % self.MOD
