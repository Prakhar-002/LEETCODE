//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2109

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(spaces)

//? 🧺 Space complexity ➺ O(1)

var addSpaces = function (s, spaces) {
      // Initialize a variable to keep track of the previous index
      let prevIndex = 0;
      let result = "";

      // Iterate through the list of space positions
      for (let i of spaces) {
            // Append the substring from the previous index to the current space position
            result += s.substring(prevIndex, i) + " ";  // Add a space after each segment
            prevIndex = i;  // Update the previous index
      }

      // Append the remaining part of the string after the last space
      result += s.substring(prevIndex);

      return result;
}