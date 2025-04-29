//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2962

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

function countSubarrays(nums, k) {
      const n = nums.length;
      let maxElem = Math.max(...nums);        // Find maximum element
      let count = 0;                          // Count of maxElem in window
      let left = 0;                           // Left pointer
      let subArr = 0;                         // Final answer

      for (let right = 0; right < n; right++) {

            if (nums[right] === maxElem) {
                  count++;                    // Increase count if maxElem found
            }

            // Maintain window with exactly k maxElem
            while (left <= right && count === k) {
                  subArr += (n - right);      // All subarrays from left to n-1 are valid
                  if (nums[left] === maxElem) {
                        count--;              // Reduce count if we remove maxElem
                  }

                  left++;                     // Move left pointer
            }
      }

      return subArr;                          // Return result
}
