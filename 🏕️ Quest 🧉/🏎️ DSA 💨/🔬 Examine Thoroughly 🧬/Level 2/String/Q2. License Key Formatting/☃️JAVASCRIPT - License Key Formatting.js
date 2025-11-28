//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L2.3 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var licenseKeyFormatting = function (s, k) {
      s = s.replace(/-/g, '').toUpperCase();
      let firstGroupLen = s.length % k || k;
      let result = s.slice(0, firstGroupLen);

      for (let i = firstGroupLen; i < s.length; i += k) {
            result += '-' + s.slice(i, i + k);
      }

      return result;
};