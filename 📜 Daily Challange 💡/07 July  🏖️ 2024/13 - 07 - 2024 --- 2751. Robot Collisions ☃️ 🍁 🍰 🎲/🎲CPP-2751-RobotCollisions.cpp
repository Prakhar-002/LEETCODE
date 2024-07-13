//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 2751

//? ⌚ Time complexity -> O(n) 👉 SORTING

//? 🧺 Space complexity -> O(n) using HashMap and Stack

#include <vector>
#include <unordered_map>
#include <stack>
#include <algorithm>
using namespace std;

class Solution {
public:
      vector<int> survivedRobotsHealths(vector<int> &positions,
                                          vector<int> &healths, string directions) {
            // making a map for position to index value
            unordered_map<int, int> indexMap;
            for (int i = 0; i < positions.size(); ++i) {
                  indexMap[positions[i]] = i;
            }

            stack<int> stack;

            // we go in sorted way cause we are given position wise robot's health
            vector<int> sortedPositions = positions;
            sort(sortedPositions.begin(), sortedPositions.end());

            for (const int &position : sortedPositions) {
                  // get the index of our current robot
                  int idx = indexMap[position];

                  // robot is coming in  left -> and next coming from right <- then
                  // collision possible (top of stack) L ->  <- R (current robot)

                  // append Right dir Robot
                  if (directions[idx] == 'R') {
                        stack.push(idx);
                  }

                  // if top is Left and current is Right
                  else {
                        // while stack is not empty and health[i] > 0
                        // cause we update the health will 0 if colloid
                        while (!stack.empty() && healths[idx]) {
                              // pop our top of stack for left robot

                              // Take the left and right robot and colloid them
                              int leftRobot = stack.top();
                              stack.pop();
                              int rightRobot = idx;

                              if (healths[rightRobot] > healths[leftRobot]) {
                                    // left will destroy
                                    healths[leftRobot] = 0;
                                    // right will get dec in it's health by one
                                    healths[rightRobot]--;
                              }
                              else if (healths[rightRobot] < healths[leftRobot]) {
                                    // right will destroy
                                    healths[rightRobot] = 0;
                                    // left will get dec in it's health by one
                                    healths[leftRobot]--;
                                    // cause left have health so it will be in our stack
                                    stack.push(leftRobot);
                              }
                              else {
                                    // both will destroy themselves
                                    healths[leftRobot] = healths[rightRobot] = 0;
                              }
                        }
                  }
            }

            // return those robot who have health till now
            vector<int> result;
            for (int h : healths) {
                  if (h > 0) {
                        result.push_back(h);
                  }
            }
            return result;
      }
};