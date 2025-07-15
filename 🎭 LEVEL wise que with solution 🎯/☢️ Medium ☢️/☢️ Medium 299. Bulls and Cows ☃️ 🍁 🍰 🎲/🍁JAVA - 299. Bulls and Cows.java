//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 299

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(secret)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public String getHint(String secret, String guess) {
            // Arrays to store frequency of digits 0-9 in secret and guess
            int[] secretCount = new int[10];
            int[] guessCount = new int[10];

            int bulls = 0; // Exact matches at the same position
            int cows = 0; // Correct digit but wrong position

            // Step 1: Count bulls and store unmatched digits for cows
            for (int i = 0; i < secret.length(); i++) {
                  char s = secret.charAt(i);
                  char g = guess.charAt(i);

                  if (s == g) {
                        bulls++; // Matching position and value
                  } else {
                        // Count unmatched digits to use later for cow calculation
                        secretCount[s - '0']++;
                        guessCount[g - '0']++;
                  }
            }

            // Step 2: Calculate cows using minimum counts of unmatched digits
            for (int i = 0; i < 10; i++) {
                  cows += Math.min(secretCount[i], guessCount[i]);
            }

            // Return result in "xAyB" format
            return bulls + "A" + cows + "B";
      }
}
