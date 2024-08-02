//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2134

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var minSwaps = function (nums) {
      // we will go by calculating number of 1 in nums
      // that will be max window of 1 we can have

      let totalOnes = 0;
      for (let num of nums) {
            // add 1 if found 1
            totalOnes += num === 1 ? 1 : 0;
      }

      // find window to length totalOnes and have the max 1 in that
      /*
      * left -> for the window's left pointer
      * windowOne -> for counting current window one
      * maxWindowOne -> for max one in all window
      */
      let left = 0, windowOne = 0, maxWindowOne = 0;
      const n = nums.length;

      // we traverse twice in our window for maintaining circular array
      for (let right = 0; right < 2 * n; right++) {
            // if we have '1' at 'right' pointer the add in our current windowOne
            if (nums[right % n] === 1) {
                  windowOne++;
            }

            // if our window exceed the totalOne length the inc the left pointer
            if ((right - left + 1) > totalOnes) {
                  // update the windowOne cause we're shrinking our window
                  // cause our 'nums[left]' only contain '1' or '0'
                  // so just sub the 'nums[left]' from our windowOne
                  windowOne -= nums[left % n];
                  // also increment the left pointer for sliding window
                  left++;
            }

            // take the max of this window's one
            maxWindowOne = Math.max(maxWindowOne, windowOne);
      }

      // we have to swap '0' for binding all 1 together
      // so the number of '0' we will swap will
      // total one - max one in our window
      return totalOnes - maxWindowOne;
};