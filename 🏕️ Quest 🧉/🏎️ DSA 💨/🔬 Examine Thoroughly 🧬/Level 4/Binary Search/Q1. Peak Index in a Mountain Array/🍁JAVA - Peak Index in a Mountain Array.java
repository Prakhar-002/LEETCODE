//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L4.3 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int peakIndexInMountainArray(int[] arr) {
            int l = 0;
            int r = arr.length - 1;

            // Binary search over the array
            while (l < r) {
                  int mid = l + (r - l) / 2;  // Calculate mid safely

                  // If we are on the increasing side of the mountain
                  if (arr[mid] < arr[mid + 1]) {
                        l = mid + 1;   // Peak must be to the right
                  } else {
                        // We are on the decreasing side or at the peak
                        r = mid;       // Peak is at mid or to the left
                  }
            }

            // l (or r) is the peak index when loop ends
            return l;
      }
}
