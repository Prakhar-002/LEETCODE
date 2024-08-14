//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 719

//? ⌚ Time complexity ➺ O(n log n + n log(max(nums))) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

import java.util.Arrays;

class Solution {
      public int smallestDistancePair(int[] nums, int k) {
            // first sort the array
            // it ensures that all pairs will be considered in order
            // from closest to farthest apart
            Arrays.sort(nums);

            // initialize the binary search
            // to find the k-th smallest dist

            // two pointers smallest and largest distances in the sorted list
            int left = 0, right = nums[nums.length - 1] - nums[0];
            while (left < right) {
                  // `mid` is calculated as the avg of `left` and `right`
                  int mid = left + ((right - left) / 2);

                  // function to counts how many pairs have a distance <= `mid`
                  int pairs = getPairs(nums, mid);

                  // if `pairs` >= `k`
                  if (pairs >= k) {
                        // it means the k-th smallest distance could be `mid` or smaller
                        // so we adjust `right = mid` to search the lower half
                        right = mid;
                  } else {
                        // Otherwise, we search the higher half by setting `left = mid + 1`
                        left = mid + 1;
                  }
            }

            return left;
      }

      // This function takes a distance `dist` as input
      // and counts the total number of pairs
      // within the sorted array that have a difference
      // less than or equal to this distance
      private int getPairs(int[] nums, int dist) {
            // count total num of pairs
            // with diff <= dist
            int left = 0;
            int pairs = 0;
            for (int right = 0; right < nums.length; right++) {
                  // ensure we are counting pairs within the specified distance
                  while (nums[right] - nums[left] > dist) {
                        // and inc the left
                        left++;
                  }
                  // gives the number of pairs for the current `right` idx
                  pairs += right - left;
            }

            return pairs;
      }
}
