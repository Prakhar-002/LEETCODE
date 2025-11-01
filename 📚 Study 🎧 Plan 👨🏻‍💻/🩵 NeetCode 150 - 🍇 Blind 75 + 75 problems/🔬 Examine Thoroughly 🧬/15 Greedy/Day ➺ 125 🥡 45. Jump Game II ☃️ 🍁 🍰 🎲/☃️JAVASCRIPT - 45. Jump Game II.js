//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 45

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var jump = function (nums) {
      let jump = 0; // Number of jumps
      let l = 0, r = 0; // Current range [l, r]

      // Repeat until last index can be reached in next jump
      while (r < nums.length - 1) {
            let farthest = 0; // Farthest reachable in this jump
            for (let i = l; i <= r; i++) {
                  farthest = Math.max(farthest, i + nums[i]);
            }
            l = r + 1;      // Start next range after current
            r = farthest;   // Next jump covers up to 'farthest'
            jump += 1;      // Increment jump count
      }

      return jump; // Minimum jumps needed to reach end
};
