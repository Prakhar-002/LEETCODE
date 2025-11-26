//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L1.3 Q1

//? ⌚ Time complexity ➺ O(n)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
      vector<string> buildArray(vector<int>& target, int n) {
            vector<string> operations;
            int cur = 0;

            // Iterate numbers from 1 to n
            for (int i = 1; i <= n; i++) {
                  if (cur == (int)target.size()) {
                        break;
                  }
                  if (target[cur] == i) {
                        // Push matching number
                        operations.push_back("Push");
                        cur++;
                  } else {
                        // Push and Pop for numbers not in target
                        operations.push_back("Push");
                        operations.push_back("Pop");
                  }
            }

            return operations;
      }
};
