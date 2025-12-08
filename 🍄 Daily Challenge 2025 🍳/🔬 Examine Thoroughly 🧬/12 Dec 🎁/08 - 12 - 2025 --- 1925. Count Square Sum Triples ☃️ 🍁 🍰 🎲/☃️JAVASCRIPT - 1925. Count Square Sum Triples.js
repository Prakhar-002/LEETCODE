//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1925

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var countTriples = function (n) {
      let res = 0;

      // Enumerate all possible Pythagorean triples (a,b,c) where 1 ≤ a,b,c ≤ n
      for (let a = 1; a <= n; a++) {
            for (let b = 1; b <= n; b++) {
                  // Pythagorean theorem: a² + b² = c²
                  const cSquared = a * a + b * b;

                  // c = floor(sqrt(a² + b²))
                  const c = Math.floor(Math.sqrt(cSquared));

                  // Valid triple satisfies:
                  // 1. c ≤ n (within bounds)
                  // 2. c² exactly equals a² + b² (perfect square)
                  if (c <= n && c * c === cSquared) {
                        res++;
                  }
            }
      }

      return res;
};
