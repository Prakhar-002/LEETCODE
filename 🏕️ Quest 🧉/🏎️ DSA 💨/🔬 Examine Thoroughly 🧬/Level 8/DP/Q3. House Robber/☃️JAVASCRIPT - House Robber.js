//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L8.2 Q3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var rob = function (nums) {
      // robOne = max money we can get up to house i-2
      // robTwo = max money we can get up to house i-1
      let robOne = 0;
      let robTwo = 0;

      // Process each house one by one
      for (const n of nums) {
            // At current house:
            //   Option 1: Skip current house → max is robTwo
            //   Option 2: Rob current house → n + robOne (since we can't rob adjacent)
            // So, new max = max(robTwo, n + robOne)
            const temp = robTwo;
            robTwo = Math.max(robTwo, n + robOne);
            robOne = temp;
      }

      // After processing all houses, robTwo holds the max money
      return robTwo;
};
