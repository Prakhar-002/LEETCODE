//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2124

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

#include <string>
using namespace std;

class Solution {
public:
      // Function to check if every 'a' appears before every 'b' in the given string
      bool checkString(string s) {
            // If "ba" is found in the string, return false, as it means a 'b' appears before an 'a'
            // Otherwise, return true
            return s.find("ba") == string::npos;
      }
};
