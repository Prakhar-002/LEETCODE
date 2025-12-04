//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L5.2 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(k)

var containsNearbyDuplicate = function (nums, k) {
      // Set maintains elements within current window of size k+1
      const window = new Set();
      let l = 0;

      for (let r = 0; r < nums.length; r++) {
            // Shrink window from left if exceeds k distance
            if (r - l > k) {
                  window.delete(nums[l]);
                  l++;
            }

            // If current element already in window, duplicate exists
            if (window.has(nums[r])) {
                  return true;
            }

            // Add current element to window
            window.add(nums[r]);
      }

      return false;
};
