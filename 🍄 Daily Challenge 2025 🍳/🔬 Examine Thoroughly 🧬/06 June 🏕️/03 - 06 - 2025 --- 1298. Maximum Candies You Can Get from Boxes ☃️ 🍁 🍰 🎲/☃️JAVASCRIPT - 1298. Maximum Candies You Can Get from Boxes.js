//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1298

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var maxCandies = function (
      status,
      candies,
      keys,
      containedBoxes,
      initialBoxes,
) {
      // Get total number of boxes
      const n = status.length;

      // Create arrays to track state of each box
      const canOpen = new Array(n).fill(false);     // Whether a box is openable
      const hasBox = new Array(n).fill(false);      // Whether we currently possess the box
      const used = new Array(n).fill(false);        // Whether the box has already been opened

      // Initialize canOpen based on status array
      for (let i = 0; i < n; ++i) {
            canOpen[i] = status[i] === 1;           // Box is openable if status is 1
      }

      // Queue to hold boxes ready to be processed
      const q = [];

      // Variable to store total candies collected
      let ans = 0;

      // Start with the initial set of boxes we have
      for (const box of initialBoxes) {
            hasBox[box] = true;                     // Mark that we have this box
            if (canOpen[box]) {                     // If the box can be opened
                  q.push(box);                      // Add it to the queue
                  used[box] = true;                 // Mark it as opened
                  ans += candies[box];              // Collect candies from it
            }
      }

      // Process all openable boxes using BFS
      while (q.length > 0) {
            const bigBox = q.shift();               // Get the next box to process

            // Go through all keys inside this box
            for (const key of keys[bigBox]) {
                  canOpen[key] = true;              // We can now open the box this key unlocks
                  if (!used[key] && hasBox[key]) {  // If we have that box and it’s not used
                        q.push(key);                // Add it to the queue
                        used[key] = true;           // Mark as used
                        ans += candies[key];        // Collect candies from it
                  }
            }

            // Go through all boxes contained within this box
            for (const box of containedBoxes[bigBox]) {
                  hasBox[box] = true;               // We now possess this box
                  if (!used[box] && canOpen[box]) { // If it's openable and not yet used
                        q.push(box);                // Add it to the queue
                        used[box] = true;           // Mark as used
                        ans += candies[box];        // Collect candies from it
                  }
            }
      }

      // Return total candies collected
      return ans;
};
