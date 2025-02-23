//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 739

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var dailyTemperatures = function (temperatures) {
      const n = temperatures.length; // Get the number of temperatures
      const answer = new Array(n).fill(0); // Initialize the result array with zeros
      const tempStack = []; // Stack to store [index, temperature]

      // Iterate through the temperatures array
      for (let i = 0; i < n; i++) {
            const currTemp = temperatures[i]; // Current day's temperature

            // Process stack while the current temperature is greater than the top of stack
            while (tempStack.length > 0 && currTemp > tempStack[tempStack.length - 1][1]) {

                  const [prevIndex, prevTemp] = tempStack.pop(); // Get the last stored temperature index

                  answer[prevIndex] = i - prevIndex; // Calculate the days difference
            }

            // Push the current temperature with index onto the stack
            tempStack.push([i, currTemp]);
      }

      return answer; // Return the result array
}