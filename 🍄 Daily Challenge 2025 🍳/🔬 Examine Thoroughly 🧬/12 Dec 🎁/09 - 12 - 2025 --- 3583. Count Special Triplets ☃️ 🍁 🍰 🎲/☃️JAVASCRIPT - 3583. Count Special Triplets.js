//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3583

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var specialTriplets = function (nums) {
      const MOD = 1000000007;

      // Count frequency of each number
      const numCnt = new Map();
      for (let num of nums) {
            numCnt.set(num, (numCnt.get(num) || 0) + 1);
      }

      // partials[x] = count of x seen so far during iteration
      const partials = new Map();

      let ans = 0;

      for (let n of nums) {
            const target = n * 2;  // Looking for x where x*2 = n

            // Left: how many target appeared before this n
            const lCnt = partials.get(target) || 0;

            // Update partials for current n
            partials.set(n, (partials.get(n) || 0) + 1);

            // Right: how many target remain after this n
            const rCnt = (numCnt.get(target) || 0) - (partials.get(target) || 0);

            // Add to answer
            ans = (ans + lCnt * rCnt) % MOD;
      }

      return ans;
};
