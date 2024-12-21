//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 735

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(asteroids)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <iostream>
using namespace std;

class Solution {
      public:
            vector<int> asteroidCollision(vector<int>& asteroids) {
                  // Initialize a vector to store surviving asteroids
                  vector<int> stack;

                  // Iterate through each asteroid in the input vector
                  for (int cur : asteroids) {
                        // Process collisions if the current asteroid is moving left and the top of the stack is moving right
                        while (!stack.empty() && cur < 0 && stack.back() > 0) {
                              int last = stack.back(); // Get the last asteroid in the stack

                              // If the current and last asteroids have equal magnitude but opposite directions
                              if (-cur == last) {
                                    stack.pop_back(); // Both asteroids are destroyed
                                    cur = 0;          // Mark the current asteroid as destroyed
                                    break;
                              }
                              // If the current asteroid is larger in magnitude, destroy the top asteroid
                              else if (-cur > last) {
                                    stack.pop_back();
                              }
                              // If the top asteroid is larger, the current asteroid is destroyed
                              else {
                                    cur = 0;
                                    break;
                              }
                        }

                        // If the current asteroid survives, add it to the stack
                        if (cur != 0) {
                              stack.push_back(cur);
                        }
                  }

                  return stack; // Return the resulting vector of surviving asteroids
            }
};
