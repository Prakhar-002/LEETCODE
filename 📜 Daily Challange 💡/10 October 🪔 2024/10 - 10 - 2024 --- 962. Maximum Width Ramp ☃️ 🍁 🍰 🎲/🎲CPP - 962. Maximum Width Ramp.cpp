//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 962

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      int maxWidthRamp(vector<int>& nums) {
            // length of the input vector and stores it in variable `n`
            int n = nums.size();
            // `rightMax` with size `n` and initializes all elements to `0`
            // to store the maximum value encountered so far
            vector<int> rightMax(n, 0);
            // pointer `idx` to start at the last element of the vector (`n - 1`)
            int idx = n - 1;
            // `prev_max` to keep track of the maximum value seen in ith place
            int prev_max = 0;

            // iterates over the input vector in the reverse order
            for (auto it = nums.rbegin(); it != nums.rend(); ++it) {
                  // updates the `rightMax` vector with the max value encountered
                  rightMax[idx] = max(*it, prev_max);
                  // update `prev_max` with prev max
                  prev_max = rightMax[idx];
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
                  ramp_width = max(right - left, ramp_width);
            }

            // returns the maximum ramp width found during the entire process
            return ramp_width;
      }
};

