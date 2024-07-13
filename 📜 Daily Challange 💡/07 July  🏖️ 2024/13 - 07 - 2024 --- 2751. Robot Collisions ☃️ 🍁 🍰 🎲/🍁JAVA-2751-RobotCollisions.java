//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 2751

//? ⌚ Time complexity -> O(n) 👉 SORTING 

//? 🧺 Space complexity -> O(n) using HashMap and Stack

import java.util.*;

class Solution {
      public List<Integer> survivedRobotsHealths(int[] positions, int[] healths, String directions) {
            HashMap<Integer, Integer> indexMap = new HashMap<>();

            // making a map for position to index value
            for (int i = 0; i < positions.length; i++) {
                  indexMap.put(positions[i], i);
            }

            Stack<Integer> stack = new Stack<>();

            Arrays.sort(positions);

            // we go in sorted way cause we are given position wise robot's health
            for (int position : positions) {
                  // get the index of our current robot.
                  int idx = indexMap.get(position);

                  // robot is coming in  left -> and next coming from right <- then
                  // collision possible (top of stack) L ->  <- R (current robot)

                  // append Right dir Robot
                  if (directions.charAt(idx) == 'R') {
                        stack.push(idx);
                  }

                  // if top is Left and current is Right
                  else {
                        // while stack is not empty and health[i] > 0
                        // cause we update the health will 0 if colloid
                        while (!stack.isEmpty() && healths[idx] > 0) {
                              // pop our top of stack for left robot

                              // Take the left and right robot and colloid them

                              int leftRobot = stack.pop();
                              int rightRobot = idx;

                              if (healths[rightRobot] > healths[leftRobot]) {
                                    // left will destroy
                                    healths[leftRobot] = 0;
                                    // right will get dec in it's health by one
                                    healths[rightRobot] -= 1;
                              }

                              else if (healths[rightRobot] < healths[leftRobot]) {
                                    // right will destroy
                                    healths[rightRobot] = 0;
                                    // left will get dec in it's health by one
                                    healths[leftRobot] -= 1;
                                    // cause left have health so it will be in our stack
                                    stack.push(leftRobot);
                              }

                              else {
                                    /// both will destroy themselves
                                    healths[leftRobot] = 0;
                                    healths[rightRobot] = 0;
                              }
                        }
                  }
            }

            List<Integer> remainingHealth = new ArrayList<>();
            for (int health : healths) {
                  if (health > 0) {
                        remainingHealth.add(health);
                  }
            }

            return remainingHealth;
      }
}