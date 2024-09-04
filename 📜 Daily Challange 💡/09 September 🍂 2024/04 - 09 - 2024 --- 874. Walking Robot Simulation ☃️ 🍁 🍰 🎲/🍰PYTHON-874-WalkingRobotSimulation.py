#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 874

#? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(commands)

#? 🧺 Space complexity ➺ O(m)   👉🏻   m = len(obstacles)

class Solution:
      # `commands`: A list of integers representing commands for the robot
      # `obstacles`: A list of lists of integers, each representing the coordinates of an obstacle
      def robotSim(self, commands: List[int], obstacles: List[List[int]]) -> int:
            # `x` and `y` are initialized to `0`, representing the starting coordinates of the robot
            x, y = 0, 0
            # `direction` is list that represents the direction vectors for North, East, South, and West, respectively
            direction = [[0, 1], [1, 0], [0, -1], [-1, 0]]

            # `d` is initialized to `0`, pointing to the initial direction (North) from the `direction` list
            d = 0
            # `distance` is initialized to `0`, this will record the maximum distance reached
            distance = 0

            #  converts the list of lists `obstacles` into a set of tuples
            obstacles = {tuple(o) for o in obstacles}

            for c in commands:
                  # `c == -1` changes the direction to the right
                  if c == -1:
                        d = (d + 1) % 4

                  # `c == -2` changes the direction to the left
                  if c == -2:
                        d = (d - 1) % 4

                  # if not `-1` or `-2`, the robot needs to move forward
                  else:
                        # `dx, dy` are set to the current direction vectors
                        dx, dy = direction[d]
                        #  loop runs `c` times, moving the robot forward step by step
                        for _ in range(c):
                              #  if the next position `(x + dx, y + dy)` contains an obstacle
                              if (x + dx, y + dy) in obstacles:
                                    # the robot stops
                                    break
                              # Otherwise, the robot updates its position `x` and `y`
                              x, y = x + dx, y + dy

                  # updates `distance` to the maximum value encountered
                  distance = max(distance, x ** 2 + y ** 2)

            # Return the maximum Euclidean distance
            return distance
