//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3021

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      long long flowerGame(int n, int m) {
            // Count of odd numbers in [1, n]: (n + 1) / 2 (integer division)
            long long oddN = (n + 1LL) / 2LL;
            // Count of even numbers in [1, n]: n / 2
            long long evenN = n / 2LL;

            // Count of odd numbers in [1, m]
            long long oddM = (m + 1LL) / 2LL;
            // Count of even numbers in [1, m]
            long long evenM = m / 2LL;

            // Number of winning pairs:
            // (odd n * even m) + (odd m * even n)
            return (oddN * evenM) + (oddM * evenN);
      }
};

//!--------------------------------------------------------------------------------------- 

// ? ⌚ Time complexity ➺ O(1)

// ? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      /**
       * Calculate the number of pairs (x, y) with 1 <= x <= n and 1 <= y <= m
       * such that the sum x + y is odd.
       * Since exactly half of all pairs have an odd sum,
       * the result is half of the total pairs (n * m).
       */
      long long flowerGame(int n, int m) {
            // Cast m to long long to avoid integer overflow during multiplication
            // Multiply n and m, then divide by 2 to get half the pairs
            return (long long) m * n / 2;
      }
};
