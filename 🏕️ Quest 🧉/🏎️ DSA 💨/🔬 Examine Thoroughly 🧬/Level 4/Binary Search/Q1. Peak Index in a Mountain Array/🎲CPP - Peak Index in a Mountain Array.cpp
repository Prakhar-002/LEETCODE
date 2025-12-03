//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L4.3 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int peakIndexInMountainArray(vector<int>& arr) {
            int l = 0;
            int r = static_cast<int>(arr.size()) - 1;

            // Binary search to find the peak in the mountain array
            while (l < r) {
                  int mid = l + (r - l) / 2;  // Midpoint to avoid overflow

                  // If mid is on increasing slope, move left bound up
                  if (arr[mid] < arr[mid + 1]) {
                        l = mid + 1;
                  } else {
                        // Mid is on decreasing slope or at the peak
                        r = mid;
                  }
            }

            // l (or r) is the index of the peak element
            return l;
      }
};
