#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 735

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(asteroids)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def asteroidCollision(self, asteroids):
            # Initialize a result list to store surviving asteroids
            res = []

            # Iterate through each asteroid in the input list
            for cur in asteroids:
                  # Process collisions if the current asteroid is moving left and the last is moving right
                  while res and cur < 0 and res[-1] > 0:
                        last = res[-1]  # Get the last asteroid in the result list

                        # If the current and last asteroids have equal magnitude but opposite directions
                        if -cur == last:
                              res.pop()  # Both asteroids are destroyed
                              cur = 0    # Mark the current asteroid as destroyed
                              break

                        # If the current asteroid is larger in magnitude, destroy the last asteroid
                        elif -cur > last:
                              res.pop()

                        # If the last asteroid is larger, the current asteroid is destroyed
                        else:
                              cur = 0
                              break

                  # If the current asteroid survives, add it to the result list
                  if cur != 0:
                        res.append(cur)

            return res  # Return the resulting list of surviving asteroids
