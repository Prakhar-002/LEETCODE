//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 874

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(commands)

//? 🧺 Space complexity ➺ O(m)   👉🏻   m = len(obstacles)

import java.util.*;

class Solution {
      // Time complexity: O(n * m) where n = commands.length, m = obstacles.length
      // Space complexity: O(m) where m = obstacles.length
      public int robotSim(int[] commands, int[][] obstacles) {
            // x and y are initialized to 0, representing the starting coordinates of the
            // robot
            int x = 0, y = 0;
            // direction is a 2D array that represents the direction vectors for North,
            // East, South, and West, respectively
            int[][] direction = { { 0, 1 }, { 1, 0 }, { 0, -1 }, { -1, 0 } };

            // d is initialized to 0, pointing to the initial direction (North) from the
            // direction array
            int d = 0;
            // distance is initialized to 0, this will record the maximum distance reached
            int distance = 0;

            // Convert the 2D array obstacles into a Set of String representations
            Set<String> obstacleSet = new HashSet<>();
            for (int[] obstacle : obstacles) {
                  obstacleSet.add(obstacle[0] + "," + obstacle[1]);
            }

            for (int c : commands) {
                  // c == -1 changes the direction to the right
                  if (c == -1) {
                        d = (d + 1) % 4;
                  }

                  // c == -2 changes the direction to the left
                  else if (c == -2) {
                        d = (d - 1 + 4) % 4;
                  }

                  // if not -1 or -2, the robot needs to move forward
                  else {
                        // dx, dy are set to the current direction vectors
                        int dx = direction[d][0], dy = direction[d][1];
                        // loop runs c times, moving the robot forward step by step
                        for (int i = 0; i < c; i++) {
                              // if the next position (x + dx, y + dy) contains an obstacle
                              if (obstacleSet.contains((x + dx) + "," + (y + dy))) {
                                    // the robot stops
                                    break;
                              }
                              // Otherwise, the robot updates its position x and y
                              x += dx;
                              y += dy;
                        }
                  }
                  // updates distance to the maximum value encountered
                  distance = Math.max(distance, x * x + y * y);
            }

            // Return the maximum Euclidean distance
            return distance;
      }
}
