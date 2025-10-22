//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3346

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n) 

var maxFrequency = function (nums, k, numOperations) {
      nums.sort((a, b) => a - b);      // Sort ascending

      let ans = 0;
      const numCount = new Map();       // Map to hold distinct number frequencies
      let lastIndex = 0;

      // Calculate frequency of distinct elements
      for (let i = 0; i < nums.length; i++) {
            if (nums[i] !== nums[lastIndex]) {
                  const count = i - lastIndex;
                  numCount.set(nums[lastIndex], count);
                  ans = Math.max(ans, count);
                  lastIndex = i;
            }
      }
      // Count for the last distinct element
      const count = nums.length - lastIndex;
      numCount.set(nums[lastIndex], count);
      ans = Math.max(ans, count);

      // Iterate over range from min to max number
      for (let i = nums[0]; i <= nums[nums.length - 1]; i++) {
            const left = leftBound(nums, i - k);
            const right = rightBound(nums, i + k);
            if (right < left) continue;

            let tempAns;
            if (numCount.has(i)) {
                  tempAns = Math.min(right - left + 1, numCount.get(i) + numOperations);
            } else {
                  tempAns = Math.min(right - left + 1, numOperations);
            }
            ans = Math.max(ans, tempAns);
      }

      return ans;
};

// Helper to find left bound in sorted array
function leftBound(arr, val) {
      let l = 0, r = arr.length - 1, res = arr.length;
      while (l <= r) {
            const mid = Math.floor((l + r) / 2);
            if (arr[mid] >= val) {
                  res = mid;
                  r = mid - 1;
            } else {
                  l = mid + 1;
            }
      }
      return res;
}

// Helper to find right bound in sorted array
function rightBound(arr, val) {
      let l = 0, r = arr.length - 1, res = -1;
      while (l <= r) {
            const mid = Math.floor((l + r) / 2);
            if (arr[mid] <= val) {
                  res = mid;
                  l = mid + 1;
            } else {
                  r = mid - 1;
            }
      }
      return res;
}
