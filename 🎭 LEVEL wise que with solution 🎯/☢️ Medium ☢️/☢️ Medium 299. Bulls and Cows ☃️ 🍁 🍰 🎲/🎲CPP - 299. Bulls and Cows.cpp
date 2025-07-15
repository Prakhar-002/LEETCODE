//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 299

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(secret)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      string getHint(string secret, string guess) {
            vector<int> secretCount(10, 0); // Frequency of digits in secret
            vector<int> guessCount(10, 0);  // Frequency of digits in guess

            int bulls = 0, cows = 0;

            // Step 1: Identify bulls and prepare counts for unmatched digits
            for (int i = 0; i < secret.size(); ++i) {
                  if (secret[i] == guess[i]) {
                        bulls++; // Digit and position match
                  }
                  else {
                        secretCount[secret[i] - '0']++;
                        guessCount[guess[i] - '0']++;
                  }
            }

            // Step 2: Count cows using min of unmatched digit frequencies
            for (int i = 0; i < 10; ++i) {
                  cows += min(secretCount[i], guessCount[i]);
            }

            // Combine result into "xAyB" format
            return to_string(bulls) + "A" + to_string(cows) + "B";
      }
};
