//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 198

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var rob = function (nums) {
      let firstHouseRob = 0;
      let secHouseRob = 0;

      //? [firstSum, secSum, n, n + 1 ...]
      for (let n of nums) {
            // in temp variable we'll check for max after taking n with our self
            let temp = Math.max(firstHouseRob + n, secHouseRob);
            // update both variable
            firstHouseRob = secHouseRob;
            secHouseRob = temp;
      }

      return Math.max(firstHouseRob, secHouseRob);
};