//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2799

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

function countCompleteSubarrays(nums) {
      const n = nums.length;

      // Count unique elements in the array
      const uniqueSet = new Set(nums);
      const k = uniqueSet.size;

      const freq = new Map();
      let left = 0, count = 0;

      // Expand the right side of the window
      for (let right = 0; right < n; right++) {
            const num = nums[right];
            freq.set(num, (freq.get(num) || 0) + 1); // Add to map

            // While window has all unique elements
            while (freq.size === k) {
                  count += n - right; // All rightward subarrays are valid

                  // Shrink from left
                  const leftNum = nums[left];
                  freq.set(leftNum, freq.get(leftNum) - 1);
                  if (freq.get(leftNum) === 0) {
                        freq.delete(leftNum);
                  }

                  left++;
            }
      }

      return count;
}
