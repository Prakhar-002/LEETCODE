//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2410

//? ⌚ Time complexity ➺ O(n log n + m log m) 👉🏻  n = len(players)

//? 🧺 Space complexity ➺ O(1)  -> m = len(trainers)

var matchPlayersAndTrainers = function (players, trainers) {
      // Sort both arrays to match greedily
      players.sort((a, b) => a - b);
      trainers.sort((a, b) => a - b);

      let pIdx = 0, tIdx = 0, matches = 0;
      const pLen = players.length, tLen = trainers.length;

      // Iterate through players and trainers
      while (pIdx < pLen && tIdx < tLen) {
            // Skip trainers who can't train the current player
            while (tIdx < tLen && players[pIdx] > trainers[tIdx]) {
                  tIdx++;
            }

            // If a valid trainer is found
            if (tIdx < tLen) {
                  matches++;
                  tIdx++; // Move to next trainer
            }

            pIdx++; // Move to next player
      }

      return matches;
};
