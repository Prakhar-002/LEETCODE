//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3000

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(rectangles)

//? 🧺 Space complexity ➺ O(1)

var areaOfMaxDiagonal = function (rectangles) {
      // maxDiaSq stores the largest squared diagonal encountered so far.
      // Using squared diagonals avoids precision issues and the cost of Math.sqrt.
      let maxDiaSq = 0;

      // maxArea stores the area corresponding to the current best diagonal.
      // On ties (equal diagonals), we keep the larger area.
      let maxArea = 0;

      // Iterate through each rectangle described by [length, width].
      for (const [length, width] of rectangles) {
            // Pythagoras theorem (squared): diagonal^2 = length^2 + width^2
            const curDiaSq = length * length + width * width;

            // Area of the current rectangle.
            const area = length * width;

            // If this rectangle has a strictly longer diagonal, update both
            // the best diagonal and the area tied to it.
            if (curDiaSq > maxDiaSq) {
                  maxDiaSq = curDiaSq;
                  maxArea = area;
            }
            // If the diagonal is equal to the current best, break the tie by area.
            else if (curDiaSq === maxDiaSq) {
                  if (area > maxArea) {
                        maxArea = area;
                  }
            }
      }

      // The area for the rectangle that has the longest diagonal
      // (with ties resolved by picking the larger area).
      return maxArea;
};
