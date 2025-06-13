//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2616

//? ⌚ Time complexity ➺ O(n*logV+ n*log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var minimizeMax = function (nums, p) {
      // Step 1: Sort the array to make adjacent values close
      nums.sort((a, b) => a - b);

      const n = nums.length;

      // Step 2: Binary search boundaries
      let left = 0;
      let right = nums[n - 1] - nums[0];  // Max possible difference

      // Step 3: Inner function to count valid pairs under a threshold
      function countValidPairs(threshold) {
            let count = 0;
            let i = 0;

            // Loop to count valid pairs
            while (i < n - 1) {
                  // If a valid pair is found
                  if (nums[i + 1] - nums[i] <= threshold) {
                        count++;   // Count this pair
                        i++;       // Skip the next element (used in pair)
                  }
                  i++;             // Move to next index
            }

            return count;
      }

      // Step 4: Binary search to find the minimum maximum difference
      while (left < right) {
            const mid = Math.floor((left + right) / 2);

            // If enough valid pairs are possible with current threshold
            if (countValidPairs(mid) >= p) {
                  right = mid;  // Try a smaller threshold
            } else {
                  left = mid + 1;  // Try a larger threshold
            }
      }

      return left;  // Final minimized max difference
};
