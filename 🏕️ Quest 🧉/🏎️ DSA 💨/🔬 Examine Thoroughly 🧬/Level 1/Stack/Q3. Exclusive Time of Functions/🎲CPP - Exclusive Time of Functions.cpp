//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L1.3 Q3

// ? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <string>
#include <stack>
#include <sstream>
using namespace std;

class Solution {
public:
      vector<int> exclusiveTime(int n, vector<string>& logs) {
            vector<int> res(n, 0);    // Vector to store exclusive times per function
            stack<int> stackFuncs;    // Stack to track active functions
            int prevTime = 0;         // Store previous timestamp

            for (auto& log : logs) {
                  stringstream ss(log);
                  string functionIdStr, type, timestampStr;

                  getline(ss, functionIdStr, ':');
                  getline(ss, type, ':');
                  getline(ss, timestampStr, ':');

                  int funcId = stoi(functionIdStr);
                  int timestamp = stoi(timestampStr);

                  if (type == "start") {
                        // If a function is currently active, add elapsed time to it
                        if (!stackFuncs.empty()) {
                              res[stackFuncs.top()] += timestamp - prevTime;
                        }
                        stackFuncs.push(funcId);
                        prevTime = timestamp;
                  } else {
                        // End of function: Add inclusive elapsed time (+1)
                        res[stackFuncs.top()] += timestamp - prevTime + 1;
                        stackFuncs.pop();
                        prevTime = timestamp + 1;
                  }
            }
            return res;
      }
};
