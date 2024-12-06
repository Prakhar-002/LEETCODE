//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2195

//? ⌚ Time complexity ➺ O(n Log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var minimalKSum = function (nums, k) {
      // Sort the input array
      nums.sort((a, b) => a - b);

      // Initialize the result sum
      let res = 0;

      // Start from 1 and add the smallest missing numbers
      let prev = 0; // To track the previous number processed

      for (let num of nums) {
            // If there is a gap between prev and the current number
            if (num > prev + 1) {
                  // Calculate the number of missing elements in the gap
                  let gap = Math.min(k, num - prev - 1);

                  // Add the sum of the first 'gap' missing numbers
                  res += ((prev + 1 + prev + gap) * gap) / 2;

                  // Reduce k by the number of elements added
                  k -= gap;

                  // If k becomes 0, we are done
                  if (k === 0) {
                        return res;
                  }
            }

            // Update prev to the current number
            prev = num;
      }

      // If k > 0, add the next k numbers starting from prev + 1
      if (k > 0) {
            res += ((prev + 1 + prev + k) * k) / 2;
      }

      return res;
};
