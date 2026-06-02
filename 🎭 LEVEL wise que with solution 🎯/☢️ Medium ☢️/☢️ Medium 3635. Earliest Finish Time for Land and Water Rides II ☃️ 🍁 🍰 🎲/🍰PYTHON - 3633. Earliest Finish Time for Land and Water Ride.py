#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3633

#? ⌚ Time complexity ➺ O(n + m) 👉🏻  n = len(landStartTime)

#? 🧺 Space complexity ➺ O(1)    👉🏻  m = len(waterStartTime)

from typing import List 

class Solution:

      # Find earliest finish time when doing all A tasks first, then one B task
      def solve(self, startA, durationA, startB, durationB):

            # Find the earliest time all A tasks can finish
            endA = float("inf")
            for i in range(len(startA)):
                  endA = min(endA, startA[i] + durationA[i])

            # Pick the B task that finishes earliest after all A tasks are done
            ans = float("inf")
            for i in range(len(startB)):
                  # Must wait until endA if B hasn't started yet
                  ans = min(ans, max(startB[i], endA) + durationB[i])

            return ans

      def earliestFinishTime(
            self,
            landStartTime: List[int],
            landDuration: List[int],
            waterStartTime: List[int],
            waterDuration: List[int]
      ) -> int:
            # Try land tasks first, then a water task
            landFirst  = self.solve(landStartTime, landDuration, waterStartTime, waterDuration)

            # Try water tasks first, then a land task
            waterFirst = self.solve(waterStartTime, waterDuration, landStartTime, landDuration)

            # Return whichever ordering finishes earlier
            return min(landFirst, waterFirst)