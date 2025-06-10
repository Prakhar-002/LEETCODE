//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 47

//? ⌚ Time complexity ➺ O(n × n!) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n × n!)

var permuteUnique = function (nums) {
      const res = [];                           // Final result array
      const perm = [];                          // Current permutation
      const count = {};                         // Frequency map

      // Count frequency of each number
      for (const num of nums) {
            count[num] = (count[num] || 0) + 1;
      }

      const dfs = () => {
            if (perm.length === nums.length) {
                  res.push([...perm]);         // Push a copy of current permutation
                  return;
            }

            for (const n in count) {
                  if (count[n] > 0) {
                        perm.push(Number(n));  // Add number to permutation
                        count[n]--;            // Use up one count

                        dfs();                 // Recurse

                        count[n]++;            // Backtrack
                        perm.pop();            // Remove last
                  }
            }
      };

      dfs();
      return res;
};
