//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2226

// ? ⌚ Time complexity ➺ O(n log(m)) 👉🏻  n = len(candies)

// ? 🧺 Space complexity ➺ O(1)       👉🏻  m = sum(candies) / k

var maximumCandies = function (candies, k) {
      let totalCandies = candies.reduce((sum, candy) => sum + candy, 0); // Calculate total candies

      // If total candies are less than k, return 0
      if (totalCandies < k) {
            return 0;
      }

      let l = 1, r = Math.floor(totalCandies / k); // Binary search boundaries
      let maxCandies = 0;

      while (l <= r) {
            let m = Math.floor((l + r) / 2); // Middle value (possible max candies per child)
            let divideCandy = 0; // Counter for total children we can serve

            // Count how many children can get `m` candies
            for (let candy of candies) {
                  if (candy >= m) {
                        divideCandy += Math.floor(candy / m);
                  }

                  if (divideCandy >= k) { // Early termination if enough children are served
                        break;
                  }
            }

            if (divideCandy >= k) { // If we can serve at least `k` children
                  maxCandies = m;
                  l = m + 1; // Try for more candies per child
            } else {
                  r = m - 1; // Reduce `m` if we can't serve enough children
            }
      }

      return maxCandies;
};
