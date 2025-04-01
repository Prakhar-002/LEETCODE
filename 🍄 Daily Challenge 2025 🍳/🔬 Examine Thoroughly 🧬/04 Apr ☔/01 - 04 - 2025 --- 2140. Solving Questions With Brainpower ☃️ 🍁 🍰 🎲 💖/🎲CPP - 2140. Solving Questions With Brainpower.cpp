//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2140

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(questions)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
      long long mostPoints(vector<vector<int>>& questions) {
            int N = questions.size();
            vector<long long> cache(N, 0); // DP array to store max points from each index

            // Traverse the questions in reverse order (bottom-up DP)
            for (int i = N - 1; i >= 0; i--) {
                  int points = questions[i][0];     // Points earned for solving this question
                  int brainpower = questions[i][1]; // Brainpower required (skip next questions)

                  int nextQue = i + 1 + brainpower; // Index of the next available question

                  // Option 1: Solve this question and add future possible points
                  long long choose = points + (nextQue < N ? cache[nextQue] : 0);

                  // Option 2: Skip this question and move to the next one
                  long long skip = (i + 1 < N) ? cache[i + 1] : 0;

                  // Store the max points possible from this question onward
                  cache[i] = max(choose, skip);
            }

            return cache[0]; // The max points possible starting from index 0
      }
};


//!----------------------------------------------------------------------------------------- 

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(questions)

//? 🧺 Space complexity ➺ O(n)

//* Recursion Solution 

class Solution {
public:
      long long mostPoints(vector<vector<int>>& questions) {
            int n = questions.size();
            vector<long long> cache(n, -1); // Memoization array initialized to -1

            return backtrack(0, questions, cache);
      }

private:
      long long backtrack(int i, vector<vector<int>>& questions, vector<long long>& cache) {
            if (i >= questions.size()) {
                  return 0; // Base case: Out of bounds
            }

            if (cache[i] != -1) {
                  return cache[i]; // Return cached value
            }

            int points = questions[i][0];      // Points for solving
            int brainpower = questions[i][1];  // Number of skips after solving

            // Two options: Skip or Solve
            long long skip = backtrack(i + 1, questions, cache); // Skip
            long long solve = points + backtrack(i + brainpower + 1, questions, cache); // Solve

            cache[i] = max(skip, solve); // Store max value
            return cache[i];
      }
};
