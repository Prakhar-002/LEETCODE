//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1508

//? ⌚ Time complexity ➺ O(n^2 Log n) 👉🏻 n = len(nums)

//? 🧺 Space complexity ➺ O(n ^ 2) 👉🏻 building array of sum of subArray

var rangeSum = function (nums, n, left, right) {
      // have a variable by which we've to mod 
      const MOD = 10 ** 9 + 7;

      // construct an array which is sum of subArray
      let subArraySum = [];

      // take the sum of all subarray
      for (let i = 0; i < n; i++) {
            let curSum = 0;
            for (let j = i; j < n; j++) {
                  curSum = (curSum + nums[j]) % MOD;
                  subArraySum.push(curSum);
            }
      }

      // sort our subarray sum array
      subArraySum.sort((a, b) => a - b);

      let subArrayNumSum = 0;

      // value we wanted to sum are from left to right
      // index of those values will be left - 1 to right - 1
      for (let num = left - 1; num < right; num++) {
            subArrayNumSum = (subArrayNumSum + subArraySum[num]) % MOD;
      }

      return subArrayNumSum;
};