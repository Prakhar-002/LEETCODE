//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 853

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var carFleet = function (target, position, speed) {
      const n = position.length;

      // Combine position and speed into one array of pairs
      const pairs = [];
      for (let i = 0; i < n; i++) {
            pairs.push([position[i], speed[i]]);
      }

      // Sort the pairs based on position in descending order
      pairs.sort((a, b) => b[0] - a[0]);

      const stack = []; // Stack to track fleet arrival times

      // Loop through each car
      for (const [pos, spd] of pairs) {
            // Calculate time to reach the target
            const time = (target - pos) / spd;
            stack.push(time); // Push time into the stack

            // If current car can catch the car ahead, merge them into one fleet
            const sz = stack.length;
            if (sz >= 2 && stack[sz - 1] <= stack[sz - 2]) {
                  stack.pop(); // Pop the current car's time (merged fleet)
            }
      }

      // Remaining elements in stack represent separate fleets
      return stack.length;
};
