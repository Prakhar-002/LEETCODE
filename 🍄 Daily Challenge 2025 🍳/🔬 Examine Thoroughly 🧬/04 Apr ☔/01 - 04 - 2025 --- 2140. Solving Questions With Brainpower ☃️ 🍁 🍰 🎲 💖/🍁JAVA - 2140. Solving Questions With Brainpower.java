//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2140

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(questions)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public long mostPoints(int[][] questions) {
            int N = questions.length;
            long[] cache = new long[N]; // DP cache to store max points from each index

            // Iterate the questions in reverse order (bottom-up DP)
            for (int i = N - 1; i >= 0; i--) {
                  int points = questions[i][0];     // Points earned if we solve this question
                  int brainpower = questions[i][1]; // Brainpower required (skip next questions)

                  int nextQue = i + 1 + brainpower; // Index of the next available question

                  // Choice 1: Solve this question and add future possible points
                  long choose = points + (nextQue < N ? cache[nextQue] : 0);

                  // Choice 2: Skip this question and move to the next one
                  long skip = (i + 1 < N) ? cache[i + 1] : 0;

                  // Store the max points possible from this question onward
                  cache[i] = Math.max(choose, skip);
            }

            return cache[0]; // The max points we can get from index 0
      }
}


//!----------------------------------------------------------------------------------------- 

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(questions)

//? 🧺 Space complexity ➺ O(n)

//* Recursion Solution

class Solution {
      public long mostPoints(int[][] questions) {
            int n = questions.length;
            long[] cache = new long[n]; // Memoization array to store max points at each index
            Arrays.fill(cache, -1); // Initialize with -1 to indicate uncomputed states

            return backtrack(0, questions, cache);
      }

      private long backtrack(int i, int[][] questions, long[] cache) {
            if (i >= questions.length) {
                  return 0; // Base case: No more questions left
            }

            if (cache[i] != -1) {
                  return cache[i]; // Return cached result if already computed
            }

            int points = questions[i][0]; // Points earned by solving this question
            int brainpower = questions[i][1]; // Number of questions to skip

            // Two choices: Skip or Solve the question
            long skip = backtrack(i + 1, questions, cache); // Skip current question
            long solve = points + backtrack(i + brainpower + 1, questions, cache); // Solve & jump

            cache[i] = Math.max(skip, solve); // Store max result in cache
            return cache[i];
      }
}
