//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2460

// ? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(1)

var applyOperations = function (nums) {
      const N = nums.length;   // Total number of elements in the array

      // 'w' (write pointer) tracks the position where the next non-zero element should go
      let w = 0;

      // First loop processes elements from index 0 to N-2 (pairs are nums[i] and nums[i+1])
      for (let r = 0; r < N - 1; r++) {
            // Check if current element and next element are equal
            // If they are equal, we merge them (double the value of nums[r])
            if (nums[r] === nums[r + 1]) {
                  nums[r] *= 2;       // Merge - double the value of nums[r]
                  nums[r + 1] = 0;    // Set the next element to zero after merge
            }

            // Shift non-zero numbers to the left
            if (nums[r] !== 0) {
                  nums[w] = nums[r];   // Move current number to 'w' position (compaction)
                  if (w !== r) {
                        nums[r] = 0;    // Clear the old position if element moved
                  }
                  w++;
            }
      }

      // Handle the last element (not covered in the loop above)
      if (nums[N - 1] !== 0) {
            nums[w] = nums[N - 1];
            if (w !== N - 1) {
                  nums[N - 1] = 0;
            }
            w++;
      }

      return nums;
}
