//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 796

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

#include <string>
using namespace std;

class Solution {
      public:
            bool rotateString(string s, string goal) {
                  // Then check if goal is a substring of s + s.
                  // Concatenating s with itself includes all possible rotations of s as substrings.
                  // If goal is found within s + s, it confirms that goal is a rotated version of s.
                  return s.length() == goal.length() && (s + s).find(goal) != string::npos;
            }
};
