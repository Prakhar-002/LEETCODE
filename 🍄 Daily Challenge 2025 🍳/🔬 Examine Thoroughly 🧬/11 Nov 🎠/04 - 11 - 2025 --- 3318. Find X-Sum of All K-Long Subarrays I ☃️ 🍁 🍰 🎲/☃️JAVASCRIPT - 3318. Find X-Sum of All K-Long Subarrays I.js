//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3318

//? ⌚ Time complexity ➺ O(k log k * (n - k + 1)) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n - k + 1)

/**
 * For each subarray of size k in nums,
 * sums top x frequent elements or entire sum if distinct elements ≤ x.
 * 
 * @param {number[]} nums - Input array of integers
 * @param {number} k - Window size
 * @param {number} x - Number of top frequent elements to consider
 * @returns {number[]} - Array of sums for each window
 */
function findXSum(nums, k, x) {
      const res = [];
      const n = nums.length;

      // Iterate over all windows of length k
      for (let i = 0; i <= n - k; i++) {
            const countMap = new Map();

            // Count frequency of each element in the current window
            for (let j = i; j < i + k; j++) {
                  countMap.set(nums[j], (countMap.get(nums[j]) || 0) + 1);
            }

            // If unique elements count ≤ x, sum entire window
            if (countMap.size <= x) {
                  let sum = 0;
                  for (let j = i; j < i + k; j++) {
                        sum += nums[j];
                  }
                  res.push(sum);
            } else {
                  // Otherwise, extract entries to array and sort by freq desc, then value desc
                  const pairs = Array.from(countMap.entries());
                  pairs.sort((a, b) => b[1] - a[1] || b[0] - a[0]);

                  let curSum = 0;
                  // Sum of top x frequent elements: value * frequency
                  for (let j = 0; j < x; j++) {
                        curSum += pairs[j][0] * pairs[j][1];
                  }
                  res.push(curSum);
            }
      }
      return res;
}
