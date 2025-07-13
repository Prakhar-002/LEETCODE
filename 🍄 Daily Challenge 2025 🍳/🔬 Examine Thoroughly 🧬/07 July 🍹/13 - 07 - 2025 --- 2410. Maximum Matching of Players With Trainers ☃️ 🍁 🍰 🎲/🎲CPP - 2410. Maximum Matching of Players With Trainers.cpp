//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2410

//? ⌚ Time complexity ➺ O(n log n + m log m) 👉🏻  n = len(players)

//? 🧺 Space complexity ➺ O(1)  -> m = len(trainers)

class Solution {
public:
      int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
            // Sort both players and trainers for greedy matching
            sort(players.begin(), players.end());
            sort(trainers.begin(), trainers.end());

            int pIdx = 0, tIdx = 0, matches = 0;
            int pLen = players.size(), tLen = trainers.size();

            // Iterate over both arrays
            while (pIdx < pLen && tIdx < tLen) {
                  // Skip trainers who can't train current player
                  while (tIdx < tLen && players[pIdx] > trainers[tIdx]) {
                        tIdx++;
                  }

                  // If valid trainer found, make a match
                  if (tIdx < tLen) {
                        matches++;
                        tIdx++; // Move to next trainer
                  }

                  pIdx++; // Move to next player
            }

            return matches;
      }
};
