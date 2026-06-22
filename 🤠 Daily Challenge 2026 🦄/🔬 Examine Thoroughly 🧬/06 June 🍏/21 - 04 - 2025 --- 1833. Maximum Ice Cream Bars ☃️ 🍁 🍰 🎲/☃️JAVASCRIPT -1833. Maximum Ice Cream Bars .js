//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1833

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var maxIceCream = function(costs, coins) {
      // Sort so cheapest ice creams are bought first
      costs.sort((a, b) => a - b);

      let res = 0;

      for (const cost of costs) {
            // Can't afford this one — stop since rest are more expensive
            if (coins - cost < 0)
                  return res;

            coins -= cost;
            res++;
      }

      return res;
};