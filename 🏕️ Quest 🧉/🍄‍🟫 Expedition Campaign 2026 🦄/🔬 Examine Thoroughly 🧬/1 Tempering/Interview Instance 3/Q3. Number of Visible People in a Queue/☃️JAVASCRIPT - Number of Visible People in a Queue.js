//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1994

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(heights)

//? 🧺 Space complexity ➺ O(n)

var canSeePersonsCount = function (heights) {
      // Get total number of people (length of heights array)
      const N = heights.length;
      // Initialize result array to store visible count for each person
      const res = new Array(N).fill(0);

      // Use stack to track heights of people we can potentially see
      const stack = [];

      // Iterate from right to left (from back of line to front)
      for (let i = N - 1; i >= 0; i--) {
            const height = heights[i];
            let visible = 0;

            // Pop people from stack who are shorter than current person
            // Each popped person is visible to current person
            while (stack.length > 0 && height > stack[stack.length - 1]) {
                  visible++;
                  stack.pop();
            }

            // If stack not empty, tallest remaining person is also visible
            if (stack.length > 0) {
                  visible++;
            }

            // Store count of visible people for person at index i
            res[i] = visible;
            // Push current person's height onto stack for future comparisons
            stack.push(height);
      }

      return res;
};
