#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 933

#? ⌚ Time complexity ➺ O(1)

#? 🧺 Space complexity ➺ O(n) 👉🏻  n = No. of timestamps

from collections import deque

class RecentCounter:

      def __init__(self):
            # Use a deque to store timestamps of requests
            self.queue = deque()

      def ping(self, t: int) -> int:
            # Add the current timestamp to the queue
            self.queue.append(t)

            # Remove timestamps that are outside the 3000 ms window
            while self.queue[0] < t - 3000:
                  self.queue.popleft()

            # The length of the queue represents the number of valid requests
            return len(self.queue)

