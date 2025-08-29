//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3021

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(1)

var flowerGame = function (n, m) {
      // Number of odd numbers in [1, n]
      const oddN = Math.floor((n + 1) / 2);
      // Number of even numbers in [1, n]
      const evenN = Math.floor(n / 2);

      // Number of odd numbers in [1, m]
      const oddM = Math.floor((m + 1) / 2);
      // Number of even numbers in [1, m]
      const evenM = Math.floor(m / 2);

      // Winning pairs:
      // (odd n * even m) + (odd m * even n)
      return (oddN * evenM) + (oddM * evenN);
};

//!--------------------------------------------------------------------------------------- 

// ? ⌚ Time complexity ➺ O(1)

// ? 🧺 Space complexity ➺ O(1)

var flowerGame = function (n, m) {
      // Multiply n and m to get total pairs
      // Math.floor(...) is used to perform integer division
      // This rounds down the division result to the nearest integer
      // Since half of all pairs have odd sum, return half of total pairs
      return Math.floor((m * n) / 2);
};
