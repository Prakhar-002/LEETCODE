#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1510

#? ⌚ Time complexity ➺ O(n sqrt(n)) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n) 

class Solution:
      def winnerSquareGame(self, n: int) -> bool:
            # Memoization array: None = unvisited, True/False = cached outcome
            dp = [None] * (n + 1)

            def solve(rem):
                  # Base case: 0 stones left means the current player loses
                  if rem == 0:
                        return False

                  # Return cached result if already computed
                  if dp[rem] is not None:
                        return dp[rem]

                  # Try all possible non-zero square moves
                  k = 1
                  while k * k <= rem:
                        # If opponent loses after this move, current player wins
                        if not solve(rem - k * k):
                              dp[rem] = True
                              return True
                        k += 1

                  # If no square move leads to a victory, current player loses
                  dp[rem] = False
                  return False

            return solve(n)