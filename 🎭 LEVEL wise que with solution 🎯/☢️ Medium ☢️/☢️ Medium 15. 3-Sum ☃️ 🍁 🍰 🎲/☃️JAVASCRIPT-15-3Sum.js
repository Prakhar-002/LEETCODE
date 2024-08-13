//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 15

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var threeSum = function (nums) {
      // variable to store the all triplets that sum to zero
      const triplets = [];

      // sort the nums for avoiding duplicates
      // and makes it easier to use the two-pointer technique effectively
      nums.sort((a, b) => a - b);

      // iterate through the list
      // picks an element `num` along with its index `idx`
      for (let idx = 0; idx < nums.length; idx++) {
            // skip elements that are the same as the previous element
            if (idx > 0 && nums[idx] === nums[idx - 1]) {
                  continue;
            }

            let left = idx + 1;
            let right = nums.length - 1;

            while (left < right) {
                  //  calculates the sum of the numbers at the current positions
                  const threeSum = nums[idx] + nums[left] + nums[right];

                  // if sum is > 0 shift the right pointer
                  if (threeSum > 0) {
                        right--;
                  }

                  // if sum is < 0 shift the left pointer
                  else if (threeSum < 0) {
                        left++;
                  }

                  // `threeSum === 0` 
                  else {
                        // add triplet 
                        triplets.push([nums[idx], nums[left], nums[right]]);
                        // inc the left pointer for next triplet
                        left++;

                        //  Subsequently, the left pointer is moved to skip identical elements
                        while (nums[left] === nums[left - 1] && left < right) {
                              // avoid duplicates in the triplet list.
                              left++;
                        }
                  }
            }
      }

      return triplets;
};