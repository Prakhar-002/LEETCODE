//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3160

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(queries)

//? 🧺 Space complexity ➺ O(n)

var queryResults = function (limit, queries) {
      let result = []; // Stores the number of unique colors after each query

      let colorMap = new Map(); // Tracks the count of each color
      let ballMap = new Map();  // Maps each ball to its current color

      // Process each query (ball, color) pair
      for (let [ball, color] of queries) {
            // If the ball is already present, remove its previous color mapping
            if (ballMap.has(ball)) {
                  let prevColor = ballMap.get(ball); // Get the previous color of the ball
                  colorMap.set(prevColor, (colorMap.get(prevColor) || 0) - 1); // Decrease count of previous color

                  // If the previous color count reaches zero, remove it from the map
                  if (colorMap.get(prevColor) === 0) {
                        colorMap.delete(prevColor);
                  }
            }

            // Update the ball's color to the new one
            ballMap.set(ball, color);

            // Increase the count of the new color
            colorMap.set(color, (colorMap.get(color) || 0) + 1);

            // Append the number of unique colors to the result list
            result.push(colorMap.size);
      }

      return result;  // Return the list of unique color counts after each query
}