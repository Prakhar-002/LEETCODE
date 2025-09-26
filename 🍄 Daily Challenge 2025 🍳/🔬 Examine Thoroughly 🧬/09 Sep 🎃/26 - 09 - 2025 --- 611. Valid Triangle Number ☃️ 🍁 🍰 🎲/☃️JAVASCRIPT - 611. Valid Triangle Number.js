//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 611

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var triangleNumber = function (nums) {
      let count = 0;

      // Sort the array to use triangle inequality
      nums.sort((a, b) => a - b);
      let n = nums.length;

      // Fix the first side (smallest)
      for (let i = 0; i < n - 2; i++) {
            if (nums[i] === 0) continue; // Cannot form triangle if minimum side is zero
            let k = i + 2;

            // Select a second side, try to expand third side as far as triangle property allows
            for (let j = i + 1; j < n - 1; j++) {

                  while (k < n && nums[i] + nums[j] > nums[k]) k++;
                  // All indices from j+1 to k-1 are valid as the third side
                  count += k - j - 1;

            }
      }

      return count;
};
