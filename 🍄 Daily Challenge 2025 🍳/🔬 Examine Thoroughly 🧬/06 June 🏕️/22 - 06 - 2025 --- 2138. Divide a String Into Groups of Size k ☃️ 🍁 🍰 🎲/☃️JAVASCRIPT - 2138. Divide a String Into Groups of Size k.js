//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2139

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

var divideString = function (s, k, fill) {
      const n = s.length;

      // If the string length is not divisible by k, pad it with fill character
      if (n % k !== 0) {
            const padding = k - (n % k);
            s += fill.repeat(padding);
      }

      const res = [];

      // Split the string into substrings of length k
      for (let i = 0; i < s.length; i += k) {
            res.push(s.substring(i, i + k));
      }

      return res;
};
