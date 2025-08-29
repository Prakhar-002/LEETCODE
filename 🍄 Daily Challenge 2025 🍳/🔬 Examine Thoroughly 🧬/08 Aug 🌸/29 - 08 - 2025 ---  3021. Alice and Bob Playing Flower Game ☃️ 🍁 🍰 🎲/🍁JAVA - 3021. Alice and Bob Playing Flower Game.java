//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3021

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(1)

public class Solution {
      public long flowerGame(int n, int m) {
            // Count of odd numbers in n
            long oddN = (n + 1L) / 2L;
            // Count of even numbers in n
            long evenN = n / 2L;

            // Count of odd numbers in m
            long oddM = (m + 1L) / 2L;
            // Count of even numbers in m
            long evenM = m / 2L;

            // Alice wins for sums that are odd:
            // (odd n * even m) + (odd m * even n)
            return (oddN * evenM) + (oddM * evenN);
      }
}

//!--------------------------------------------------------------------------------------- 

// ? ⌚ Time complexity ➺ O(1)

// ? 🧺 Space complexity ➺ O(1)

public class Solution {
      /**
       * Calculate the number of pairs (x, y) where 1 <= x <= n and 1 <= y <= m
       * such that the sum x + y is odd.
       * Half of the total pairs have an odd sum, so return half of n * m.
       */
      public long flowerGame(int n, int m) {
            // Cast m to long to prevent integer overflow during multiplication
            // Then multiply by n and divide by 2 to get half the total pairs
            return ((long) m * n) / 2;
      }
}
