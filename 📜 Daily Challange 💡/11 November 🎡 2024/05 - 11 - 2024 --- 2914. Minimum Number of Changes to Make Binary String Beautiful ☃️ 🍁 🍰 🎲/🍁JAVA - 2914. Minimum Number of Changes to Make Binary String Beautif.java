//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2914

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(a)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int minChanges(String s) {
            // Initialize changes counter
            int changes = 0;

            // Loop through every second character
            for (int i = 0; i < s.length() - 1; i += 2) {
                  // If the adjacent characters differ, increment the changes counter
                  if (s.charAt(i) != s.charAt(i + 1)) {
                        changes++;
                  }
            }

            return changes;
      }
}
