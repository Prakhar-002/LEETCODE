#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 649

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

# https://github.com/Prakhar-002/LEETCODE

# ⌚ Time complexity -> O(n) ->  n = len(nums)

#  Space complexity -> O(1)

from collections import deque

class Solution:
      def predictPartyVictory(self, senate: str) -> str:
            returnVal = {
                  'D': 'Dire',
                  'R': 'Radiant'
            }
            q1 = deque()
            q2 = deque()

            for ch in senate:
                  q1.append(ch)

            while q1:
                  if len(q1) == 1:
                        return returnVal[q1[0]]

                  sn = q1.popleft()

                  while q1 and q1[-1] == sn:
                        q2.append(q1.pop())

                        if not q1:
                              return returnVal[sn]

                  if q1:
                        q1.pop()

                  while q2:
                        q1.append(q2.popleft())

                  q1.append(sn)

            return returnVal[q1[0]]
