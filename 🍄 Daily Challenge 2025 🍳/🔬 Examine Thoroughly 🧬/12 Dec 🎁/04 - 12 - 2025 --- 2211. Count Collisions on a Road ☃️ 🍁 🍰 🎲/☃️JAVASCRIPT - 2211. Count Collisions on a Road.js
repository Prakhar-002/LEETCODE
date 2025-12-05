//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2211

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var countCollisions = function (directions) {
      // lstrip("L"): remove leading L cars (escape left, no collision)
      // rstrip("R"): remove trailing R cars (escape right, no collision)
      let dirs = directions.replace(/^L+/, '').replace(/R+$/, '');

      // Count remaining cars excluding "S" (already stopped)
      // Remaining "R/L" will all collide and become "S":
      // R hits → becomes S (stops)
      // L hits → becomes S (stops)
      return dirs.replace(/S/g, '').length;
};
