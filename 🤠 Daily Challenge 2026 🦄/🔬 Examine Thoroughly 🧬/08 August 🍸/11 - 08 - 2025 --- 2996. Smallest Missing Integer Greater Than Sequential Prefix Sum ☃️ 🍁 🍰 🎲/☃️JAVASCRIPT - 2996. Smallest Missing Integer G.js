//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2996

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var missingInteger = function(nums) {
      // Store elements in a Set for O(1) lookup performance
      const numsSet = new Set(nums);

      // Start seq sum with the first element of the array
      let seq = nums[0];

      // Calculate the sum of the longest sequential prefix
      for (let j = 1; j < nums.length; j++) {
            if (nums[j] === nums[j - 1] + 1) {
                  seq += nums[j];
            } else {
                  break;
            }
      }

      // Increment seq until we hit a number missing from numsSet
      while (numsSet.has(seq)) {
            seq++;
      }

      return seq;
};