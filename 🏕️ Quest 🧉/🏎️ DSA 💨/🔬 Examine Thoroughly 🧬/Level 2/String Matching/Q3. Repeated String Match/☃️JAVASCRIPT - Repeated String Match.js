//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L2.4 Q3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var repeatedStringMatch = function (A, B) {
      // Minimum times A must be repeated so that its length is >= length of B
      const q = Math.floor((B.length - 1) / A.length) + 1;

      // Try q repetitions and q+1 repetitions of A
      for (let i = 0; i < 2; i++) {
            // Build A repeated (q + i) times
            const repeated = A.repeat(q + i);

            // Check if B is a substring of repeated
            if (repeated.includes(B)) {
                  return q + i;    // Return repetition count
            }
      }

      // If B is not a substring in any of the attempts, return -1
      return -1;
};
