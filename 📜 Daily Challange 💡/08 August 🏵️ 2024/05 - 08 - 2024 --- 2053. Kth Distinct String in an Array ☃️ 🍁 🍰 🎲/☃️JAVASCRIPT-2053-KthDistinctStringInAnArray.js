//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2053

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(arr)

//? 🧺 Space complexity ➺ O(n) 👉🏻 Using HashMap

var kthDistinct = function (arr, k) {
      // for calculating the string occurrences
      const stringCount = new Map();

      // count by going through array
      for (const str of arr) {
            stringCount.set(str, (stringCount.get(str) || 0) + 1);
      }

      // check string by going over array 
      for (const str of arr) {
            // if str is count is one it's means str is Distinct 
            if (stringCount.get(str) === 1) {
                  // for k-th distinct we dec the k value
                  k -= 1;
                  // if we got k == 0 this will be our ans
                  if (k === 0) return str;
            }
      }

      // if we don't get the k-th distinct we return ""
      return "";
};