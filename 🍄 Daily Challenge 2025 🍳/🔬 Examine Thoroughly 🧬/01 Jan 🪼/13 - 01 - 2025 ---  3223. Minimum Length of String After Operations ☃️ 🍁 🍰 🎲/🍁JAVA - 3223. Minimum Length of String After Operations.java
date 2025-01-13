//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3223

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int minimumLength(String s) {
            // Create an array to count occurrences of each letter in the string
            int[] charFreq = new int[26];

            // Iterate over each character in the string
            for (int i = 0; i < s.length(); i++) {
                  char ch = s.charAt(i);
                  // Increment the count for the corresponding character
                  charFreq[ch - 'a']++;
            }

            // Initialize the result variable to store the minimum length
            int minLength = 0;

            // Iterate through the frequency counts
            for (int freq : charFreq) {
                  if (freq > 0) { // If the character appears in the string
                        // Add 1 if frequency is odd, otherwise add 2
                        minLength += (freq % 2 == 1) ? 1 : 2;
                  }
            }

            // Return the calculated minimum length
            return minLength;
      }
}
