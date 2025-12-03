//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L4.3 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var peakIndexInMountainArray = function (arr) {
      // Left and right pointers for binary search
      let l = 0;
      let r = arr.length - 1;

      // Continue until search space shrinks to a single index
      while (l < r) {
            // Midpoint (written to avoid potential overflow style)
            const mid = l + Math.floor((r - l) / 2);

            // If middle element is less than the next one,
            // we are on the increasing slope, so peak is to the right
            if (arr[mid] < arr[mid + 1]) {
                  l = mid + 1;
            } else {
                  // We are on the decreasing slope (or at the peak),
                  // so the peak is at mid or somewhere to the left
                  r = mid;
            }
      }

      // When l === r, both point to the peak index
      return l;
};
