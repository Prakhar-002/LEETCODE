#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3440

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(startTime)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def maxFreeTime(self, eventTime: int, startTime: list[int], endTime: list[int]) -> int:
            n = len(startTime)

            # This list tracks if the i-th meeting can be skipped to maximize free time
            q = [False] * n

            # t1: max gap before current meeting in forward pass
            # t2: max gap after current meeting in backward pass
            t1 = t2 = 0

            for i in range(n):
                  # ---------- Forward Pass ----------
                  # Check if current meeting fits inside previous max free space
                  if endTime[i] - startTime[i] <= t1:
                        q[i] = True
                  # Update max free time before current meeting
                  t1 = max(t1, startTime[i] - (0 if i == 0 else endTime[i - 1]))

                  # ---------- Backward Pass ----------
                  rev = n - i - 1  # Reverse index from end

                  # Check if current meeting (from end) fits inside trailing gap
                  if endTime[rev] - startTime[rev] <= t2:
                        q[rev] = True
                  # Update max trailing free time after current meeting
                  t2 = max(t2, (eventTime if i == 0 else startTime[n - i]) - endTime[rev])

            res = 0

            # Calculate max possible free time
            for i in range(n):
                  left = 0 if i == 0 else endTime[i - 1]
                  right = eventTime if i == n - 1 else startTime[i + 1]

                  if q[i]:
                        res = max(res, right - left)  # Full segment is usable
                  else:
                        occupied = endTime[i] - startTime[i]
                        res = max(res, right - left - occupied)  # Subtract meeting

            return res
