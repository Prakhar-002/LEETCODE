//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L2.4 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      bool rotateString(string s, string goal) {
            // Check if the lengths are different
            if (s.length() != goal.length())
                  return false;

            // Create a new string by concatenating 's' with itself
            string doubledString = s + s;

            // Use find to search for 'goal' in 'doubledString'
            // If find returns an index that is less than the
            // length of doubledString, 'goal' is a substring
            return doubledString.find(goal) < doubledString.length();
      }
};