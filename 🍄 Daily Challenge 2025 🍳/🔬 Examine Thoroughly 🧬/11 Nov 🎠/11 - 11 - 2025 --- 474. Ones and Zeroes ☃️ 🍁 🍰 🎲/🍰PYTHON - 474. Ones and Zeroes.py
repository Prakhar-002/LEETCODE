#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 474

#? ⌚ Time complexity ➺ O(l * m * n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(l * m * n) 

class Solution:
      def findMaxForm(self, strs: List[str], m: int, n: int) -> int:
            dp = {}   # Memoization dictionary to store computed results

            # Recursive helper function to explore choices
            def dfs(i, m, n):
                  # Base case: all strings processed
                  if i == len(strs):
                        return 0

                  # If result already computed for current state, return it
                  if (i, m, n) in dp:
                        return dp[(i, m, n)]

                  # Count the number of zeros and ones in current string
                  zero, one = strs[i].count("0"), strs[i].count("1")

                  # Option 1: skip current string
                  dp[(i, m, n)] = dfs(i + 1, m, n)

                  # Option 2: use current string if enough zeros and ones are available
                  if zero <= m and one <= n:
                        dp[(i, m, n)] = max(
                              dp[(i, m, n)],                 # Max between skipping and using current string
                              1 + dfs(i + 1, m - zero, n - one)  # Use string, recurse for next with reduced limits
                        )

                  # Return the best result for this state
                  return dp[(i, m, n)]

            # Start recursion from index 0 with full m and n available
            return dfs(0, m, n)
