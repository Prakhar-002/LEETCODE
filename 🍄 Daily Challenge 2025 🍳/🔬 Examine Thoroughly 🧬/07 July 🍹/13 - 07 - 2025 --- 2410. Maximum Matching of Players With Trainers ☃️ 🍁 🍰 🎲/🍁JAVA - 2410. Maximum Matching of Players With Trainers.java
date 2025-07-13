//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2410

//? ⌚ Time complexity ➺ O(n log n + m log m) 👉🏻  n = len(players)

//? 🧺 Space complexity ➺ O(1)  -> m = len(trainers)

class Solution {
      public int matchPlayersAndTrainers(int[] players, int[] trainers) {
            // Sort both arrays to allow greedy matching
            Arrays.sort(players);
            Arrays.sort(trainers); 

            int pIdx = 0, tIdx = 0, matches = 0;
            int pLen = players.length, tLen = trainers.length;

            // Loop through both arrays
            while (pIdx < pLen && tIdx < tLen) {
                  // Skip trainers who can't train the current player
                  while (tIdx < tLen && players[pIdx] > trainers[tIdx]) {
                        tIdx++;
                  }

                  // If a valid trainer is found, match them
                  if (tIdx < tLen) {
                        matches++;
                        tIdx++; // Move to the next trainer
                  }

                  pIdx++; // Move to the next player
            }

            return matches;
      }
}
