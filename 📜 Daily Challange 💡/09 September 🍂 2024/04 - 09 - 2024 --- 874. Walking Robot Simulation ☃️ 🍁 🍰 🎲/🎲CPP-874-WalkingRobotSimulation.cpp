//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 874

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(commands)

//? 🧺 Space complexity ➺ O(m)   👉🏻   m = len(obstacles)

#include <vector>
#include <unordered_set>
#include <algorithm>
#include <cmath>
using namespace std;

class Solution {
public:
      // `commands`: A vector of integers representing commands for the robot
      // `obstacles`: A vector of vectors of integers, each representing the coordinates of an obstacle
      int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
            // `x` and `y` are initialized to `0`, representing the starting coordinates of the robot
            int x = 0, y = 0;
            // `direction` is vector that represents the direction vectors for North, East, South, and West, respectively
            vector<vector<int>> direction = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
            
            // `d` is initialized to `0`, pointing to the initial direction (North) from the `direction` vector
            int d = 0;
            // `distance` is initialized to `0`, this will record the maximum distance reached
            int distance = 0;
            
            // converts the vector of vectors `obstacles` into a set of long long integers
            unordered_set<long long> obstacleSet;
            for (const auto& o : obstacles) {
                  long long key = ((long long)o[0] << 32) | (unsigned int)o[1];
                  obstacleSet.insert(key);
            }
            
            for (int c : commands) {
                  // `c == -1` changes the direction to the right
                  if (c == -1) {
                        d = (d + 1) % 4;
                  // `c == -2` changes the direction to the left
                  } else if (c == -2) {
                        d = (d - 1 + 4) % 4;
                  // if not `-1` or `-2`, the robot needs to move forward
                  } else {
                        // `dx, dy` are set to the current direction vectors
                        int dx = direction[d][0];
                        int dy = direction[d][1];
                        // loop runs `c` times, moving the robot forward step by step
                        for (int i = 0; i < c; ++i) {
                              // if the next position `(x + dx, y + dy)` contains an obstacle
                              long long key = ((long long)(x + dx) << 32) | (unsigned int)(y + dy);
                              if (obstacleSet.find(key) != obstacleSet.end()) {
                                    // the robot stops
                                    break;
                              }
                              // Otherwise, the robot updates its position `x` and `y`
                              x += dx;
                              y += dy;
                        }
                  }
                  
                  // updates `distance` to the maximum value encountered
                  distance = max(distance, x * x + y * y);
            }
            
            // Return the maximum Euclidean distance
            return distance;
      }
};

