#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3439

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(startTime)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def maxFreeTime(self, eventTime: int, k: int, startTime: list[int], endTime: list[int]) -> int:
            n = len(startTime)

            # Calculate the gaps (free times) before, between, and after meetings
            gap = [0] * (n + 1)

            # Gap before the first meeting
            gap[0] = startTime[0] - 0

            # Gaps between consecutive meetings
            for i in range(1, n):
                  gap[i] = startTime[i] - endTime[i - 1]

            # Gap after the last meeting
            gap[n] = eventTime - endTime[-1]

            # Sliding window to calculate max sum of at most k+1 gaps (i.e. skipping k meetings)
            left = 0
            currGap = 0
            maxGap = 0

            for right in range(n + 1):
                  currGap += gap[right]

                  # If the number of skipped meetings exceeds k, shrink the window
                  if right - left > k:
                        currGap -= gap[left]
                        left += 1

                  # Update max free time
                  maxGap = max(maxGap, currGap)

            return maxGap
