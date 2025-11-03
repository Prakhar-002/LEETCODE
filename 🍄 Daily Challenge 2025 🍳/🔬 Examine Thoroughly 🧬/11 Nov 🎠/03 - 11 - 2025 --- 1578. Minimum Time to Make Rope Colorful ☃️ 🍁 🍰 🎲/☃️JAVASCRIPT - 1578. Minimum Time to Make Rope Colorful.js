//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1578

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(colors)

//? 🧺 Space complexity ➺ O(1)

function minCost(colors, neededTime) {
      let res = 0;  // Total minimum removal cost
      let l = 0;    // Left pointer for the start of current color group

      for (let r = 1; r < colors.length; r++) {
            if (colors[r] === colors[l]) {
                  // Same color: remove the one with smaller cost
                  if (neededTime[l] < neededTime[r]) {
                        res += neededTime[l]; // Remove left
                        l = r;                // Move left to current with higher cost
                  } else {
                        res += neededTime[r]; // Remove right
                        // left pointer remains for next comparisons
                  }
            } else {
                  // Different color: reset left pointer
                  l = r;
            }
      }
      return res;
}
