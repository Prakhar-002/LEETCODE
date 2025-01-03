//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 649

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(senate)

//? 🧺 Space complexity ➺ O(n)

#include <queue>
#include <string>
using namespace std;

class Solution {
public:
      string predictPartyVictory(string senate) {
            queue<int> radiant, dire;

            // Populate the queues with indices of Radiant and Dire senators
            for (int i = 0; i < senate.size(); i++) {
                  if (senate[i] == 'R') {
                        radiant.push(i);
                  } else {
                        dire.push(i);
                  }
            }

            // Process the queues
            while (!radiant.empty() && !dire.empty()) {
                  int r = radiant.front();
                  int d = dire.front();
                  radiant.pop();
                  dire.pop();

                  // The senator with the smaller index survives
                  if (r < d) {
                        radiant.push(r + senate.size());
                  } else {
                        dire.push(d + senate.size());
                  }
            }

            // Return the winner
            return radiant.empty() ? "Dire" : "Radiant";
      }
};
