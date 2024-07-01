//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 128

//? ⌚ Time complexity -> O(n) 👉 length of nums 

//? 🧺 Space complexity -> O(n) 👉 using a set of length n

var longestConsecutive = function (nums) {
      const numsSet = new Set(nums);

      let longestConsecutive = 0;

      for (let n of nums) {
            // check if our sequence is starting from n 
            if (!numsSet.has(n - 1)) {
                  let length = 0;
                  // we'll check our sequence starting from n 
                  while (numsSet.has(n + length)) {
                        // check the sequence
                        length++;
                  }

                  longestConsecutive = Math.max(longestConsecutive, length);
            }
      }

      return longestConsecutive;
};

// ------------------------------------------------------------------------

//* This is wrong ans but better runTime cause we used sorting in our method which take NLogN

//? ⌚ Time complexity -> O(NLogN) 👉 length of nums 

//? 🧺 Space complexity -> O(1) 

var longestConsecutive = function (nums) {
      const n = nums.length;
      if (n === 0 || n === 1) {
            return n;
      }

      // sort first
      nums = nums.sort((a, b) => a - b);
      let i = 1;
      let count = 0;
      let longestConsecutive = 0;

      while (i < n) {
            // for [0, 1, 1, 2] ans is 3
            if (nums[i] - nums[i - 1] <= 1) {
                  // increase our count by difference so it can be 0 or 1
                  count += nums[i] - nums[i - 1];
            } else {
                  // take the max
                  longestConsecutive = Math.max(longestConsecutive, count);
                  count = 0;
            }
            i++;
      }

      return Math.max(longestConsecutive, count) + 1;
};