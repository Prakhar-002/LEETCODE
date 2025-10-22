//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3350

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var maxIncreasingSubarrays = function (nums) {
      const n = nums.length;       // Total number of elements
      let cnt = 1;                 // Length of current increasing subarray
      let precnt = 0;              // Length of previous increasing subarray
      let ans = 0;                 // Stores the result (maximum overlap length)

      // Traverse the array from the second element
      for (let i = 1; i < n; i++) {
            // Continue current sequence if it's increasing
            if (nums[i] > nums[i - 1]) {
                  cnt++;
            } else {
                  // Sequence breaks - store previous count
                  precnt = cnt;
                  cnt = 1;
            }

            // Option 1: Find max overlap between consecutive subarrays
            ans = Math.max(ans, Math.min(precnt, cnt));

            // Option 2: Consider single long sequence split halfway
            ans = Math.max(ans, Math.floor(cnt / 2));
      }

      // Return final computed result
      return ans;
};
