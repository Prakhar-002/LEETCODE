//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Software Design L5 Q3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(rectangle)

//? 🧺 Space complexity ➺ O(n)

class SubrectangleQueries {
      /**
       * LeetCode 1476. Subrectangle Queries
       * Direct matrix modification (passes constraints)
       */
      constructor(rectangle) {
            /**
             * Deep copy using map and slice
             * Time: O(rows * cols), Space: O(rows * cols)
             */
            this.rectangle = rectangle.map(row => [...row]);
      }

      updateSubrectangle(row1, col1, row2, col2, newValue) {
            /**
             * Update subrectangle [row1..row2][col1..col2]
             * Time: O((row2-row1+1) * (col2-col1+1))
             */
            for (let i = row1; i <= row2; i++) {
                  for (let j = col1; j <= col2; j++) {
                        this.rectangle[i][j] = newValue;
                  }
            }
      }

      getValue(row, col) {
            /**
             * O(1) array access
             */
            return this.rectangle[row][col];
      }
}
