//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 962

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var maxWidthRamp = function (nums) {
      // length of the input array and stores it in variable `n`
      const n = nums.length;
      // `rightMax` with size `n` and initializes all elements to `0`
      // to store the maximum value encountered so far
      const rightMax = new Array(n).fill(0);
      // pointer `idx` to start at the last element of the array (`n - 1`)
      let idx = n - 1;
      // `prevMax` to keep track of the maximum value seen in ith place
      let prevMax = 0;

      // iterates over the input array in the reverse order
      for (let i = n - 1; i >= 0; i--) {
            // updates the `rightMax` array with the max value encountered
            rightMax[idx] = Math.max(nums[i], prevMax);
            // update `prevMax` with prev max
            prevMax = rightMax[idx];
            // decrement the idx pointer
            idx--;
      }

      // initializes `rampWidth` to keep track of the maximum ramp width
      let rampWidth = 0;
      // sets `left` index to zero
      let left = 0;

      // iterates through the indices from `0` to `n-1`
      for (let right = 0; right < n; right++) {
            // incrementing the `left` pointer until the value at 
            // `nums[left]` is no longer greater than `rightMax[right]`
            while (nums[left] > rightMax[right]) {
                  // inc the left pointer
                  left++;
            }

            // calculates the width of the ramp by subtracting the 
            // `left` index from the `right` index and maximize it
            rampWidth = Math.max(right - left, rampWidth);
      }

      // returns the maximum ramp width found during the entire process
      return rampWidth;
};

