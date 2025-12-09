//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.1 Q2

//? ⌚ Time complexity ➺ O(N × √M × α(M) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(m)  -> M = max(nums), α = union func

function find(x, parent) {
      if (parent[x] === -1) {
            return x;  // x is root
      }

      // Recursive path compression
      parent[x] = find(parent[x], parent);
      return parent[x];
}

function union(x, y, parent) {
      const xp = find(x, parent);
      const yp = find(y, parent);
      if (xp !== yp) {
            parent[yp] = xp;
      }
}

var largestComponentSize = function (nums) {
      // Find maximum value for parent array size
      let maxNum = 0;
      for (let num of nums) {
            maxNum = Math.max(maxNum, num);
      }

      // parent[i] = -1 if root, else parent[i] = parent index
      const parent = new Array(maxNum + 1).fill(-1);

      // Connect numbers sharing common factors ≥ 2
      for (let num of nums) {
            // Union with all proper factors
            for (let k = 2; k * k <= num; k++) {
                  if (num % k === 0) {
                        union(num, k, parent);
                        union(num, Math.floor(num / k), parent);
                  }
            }
      }

      // Count largest connected component
      const componentSize = new Map();
      let maxCount = 0;

      for (let num of nums) {
            const root = find(num, parent);
            const size = (componentSize.get(root) || 0) + 1;
            componentSize.set(root, size);
            maxCount = Math.max(maxCount, size);
      }

      return maxCount;
};
