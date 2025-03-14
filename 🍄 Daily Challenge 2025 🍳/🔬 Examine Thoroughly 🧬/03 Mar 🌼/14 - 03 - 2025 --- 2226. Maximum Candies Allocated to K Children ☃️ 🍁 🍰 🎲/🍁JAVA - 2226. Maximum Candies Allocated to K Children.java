// ! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2226

// ? ⌚ Time complexity ➺ O(n log(m)) 👉🏻 n = len(candies)

// ? 🧺 Space complexity ➺ O(1) 👉🏻 m = sum(candies) / k 

class Solution {
      public int maximumCandies(int[] candies, long k) {
            long totalCandies = 0; // Use long to handle large sums

            // Compute total candies
            for (int candy : candies) {
                  totalCandies += candy;
            }

            // If total candies are less than k, it's impossible to distribute
            if (totalCandies < k) {
                  return 0;
            }

            int l = 1, r = (int) (totalCandies / k); // Binary search range
            int maxCandies = 0;

            while (l <= r) {
                  int m = l + (r - l) / 2; // Middle value (possible max candies per child)
                  long divideCandy = 0; // Counter for total children we can serve

                  // Count how many children can get `m` candies
                  for (int candy : candies) {
                        divideCandy += candy / m; // Use integer division

                        if (divideCandy >= k) { // Early termination if enough children are served
                              break;
                        }
                  }

                  if (divideCandy >= k) { // If we can serve at least `k` children
                        maxCandies = m; // Store the valid candy distribution
                        l = m + 1; // Try for more candies per child
                  } else {
                        r = m - 1; // Reduce `m` if we can't serve enough children
                  }
            }

            return maxCandies; // Return the maximum candies per child
      }
}
