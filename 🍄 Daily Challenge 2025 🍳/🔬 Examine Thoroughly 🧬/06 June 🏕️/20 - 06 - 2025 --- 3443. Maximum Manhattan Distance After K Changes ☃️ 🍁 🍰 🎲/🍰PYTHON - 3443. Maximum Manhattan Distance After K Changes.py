#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3443

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def maxDistance(self, s: str, k: int) -> int:
            latitude = 0     # Tracks north-south movement (positive for N, negative for S)
            longitude = 0    # Tracks east-west movement (positive for E, negative for W)
            ans = 0          # Stores the maximum reachable distance
            n = len(s)

            for i in range(n):
                  # Update coordinates based on the direction
                  if s[i] == "N":
                        latitude += 1
                  elif s[i] == "S":
                        latitude -= 1
                  elif s[i] == "E":
                        longitude += 1
                  elif s[i] == "W":
                        longitude -= 1

                  # Manhattan distance = |latitude| + |longitude|
                  # We can use up to `k` moves to modify the path, so we can move up to 2*k more
                  # But we can't exceed the number of steps taken (i + 1)
                  curr_dist = abs(latitude) + abs(longitude)
                  max_possible = curr_dist + 2 * k

                  # Update answer with min(max_possible, i + 1)
                  ans = max(ans, min(max_possible, i + 1))

            return ans
