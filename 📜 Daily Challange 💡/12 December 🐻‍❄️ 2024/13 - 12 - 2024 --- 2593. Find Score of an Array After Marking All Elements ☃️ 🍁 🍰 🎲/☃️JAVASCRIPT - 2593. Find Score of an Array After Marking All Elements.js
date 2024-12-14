//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2593

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var findScore = function(nums) {
      const n = nums.length;

      // Create an array to store pairs of numbers and their indices
      let numIndexPairs = [];
      for (let i = 0; i < n; i++) {
            numIndexPairs.push([nums[i], i]);
      }

      // Sort the array based on the numbers in ascending order
      numIndexPairs.sort((a, b) => a[0] - b[0]);

      // Create a boolean array to track whether an index is "marked"
      let isMarked = new Array(n).fill(false);

      let result = 0;

      // Iterate over the sorted array
      for (let [num, index] of numIndexPairs) {
            // If the current index is not marked, process it
            if (!isMarked[index]) {
                  result += num;

                  // Mark the current index and adjacent indices
                  isMarked[index] = true;
                  if (index - 1 >= 0) {
                        isMarked[index - 1] = true;
                  }
                  if (index + 1 < n) {
                        isMarked[index + 1] = true;
                  }
            }
      }

      return result;
};
