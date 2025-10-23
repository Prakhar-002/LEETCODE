//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3461

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

#include <string>
using namespace std;

class Solution {
public:
      bool hasSameDigits(string s) {
            // Repeatedly reduce the string until length == 2
            while (s.size() > 2) {
                  string temp;
                  for (int i = 0; i < (int)s.size() - 1; i++) {
                        int sum = ((s[i] - '0') + (s[i + 1] - '0')) % 10;
                        temp += to_string(sum);
                  }
                  s = temp;
            }

            // Check if final two digits are equal
            return s[0] == s[1];
      }
};
