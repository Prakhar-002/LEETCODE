//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2144

//? ⌚ Time complexity ➺ O(nlogn) 👉🏻  n = len(cost)

//? 🧺 Space complexity ➺ O(1)

var minimumCost = function(cost) {
      // Sort descending so most expensive items come first
      cost.sort((a, b) => b - a);

      let ans = 0;

      for (let i = 0; i < cost.length; i++) {
            // Every 3rd item (0-indexed position 2, 5, 8...) is free — skip it
            if (i % 3 !== 2)
                  ans += cost[i];
      }

      return ans;
};