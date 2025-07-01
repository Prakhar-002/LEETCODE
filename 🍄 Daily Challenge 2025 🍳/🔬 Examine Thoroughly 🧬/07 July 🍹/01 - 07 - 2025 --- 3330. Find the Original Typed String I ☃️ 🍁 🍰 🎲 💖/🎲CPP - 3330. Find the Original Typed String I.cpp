//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3330

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(word)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int possibleStringCount(string word) {
            int ans = 1;
            int n = word.size();

            for (int i = 1; i < n; ++i) {
                  // If two characters are the same consecutively
                  if (word[i - 1] == word[i]) {
                        ans++; // Increment possible string count
                  }
            }

            return ans;
      }
};
