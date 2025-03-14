//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2226

// ? ⌚ Time complexity ➺ O(n log(m)) 👉🏻  n = len(candies)

// ? 🧺 Space complexity ➺ O(1)       👉🏻  m = sum(candies) / k

class Solution {
public:
      int maximumCandies(vector<int>& candies, long long k) {
            long long totalCandies = 0;

            // Calculate the total number of candies
            for (int candy : candies) {
                  totalCandies += candy;
            }

            // If total candies are less than k, it's impossible to distribute
            if (totalCandies < k) {
                  return 0;
            }

            int left = 1, right = totalCandies / k; // Binary search range
            int maxCandies = 0;

            while (left <= right) {
                  int mid = left + (right - left) / 2; // Mid value (possible max candies per child)
                  long long divideCandy = 0; // Number of children we can serve

                  // Count how many children can get at least `mid` candies
                  for (int candy : candies) {
                        divideCandy += (candy / mid); // Integer division

                        if (divideCandy >= k) { // Early termination if enough children are served
                              break;
                        }
                  }

                  if (divideCandy >= k) { // If we can serve at least `k` children
                        maxCandies = mid; // Store the valid candy distribution
                        left = mid + 1; // Try for more candies per child
                  } else {
                        right = mid - 1; // Reduce `mid` if we can't serve enough children
                  }
            }

            return maxCandies; // Return the maximum candies per child
      }
};
