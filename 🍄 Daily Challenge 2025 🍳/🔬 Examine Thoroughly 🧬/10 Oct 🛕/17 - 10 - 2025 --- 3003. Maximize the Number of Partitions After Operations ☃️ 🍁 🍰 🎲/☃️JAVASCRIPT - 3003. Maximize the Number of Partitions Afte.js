//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3003

//? ⌚ Time complexity ➺ O(m * n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var maxPartitionsAfterOperations = function (s, k) {
      const n = s.length;
      const memo = new Map();

      // dfs(index, bitmask, canChange)
      const dfs = (index, bitmask, canChange) => {
            // Base case — end of string
            if (index === n) return 1;

            const key = `${index},${bitmask},${canChange}`;
            if (memo.has(key)) return memo.get(key);

            const bit = 1 << (s.charCodeAt(index) - 97);
            let ans;

            // Continue without changing current character
            let nextMask = bitmask | bit;
            if (bitCount(nextMask) > k)
                  ans = dfs(index + 1, bit, canChange) + 1;   // start new partition
            else
                  ans = dfs(index + 1, nextMask, canChange); // continue current one

            // If allowed, try changing current character
            if (canChange) {
                  for (let c = 0; c < 26; c++) {
                        let newMask = bitmask | (1 << c);
                        if (bitCount(newMask) > k)
                              ans = Math.max(ans, dfs(index + 1, 1 << c, 0) + 1);
                        else
                              ans = Math.max(ans, dfs(index + 1, newMask, 0));
                  }
            }

            memo.set(key, ans);
            return ans;
      };

      // Helper — count set bits in integer
      const bitCount = (x) => x.toString(2).replace(/0/g, '').length;

      // Start at index 0 with empty mask and one modification allowed
      return dfs(0, 0, 1);
};
