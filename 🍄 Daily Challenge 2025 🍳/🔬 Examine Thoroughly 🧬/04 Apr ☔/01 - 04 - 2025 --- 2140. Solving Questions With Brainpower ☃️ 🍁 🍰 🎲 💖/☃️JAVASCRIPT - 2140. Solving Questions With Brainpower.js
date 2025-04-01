//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2140

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(questions)

//? 🧺 Space complexity ➺ O(n)

var mostPoints = function (questions) {
      let N = questions.length;
      let cache = new Array(N).fill(0); // DP array to store max points from each index

      // Traverse the questions in reverse order (bottom-up DP)
      for (let i = N - 1; i >= 0; i--) {
            let [points, brainpower] = questions[i]; // Extract points and brainpower

            let nextQue = i + 1 + brainpower; // Index of the next available question

            // Option 1: Solve this question and add future possible points
            let choose = points + (nextQue < N ? cache[nextQue] : 0);

            // Option 2: Skip this question and move to the next one
            let skip = (i + 1 < N) ? cache[i + 1] : 0;

            // Store the max points possible from this question onward
            cache[i] = Math.max(choose, skip);
      }

      return cache[0]; // The max points possible starting from index 0
};


//!----------------------------------------------------------------------------------------- 

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(questions)

//? 🧺 Space complexity ➺ O(n)

//* Recursion Solution 

var mostPoints = function (questions) {
      let n = questions.length;
      let cache = new Array(n).fill(-1); // Memoization array

      function backtrack(i) {
            if (i >= n) {
                  return 0; // Base case: Out of bounds
            }

            if (cache[i] !== -1) {
                  return cache[i]; // Return cached value if available
            }

            let [points, brainpower] = questions[i]; // Extract points & brainpower

            // Two choices: Skip or Solve the question
            let skip = backtrack(i + 1); // Skip current question
            let solve = points + backtrack(i + brainpower + 1); // Solve & jump

            cache[i] = Math.max(skip, solve); // Store max in cache
            return cache[i];
      }

      return backtrack(0);
};
