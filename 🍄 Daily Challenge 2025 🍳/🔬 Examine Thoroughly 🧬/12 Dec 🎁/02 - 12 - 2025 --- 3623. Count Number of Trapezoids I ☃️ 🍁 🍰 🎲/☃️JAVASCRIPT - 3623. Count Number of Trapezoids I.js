//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3623

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var countTrapezoids = function (points) {
      // Map y-coordinates to point counts
      const pointNum = new Map();

      // Group points by y-coordinate
      for (let point of points) {
            const y = point[1];
            pointNum.set(y, (pointNum.get(y) || 0) + 1);
      }

      const MOD = 1000000007;
      let ans = 0;
      let totalSum = 0;

      // Process each horizontal level
      for (let pNum of pointNum.values()) {
            // Edges per level = C(pNum, 2) = p*(p-1)/2
            const edge = Math.floor(pNum * (pNum - 1) / 2);

            // Trapezoids formed with previous levels
            ans = (ans + edge * totalSum) % MOD;

            // Add current edges to total for next levels
            totalSum = (totalSum + edge) % MOD;
      }

      return ans;
};
