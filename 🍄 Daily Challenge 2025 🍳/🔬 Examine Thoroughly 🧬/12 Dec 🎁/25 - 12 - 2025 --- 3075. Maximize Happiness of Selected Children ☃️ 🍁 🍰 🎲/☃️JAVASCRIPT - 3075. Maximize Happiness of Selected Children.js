//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3075

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(happiness)

//? 🧺 Space complexity ➺ O(1)

var maximumHappinessSum = function (happiness, k) {
      // Sort in descending order to pick the k largest values
      happiness.sort((a, b) => b - a);

      let ans = 0;

      // Select the top k children
      for (let i = 0; i < k; i++) {
            // Each child's happiness decreases by their selection turn (i)
            const child = happiness[i] - i;
            // Add only if positive (happiness can't go negative)
            ans += Math.max(0, child);
      }

      return ans;
};
