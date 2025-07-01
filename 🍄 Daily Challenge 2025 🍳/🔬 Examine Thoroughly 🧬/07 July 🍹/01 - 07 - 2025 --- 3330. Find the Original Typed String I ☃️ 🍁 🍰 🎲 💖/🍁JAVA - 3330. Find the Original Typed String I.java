//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3330

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(word)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int possibleStringCount(String word) {
            int ans = 1;
            int n = word.length();

            for (int i = 1; i < n; i++) {
                  // If consecutive characters are the same
                  if (word.charAt(i - 1) == word.charAt(i)) {
                        ans++;  // Count this as an additional possible string
                  }
            }

            return ans;
      }
}
