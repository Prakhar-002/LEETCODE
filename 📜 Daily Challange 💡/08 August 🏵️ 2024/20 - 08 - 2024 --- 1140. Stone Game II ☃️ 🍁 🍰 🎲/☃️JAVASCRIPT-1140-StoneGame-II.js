//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1640

//? ⌚ Time complexity ➺ O(n ^ 3) 👉🏻  n = len(piles)

//? 🧺 Space complexity ➺ O(n ^ n)

var stoneGameII = function (piles) {
      const dp = new Map();  // Map to store the results of subproblems for memoization

      const getStone = (alice, idx, M) => {
            // Base case: if we've reached the end of the piles, no more stones can be taken
            if (idx === piles.length) {
                  return 0;
            }

            // Check if the result for this state is already computed
            const key = `${alice},${idx},${M}`;
            if (dp.has(key)) {
                  return dp.get(key);
            }

            // Initialize the result based on who's turn it is
            let aliceStone = alice ? 0 : Infinity;

            let totalStone = 0;  // Total number of stones taken in this turn

            // Consider taking x piles where x ranges from 1 to 2 * M
            for (let x = 1; x <= 2 * M; x++) {
                  // If taking x piles exceeds available piles, stop
                  if (idx + x > piles.length) {
                        break;
                  }

                  // Add stones from the current pile to totalStone
                  totalStone += piles[idx + x - 1];

                  // Recursively calculate the score for the next state
                  if (alice) {
                        aliceStone = Math.max(aliceStone, totalStone + getStone(!alice, idx + x, Math.max(M, x)));
                  } else {
                        aliceStone = Math.min(aliceStone, getStone(!alice, idx + x, Math.max(M, x)));
                  }
            }

            // Store the result in the memoization map
            dp.set(key, aliceStone);

            return aliceStone;
      };

      // Start the game with Alice's turn, starting at index 0, with M initially set to 1
      return getStone(true, 0, 1);
};