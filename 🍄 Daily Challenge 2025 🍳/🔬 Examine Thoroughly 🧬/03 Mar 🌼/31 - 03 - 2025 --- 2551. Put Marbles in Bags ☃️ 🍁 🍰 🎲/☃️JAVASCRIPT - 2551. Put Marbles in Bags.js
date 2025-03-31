//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2551

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var putMarbles = function (weights, k) {
      let n = weights.length;

      // Step 1: Compute pair weights (sum of adjacent weights)
      let pairWeights = [];
      for (let i = 0; i < n - 1; i++) {
            pairWeights.push(weights[i] + weights[i + 1]);
      }

      // Step 2: Sort the pair weights in ascending order
      pairWeights.sort((a, b) => a - b);

      let score = 0; // Variable to store the final result

      // Step 3: Compute the difference between the largest (k-1) sums and smallest (k-1) sums
      for (let i = 0; i < k - 1; i++) {
            score += pairWeights[n - 2 - i] - pairWeights[i];
      }

      return score; // Return the final answer as BigInt
};
