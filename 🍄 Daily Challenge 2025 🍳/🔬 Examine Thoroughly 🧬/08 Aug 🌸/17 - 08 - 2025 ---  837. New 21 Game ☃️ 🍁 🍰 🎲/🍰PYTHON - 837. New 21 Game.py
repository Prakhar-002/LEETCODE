#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 837

#? ⌚ Time complexity ➺ O(k + maxPts) 

#? 🧺 Space complexity ➺ O(k)

class Solution:
      def new21Game(self, n: int, k: int, maxPts: int) -> float:
            if k == 0 or k + maxPts <= n:
                  return 1.0

            windowSum = 0 

            for i in range(k, k + maxPts):
                  windowSum += 1 if i <= n else 0

            dp = {}

            for i in range(k - 1, -1, -1):
                  dp[i] = windowSum / maxPts
                  remove = 0

                  if i + maxPts <= n:
                        remove = dp.get(i + maxPts, 1)

                  windowSum += dp[i] - remove

            return dp[0]

#! With Explanation

class Solution:
      def new21Game(self, n: int, k: int, maxPts: int) -> float:
            # ----------------------------------------------------------
            # Step 1: Handle Edge Cases
            # ----------------------------------------------------------
            # If Alice stops drawing immediately (k=0) or is guaranteed to end with
            # a score <= n, the probability is 1.0.
            if k == 0 or k + maxPts <= n:
                  return 1.0

            # ----------------------------------------------------------
            # Step 2: Initialize Sliding Window for DP
            # ----------------------------------------------------------
            # This problem uses a sliding window DP approach.
            # `dp[i]` is the probability of winning starting from score `i`.
            # We calculate `dp` backwards from `k-1` to `0`.
            # `windowSum` stores the sum of probabilities for the next `maxPts` possible scores.
            # For scores `i >= k`, the game stops. `dp[i]` is 1 if `i <= n`, else 0.
            windowSum = 0.0
            for i in range(k, k + maxPts):
                  if i <= n:
                        windowSum += 1.0

            # `dp` will store the computed probabilities for scores less than k.
            dp = {}

            # ----------------------------------------------------------
            # Step 3: Iterate and Apply Sliding Window DP
            # ----------------------------------------------------------
            # Iterate backwards from score `k - 1` down to 0.
            for i in range(k - 1, -1, -1):
                  # The probability at `i` is the average of probabilities in the current window.
                  dp[i] = windowSum / maxPts

                  # Slide the window for the next iteration (i-1):
                  # The old window was `dp[i+1]...dp[i+maxPts]`.
                  # The new window is `dp[i]...dp[i+maxPts-1]`.
                  # So, we add `dp[i]` and remove `dp[i+maxPts]`.

                  # `remove` is the value of `dp[i+maxPts]`, which is sliding out of the window.
                  remove = 0.0
                  # If `i + maxPts` is a winning score (<= n), its probability is either
                  # a pre-computed value from `dp` or 1 if it's a stopping point (`>= k`).
                  if i + maxPts <= n:
                        remove = dp.get(i + maxPts, 1.0)

                  # Update the window sum for the next calculation.
                  windowSum += dp[i] - remove

            # ----------------------------------------------------------
            # Step 4: Return the Result
            # ----------------------------------------------------------
            # The final answer is the probability of winning starting from score 0.
            return dp[0]
