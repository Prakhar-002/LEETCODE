//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3347

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var maxFrequency = function (nums, k, numOperations) {
      nums.sort((a, b) => a - b);   // Sort nums for easier search & grouping

      let ans = 0;
      const numCount = new Map();     // Map frequency of distinct numbers
      let lastIndex = 0;

      // Count frequencies of distinct elements and add mode candidates
      for (let i = 0; i < nums.length; i++) {
            if (nums[i] !== nums[lastIndex]) {
                  const count = i - lastIndex;
                  numCount.set(nums[lastIndex], count);
                  ans = Math.max(ans, count);
                  addMode(nums[lastIndex], k, nums, numCount);
                  lastIndex = i;
            }
      }
      const count = nums.length - lastIndex;
      numCount.set(nums[lastIndex], count);
      ans = Math.max(ans, count);
      addMode(nums[lastIndex], k, nums, numCount);

      // Sort unique modes
      const sortedModes = Array.from(numCount.keys()).sort((a, b) => a - b);

      // Process each mode to find max frequency achievable
      for (const mode of sortedModes) {
            const left = leftBound(nums, mode - k);
            const right = rightBound(nums, mode + k);

            if (right < left) continue;

            let tempAns;
            if (numCount.has(mode)) {
                  tempAns = Math.min(right - left + 1, numCount.get(mode) + numOperations);
            } else {
                  tempAns = Math.min(right - left + 1, numOperations);
            }
            ans = Math.max(ans, tempAns);
      }

      return ans;
};

// Helper to add mode candidates
function addMode(value, k, nums, numCount) {
      if (value - k >= nums[0]) numCount.set(value - k, numCount.get(value - k) || 0);
      if (value + k <= nums[nums.length - 1]) numCount.set(value + k, numCount.get(value + k) || 0);
}

// Binary search left bound (first index >= val)
function leftBound(arr, val) {
      let left = 0, right = arr.length - 1, res = arr.length;
      while (left <= right) {
            let mid = Math.floor((left + right) / 2);
            if (arr[mid] >= val) {
                  res = mid;
                  right = mid - 1;
            } else {
                  left = mid + 1;
            }
      }
      return res;
}

// Binary search right bound (last index <= val)
function rightBound(arr, val) {
      let left = 0, right = arr.length - 1, res = -1;
      while (left <= right) {
            let mid = Math.floor((left + right) / 2);
            if (arr[mid] <= val) {
                  res = mid;
                  left = mid + 1;
            } else {
                  right = mid - 1;
            }
      }
      return res;
}
