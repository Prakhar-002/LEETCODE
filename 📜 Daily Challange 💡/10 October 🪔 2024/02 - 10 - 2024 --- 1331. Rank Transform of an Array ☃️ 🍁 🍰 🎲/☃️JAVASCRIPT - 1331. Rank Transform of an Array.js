//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1331

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var arrayRankTransform = function(arr) {
      if (arr.length == 0) {
            return arr;
      }

      // Step 1: Create a copy of the original array
      var sortedArr = [...arr];

      // Step 2: Sort the copied array
      sortedArr.sort((a, b) => a - b);

      // Step 3: Assign ranks to elements in sorted order
      var rankMap = new Map();
      rank = 1;

      for (const num of sortedArr) {
            if (!rankMap.has(num)) {
                  rankMap.set(num, rank++);
            }
      }

      // Step 4: Replace elements in the original array with their ranks
      return arr.map(num => rankMap.get(num));
};