//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3623

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var countTrapezoids = function (points) {
      // Map to count points per y-coordinate (horizontal levels)
      const pointNum = new Map();

      // Group points by their y-coordinate (x-coordinates irrelevant)
      for (const point of points) {
            const y = point[1];
            pointNum.set(y, (pointNum.get(y) || 0) + 1);
      }

      const mod = 1000000007n;  // 10^9 + 7 for modulo arithmetic
      let ans = 0n;             // Total number of trapezoids
      let sum = 0n;             // Running sum of edges from previous levels

      // Process each horizontal level (distinct y-coordinate)
      for (const pNum of pointNum.values()) {
            // Number of horizontal edges at this level = C(pNum, 2)
            // C(n,2) = n*(n-1)/2 = number of ways to choose 2 points on same y
            const edge = (BigInt(pNum) * BigInt(pNum - 1)) / 2n;

            // Each edge at current level forms trapezoid with EVERY previous edge
            // (different y-coordinates guarantee parallel sides)
            ans = (ans + edge * sum) % mod;

            // Accumulate current level's edges for future levels
            sum = (sum + edge) % mod;
      }

      return Number(ans);
};
