//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 621

//? ⌚ Time complexity ➺ O(m) 

//? 🧺 Space complexity ➺ O(1)

var leastInterval = function (tasks, n) {
      // Create a frequency array for 26 uppercase letters
      const count = new Array(26).fill(0);

      // Count each task frequency
      for (const task of tasks) {
            count[task.charCodeAt(0) - 'A'.charCodeAt(0)]++;
      }

      // Find the maximum frequency
      const maxf = Math.max(...count);

      // Count how many tasks have the max frequency
      let maxCount = 0;
      for (const c of count) {
            if (c === maxf) {
                  maxCount++;
            }
      }

      // Calculate the least time using formula
      const time = (maxf - 1) * (n + 1) + maxCount;

      // Return the maximum between total tasks and time
      return Math.max(tasks.length, time);
};
