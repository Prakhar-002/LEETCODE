#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 649

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(senate)

#? 🧺 Space complexity ➺ O(n)

from collections import deque

class Solution:
      def predictPartyVictory(self, senate: str) -> str:
            # Queues for storing the indices of Radiant and Dire senators
            radiant = deque()
            dire = deque()

            # Populate the queues with the initial positions of the senators
            # Each senator is represented by their index in the string `senate`
            for i, s in enumerate(senate):
                  if s == 'R':  # Radiant senator
                        radiant.append(i)
                  else:  # Dire senator
                        dire.append(i)

            # Process the queues until one party has no senators left
            while radiant and dire:
                  # Remove the next available Radiant and Dire senator from their respective queues
                  r = radiant.popleft()
                  d = dire.popleft()

                  # Compare their indices to determine who bans whom:
                  # The senator with the smaller index acts first and survives to the next round
                  if r < d:
                        # Radiant acts first, so Radiant survives and cycles back
                        # Add this senator's index plus the length of the original senate to simulate cycling
                        radiant.append(r + len(senate))
                  else:
                        # Dire acts first, so Dire survives and cycles back
                        dire.append(d + len(senate))

            # Determine the winner based on which queue still has senators remaining
            # If the Radiant queue is not empty, Radiant wins; otherwise, Dire wins
            return 'Radiant' if radiant else 'Dire'

