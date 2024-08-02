//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2134

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>

int minSwaps(int* nums, int numsSize) {
      // Calculate the total number of 1s in the array
      int totalOnes = 0;
      for (int i = 0; i < numsSize; i++) {
            // add 1 if found 1
            totalOnes += nums[i] == 1 ? 1 : 0;
      }

      // Initialize variables for the sliding window
      /*
      * left -> for the window's left pointer
      * windowOne -> for counting current window one
      * maxWindowOne -> for max one in all window
      */
      int left = 0, windowOne = 0, maxWindowOne = 0;

      // Traverse the array twice to handle the circular nature
      for (int right = 0; right < 2 * numsSize; right++) {
            // If the current element is 1, add it to the current window count
            if (nums[right % numsSize] == 1) {
                  windowOne++;
            }

            // If the window size exceeds the total number of 1s, slide the window
            if ((right - left + 1) > totalOnes) {
                  // update the windowOne cause we're shrinking our window
                  // cause our 'nums[left]' only contain '1' or '0'
                  // so just sub the 'nums[left]' from our windowOne
                  windowOne -= nums[left % numsSize];
                  // also increment the left pointer for sliding window
                  left++;
            }

            // Update the maximum number of 1s found in any window
            maxWindowOne = (windowOne > maxWindowOne) ? windowOne : maxWindowOne;
      }

      // The minimum number of swaps required is the difference between total 1s and the maximum 1s in any window
      return totalOnes - maxWindowOne;
}