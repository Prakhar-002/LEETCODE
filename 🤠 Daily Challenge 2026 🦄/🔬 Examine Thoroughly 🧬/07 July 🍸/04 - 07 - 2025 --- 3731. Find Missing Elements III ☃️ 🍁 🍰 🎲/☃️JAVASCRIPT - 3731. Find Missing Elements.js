//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3731

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var findMissingElements = function(nums) {

      // Sort the array in ascending order
      nums.sort((a, b) => a - b);

      // Stores all missing numbers
      let res = [];

      // Traverse adjacent pairs
      for (let i = 0; i < nums.length - 1; i++) {

            let cur = nums[i];
            let nxt = nums[i + 1];

            // Add every missing number between cur and nxt
            while (cur + 1 !== nxt) {
                  res.push(cur + 1);
                  cur++;
            }
      }

      return res;
};