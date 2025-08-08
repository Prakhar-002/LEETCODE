//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 808

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(1)

#define db double

class Solution {
public:
      db dp[193][193]; // Memoization table to store intermediate probabilities

      // Recursive function to calculate probability that soup A finishes first
      db poss(int qA, int qB) {
            // Case 1: Soup A still remains but soup B is finished
            if (qA > 0 && qB <= 0) {
                  return 0; // B finishes first
            }
            // Case 2: Soup B still remains but soup A is finished
            if (qA <= 0 && qB > 0) {
                  return 1; // A finishes first
            }
            // Case 3: Both soups are finished simultaneously
            if (qA <= 0 && qB <= 0) {
                  return 0.5; // Equal chance
            }

            // Check if result already computed
            if (dp[qA][qB] != -1.0) {
                  return dp[qA][qB];
            }

            // Average probability of four serving operations
            db t1 = 0.25 * poss(qA - 4, qB);   // Serve 100 ml from A, 0 from B
            t1 += 0.25 * poss(qA - 3, qB - 1); // Serve 75 from A, 25 from B
            t1 += 0.25 * poss(qA - 2, qB - 2); // Serve 50 from A, 50 from B
            t1 += 0.25 * poss(qA - 1, qB - 3); // Serve 25 from A, 75 from B

            // Store and return result
            return dp[qA][qB] = t1;
      }

      double soupServings(int n) {
            // Optimization: for very large n, probability approaches 1
            if (n >= 4800) {
                  return 1;
            }

            // Initialize DP array with -1.0 to indicate unvisited states
            for (int i = 0; i < 193; ++i)
                  for (int j = 0; j < 193; ++j)
                        dp[i][j] = -1.0;

            // Convert quantity to units of 25 ml for easier computation
            db N = ceil(n / 25.0);

            // Compute probability that soup A finishes first
            return poss(N, N);
      }
};
