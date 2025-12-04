//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L5.1 Q2

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var threeSumClosest = function (nums, target) {
      nums.sort((a, b) => a - b);     // Sort the array for two-pointer approach
      let closestSum = nums[0] + nums[1] + nums[2];  // Initial closest sum

      for (let i = 0; i < nums.length - 2; i++) {
            let l = i + 1;
            let r = nums.length - 1;

            while (l < r) {
                  const currentSum = nums[i] + nums[l] + nums[r];

                  // Update closestSum if currentSum is closer to target
                  if (Math.abs(currentSum - target) < Math.abs(closestSum - target)) {
                        closestSum = currentSum;
                  }

                  if (currentSum < target) {
                        l++;  // Need larger sum
                  } else if (currentSum > target) {
                        r--;  // Need smaller sum
                  } else {
                        return currentSum;  // Exact match found
                  }
            }
      }

      return closestSum;
};
