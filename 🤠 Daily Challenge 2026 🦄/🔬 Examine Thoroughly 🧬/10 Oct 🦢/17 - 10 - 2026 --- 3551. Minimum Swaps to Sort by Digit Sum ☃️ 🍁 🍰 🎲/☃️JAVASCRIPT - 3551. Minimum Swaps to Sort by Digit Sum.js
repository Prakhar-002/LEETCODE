//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3551

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var minSwaps = function (nums) {
      // Helper function to calculate sum of digits
      const digitSum = (n) => {
            let res = 0;
            while (n > 0) {
                  res += n % 10;
                  n = Math.floor(n / 10);
            }
            return res;
      };

      const n = nums.length;
      const ans = [];
      const items = new Map();

      // Map each number to its original index and pair it with its digit sum
      for (let i = 0; i < n; i++) {
            items.set(nums[i], i);
            ans.push({ sum: digitSum(nums[i]), val: nums[i] });
      }

      // Sort primarily by digit sum, secondarily by number value
      ans.sort((a, b) => {
            if (a.sum !== b.sum) {
                  return a.sum - b.sum;
            }
            return a.val - b.val;
      });

      // Target sorted order of elements
      const target = ans.map(item => item.val);
      let res = 0;

      // Iterate and swap elements to their target positions
      for (let i = 0; i < n; i++) {
            if (nums[i] !== target[i]) {
                  res++;

                  // Find current index of the target element
                  const j = items.get(target[i]);

                  // Swap nums[i] and nums[j]
                  const temp = nums[i];
                  nums[i] = nums[j];
                  nums[j] = temp;

                  // Update positions in the map
                  items.set(nums[j], j);
                  items.set(nums[i], i);
            }
      }

      return res;
};