//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3228

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

#include <string>
using namespace std;

class Solution {
public:
      int maxOperations(const string& s) {
            int opr = 0;   // Total operations count
            int ones = 0;  // Count of '1's encountered

            for (size_t i = 0; i < s.size() - 1; i++) {
                  if (s[i] == '1') {
                        ones++;      // Increment count of '1's

                        // Next char '0' adds operations equal to current ones count
                        if (s[i + 1] == '0') {
                              opr += ones;
                        }
                  }
            }

            return opr;  // Return computed operations count
      }
};
