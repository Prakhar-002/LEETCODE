#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1751

#? ⌚ Time complexity ➺ O(n * (n * k + log n)) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n * k)

class Solution:
      def maxValue(self, events: List[List[int]], k: int) -> int:
            # Sort events by their start time
            events.sort()

            n = len(events)
            dp = [[-1] * n for _ in range(k + 1)]  # Memoization table

            # Recursive DFS function with memoization
            def dfs(cur, count, prev_end):
                  if cur == n or count == k:
                        return 0

                  if prev_end >= events[cur][0]:  # Overlapping, skip
                        return dfs(cur + 1, count, prev_end)

                  if dp[count][cur] != -1:  # Already computed
                        return dp[count][cur]

                  # Option 1: Skip the event
                  skip = dfs(cur + 1, count, prev_end)

                  # Option 2: Take the event
                  take = dfs(cur + 1, count + 1, events[cur][1]) + events[cur][2]

                  dp[count][cur] = max(skip, take)
                  return dp[count][cur]

            return dfs(0, 0, -1)
