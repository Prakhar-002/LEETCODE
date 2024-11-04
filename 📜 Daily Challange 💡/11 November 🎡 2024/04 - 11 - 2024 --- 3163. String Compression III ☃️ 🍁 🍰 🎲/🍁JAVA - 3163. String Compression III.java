//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3163

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(word)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public String compressedString(String word) {
            int n = word.length();
            int start = 0; // Starting index of the current sequence
            StringBuilder comp = new StringBuilder();

            for (int i = 1; i <= n; i++) {
                  // Check if we reached the end of the string or found a different character
                  if (i == n || word.charAt(i) != word.charAt(start) || (i - start) == 9) {
                        comp.append(i - start); // Append the length of the current sequence
                        comp.append(word.charAt(start)); // Append the character itself
                        start = i; // Update start for the new sequence
                  }
            }

            return comp.toString();
      }
}