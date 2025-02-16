//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1718

// ? ⌚ Time complexity ➺ O(n)

// ? 🧺 Space complexity ➺ O(n)

var constructDistancedSequence = function (n) {
      // Initialize the result sequence with size (2 * n - 1), filled with 0s
      let resSeq = new Array(n * 2 - 1).fill(0);

      // Boolean array to track used numbers (1 to n)
      let isNumberUsed = new Array(n + 1).fill(false);

      function backtracking(i) {
            // If we have successfully filled all positions, return true
            if (i === resSeq.length) {
                  return true;
            }

            // Skip already filled positions and move to the next
            if (resSeq[i] !== 0) {
                  return backtracking(i + 1);
            }

            // Try placing numbers from n down to 1 for lexicographically largest sequence
            for (let num = n; num >= 1; num--) {
                  // Skip if the number is already used
                  if (isNumberUsed[num]) {
                        continue;
                  }

                  // If num > 1, ensure it can be placed at both required positions
                  if (num > 1 && (i + num >= resSeq.length || resSeq[i + num] !== 0)) {
                        continue;
                  }

                  // Mark the number as used and place it at index i
                  isNumberUsed[num] = true;
                  resSeq[i] = num;

                  // If num > 1, also place it at (i + num) index
                  if (num > 1) {
                        resSeq[i + num] = num;
                  }

                  // Find the next empty position to continue placement
                  let j = i + 1;
                  while (j < resSeq.length && resSeq[j] !== 0) {
                        j++;
                  }

                  // Recursively attempt to construct the remaining sequence
                  if (backtracking(j)) {
                        return true;
                  }

                  // Undo placement (backtrack)
                  isNumberUsed[num] = false;
                  resSeq[i] = 0;

                  if (num > 1) {
                        resSeq[i + num] = 0;
                  }
            }

            // If no valid placement is found, return false
            return false;
      }

      // Start backtracking from index 0
      backtracking(0);
      return resSeq;
}