//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 962

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public int maxWidthRamp(int[] nums) {
            // length of the input array and stores it in variable `n`
            int n = nums.length;
            // `rightMax` with size `n` and initializes all elements to `0`
            // to store the maximum value encountered so far
            int[] rightMax = new int[n];
            // pointer `idx` to start at the last element of the array (`n - 1`)
            int idx = n - 1;
            // `prevMax` to keep track of the maximum value seen in ith place
            int prevMax = 0;

            // iterates over the input array in the reverse order
            for (int i = n - 1; i >= 0; i--) {
                  // updates the `rightMax` array with the max value encountered
                  rightMax[idx] = Math.max(nums[i], prevMax);
                  // update `prevMax` with prev max
                  prevMax = rightMax[idx];
                  // decrement the idx pointer
                  idx--;
            }

            // initializes `ramp_width` to keep track of the maximum ramp width
            int ramp_width = 0;
            // sets `left` index to zero
            int left = 0;

            // iterates through the indices from `0` to `n-1`
            for (int right = 0; right < n; right++) {
                  // incrementing the `left` pointer until the value at 
                  // `nums[left]` is no longer greater than `rightMax[right]`
                  while (left < n && nums[left] > rightMax[right]) {
                        // inc the left pointer
                        left++;
                  }

                  // calculates the width of the ramp by subtracting the 
                  // `left` index from the `right` index and maximize it
                  ramp_width = Math.max(right - left, ramp_width);
            }

            // returns the maximum ramp width found during the entire process
            return ramp_width;
      }
}

