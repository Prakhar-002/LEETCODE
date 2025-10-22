//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1625

//? ⌚ Time complexity ➺ O(n^2 d^2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var findLexSmallestString = function (s, a, b) {
      const n = s.length;
      let res = s; // Initialize with original string
      const ss = s + s; // Concatenate for rotation ease
      const g = gcd(b, n); // gcd of b and n

      // Helper to compute gcd
      function gcd(x, y) {
            while (y != 0) {
                  const t = y;
                  y = x % y;
                  x = t;
            }
            return x;
      }

      // Function to perform addition on string starting at index start
      function add(t, start) {
            const original = t.charCodeAt(start) - 48;
            let minVal = 10;
            let times = 0;
            for (let i = 0; i < 10; i++) {
                  const added = (original + i * a) % 10;
                  if (added < minVal) {
                        minVal = added;
                        times = i;
                  }
            }
            const tArr = t.split('');
            for (let i = start; i < n; i += 2) {
                  tArr[i] = String.fromCharCode(((tArr[i].charCodeAt(0) - 48 + times * a) % 10) + 48);
            }
            return tArr.join('');
      }

      for (let i = 0; i < n; i += g) {
            let t = ss.substring(i, i + n);
            t = add(t, 1);
            if (b % 2 === 1) {
                  t = add(t, 0);
            }
            if (t < res) res = t;
      }
      return res;
};
