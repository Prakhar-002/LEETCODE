//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 1051 

var heightChecker = function(heights) {
      let expected = [...heights];

      expected.sort((a, b) => a - b)

      let count = 0

      for (let i = 0; i < heights.length; i++) {
            if (heights[i] !== expected[i]) {
                  count++;
            }
      }

      return count;
}; 