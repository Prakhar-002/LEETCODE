//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2014

//? ⌚ Time complexity ➺ O(n + m! * k * m) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n) ->  m <= 7

var longestSubsequenceRepeatedK = function (s, k) {
      const n = s.length;
      const str = Array.from(s).map(c => c.charCodeAt(0) - 97);

      // Precompute next position table
      const nxt = Array(n + 1).fill().map(() => Array(26).fill(n));
      for (let i = n - 1; i >= 0; i--) {
            nxt[i] = nxt[i + 1].slice();
            nxt[i][str[i]] = i;
      }

      // Frequency map
      const cnt = Array(26).fill(0);
      for (const ch of str) cnt[ch]++;
      let a = [];
      for (let ch = 0; ch < 26; ch++) {
            for (let t = 0; t < Math.floor(cnt[ch] / k); t++) {
                  a.push(ch);
            }
      }

      a.sort((x, y) => y - x);

      const generatePermutations = (arr, len) => {
            const res = [];
            const used = Array(arr.length).fill(false);
            const curr = [];

            const backtrack = () => {
                  if (curr.length === len) {
                        res.push([...curr]);
                        return;
                  }
                  for (let i = 0; i < arr.length; i++) {
                        if (used[i] || (i > 0 && arr[i] === arr[i - 1] && !used[i - 1])) continue;
                        used[i] = true;
                        curr.push(arr[i]);
                        backtrack();
                        curr.pop();
                        used[i] = false;
                  }
            };

            backtrack();
            return res;
      };

      const isSubsequence = (seq) => {
            let i = -1;
            for (let rep = 0; rep < k; rep++) {
                  for (const ch of seq) {
                        i = nxt[i + 1][ch];
                        if (i === n) return false;
                  }
            }
            return true;
      };

      for (let len = a.length; len > 0; len--) {
            const perms = generatePermutations(a, len);
            for (const seq of perms) {
                  if (isSubsequence(seq)) {
                        return seq.map(c => String.fromCharCode(c + 97)).join('');
                  }
            }
      }

      return "";
};
