//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 42

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(Height)

//? 🧺 Space complexity ➺ O(n)

var trap = function (height) {
      const n = height.length;

      // Array to store the maximum height to the right of each element
      const right = new Array(n).fill(0);
      right[0] = height[0];

      // Populate the right max array
      for (let i = 1; i < n; i++) {
            right[i] = Math.max(right[i - 1], height[i]);
      }

      // Array to store the maximum height to the left of each element
      const left = new Array(n).fill(0);
      left[n - 1] = height[n - 1];

      // Populate the left max array
      for (let i = n - 2; i >= 0; i--) {
            left[i] = Math.max(left[i + 1], height[i]);
      }

      // Calculate the total volume of water trapped
      let volume = 0;

      for (let i = 0; i < n; i++) {
            // Water trapped at each index is determined by the minimum
            // of left and right max heights minus the height at the index
            volume += Math.min(left[i], right[i]) - height[i];
      }

      return volume; // Return the total water trapped
}