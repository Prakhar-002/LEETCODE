#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 1823

#? ⌚ Time complexity -> O(n * k) 👉 Given

#? 🧺 Space complexity -> O(n) 👉 Using a dequeue

from collections import deque

class Solution:
      def findTheWinner(self, n: int, k: int) -> int:
            # for circle we add remove at last and remove from first
            q = deque()

            # first add our n friends goes from 1 to n
            for i in range(1, n + 1):
                  q.append(i)

            while len(q) > 1:
                  # first count upto k - 1 and add them queue 
                  for i in range(k - 1):
                        # we pop from left and add our friend to right 
                        q.append(q.popleft())

                  # remove the Kth friend from queue
                  q.popleft()

            # return the winner
            return q[0]

# -------------------------------------------------------------

#* Better approach -> "Recursion" 💡 

#? ⌚ Time complexity -> O(n) 👉 Given

#? 🧺 Space complexity -> O(n) 👉 Using recursion

class Solution:
      def findTheWinner(self, n: int, k: int) -> int:

            def winner(n, k) :
                  # base case if 1 elem is remain 0 will be It's index
                  if n == 1:
                        return 0

                  # call for n - 1 people with plus k and have a mod for circular
                  return (winner(n - 1, k) + k) % n

            # find the index and return the our friend number 
            return winner(n, k) + 1

#* Better approach -> "Recursion Two Line" 💡

class Solution:
      def findTheWinner(self, n: int, k: int) -> int:
            if n == 1:
                  return 1
            else:
                  # recursion
                  return (self.findTheWinner(n-1, k)+k-1) % n + 1

# -------------------------------------------------------------

#* Best approach "Constant Space" 💡

#? ⌚ Time complexity -> O(n) 👉 Given

#? 🧺 Space complexity -> O(1) 

class Solution:
      def findTheWinner(self, n: int, k: int) -> int:

            winnerIdx = 0

            for people in range(1, n + 1):
                  winnerIdx = (winnerIdx + k) % people

            return winnerIdx + 1
