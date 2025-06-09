//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1061

//? ⌚ Time complexity ➺ O(n + m) 👉🏻  n = Unions (s1, s2)

//? 🧺 Space complexity ➺ O(1)    -> m = Mapping baseStr

var smallestEquivalentString = function (s1, s2, baseStr) {
      const parent = Array.from({ length: 26 }, (_, i) => i);  // Union-Find array

      // Find with path compression
      const find = (x) => {
            if (parent[x] !== x) {
                  parent[x] = find(parent[x]);  // Path compression
            }
            return parent[x];
      };

      // Union characters in s1 and s2
      for (let i = 0; i < s1.length; i++) {
            const a = s1.charCodeAt(i) - 97;
            const b = s2.charCodeAt(i) - 97;
            const pa = find(a);
            const pb = find(b);

            // Always keep smaller character as root
            if (pa < pb) {
                  parent[pb] = pa;
            } else {
                  parent[pa] = pb;
            }
      }

      // Build result from baseStr
      let result = "";
      for (const ch of baseStr) {
            const idx = find(ch.charCodeAt(0) - 97);
            result += String.fromCharCode(idx + 97);
      }

      return result;
};
