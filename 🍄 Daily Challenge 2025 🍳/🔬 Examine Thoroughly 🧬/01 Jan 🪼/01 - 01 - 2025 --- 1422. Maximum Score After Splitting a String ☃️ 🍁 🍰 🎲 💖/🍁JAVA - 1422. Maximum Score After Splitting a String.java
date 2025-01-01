//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1442

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int maxScore(String s) {
            // Initialize the count of zeros to 0
            int zero = 0;

            // Count the total number of '1's in the string
            int one = 0;
            for (int i = 0; i < s.length(); i++) {
                  if (s.charAt(i) == '1') {
                        one++;
                  }
            }

            // Initialize the score to 0
            int score = 0;

            // Iterate through the string up to the second-to-last character
            for (int i = 0; i < s.length() - 1; i++) {
                  // If the current character is '0', increment the zero count
                  if (s.charAt(i) == '0') {
                        zero++;
                  }
                  // Otherwise, decrement the one count
                  else {
                        one--;
                  }

                  // Update the maximum score by considering the sum of zeros and ones
                  score = Math.max(score, zero + one);
            }

            // Return the maximum score obtained
            return score;
      }
}
