//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2364

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var countBadPairs = function (nums) {
      // Initialize variables for total pairs and good pairs
      let goodPair = 0;
      let totalPair = 0;

      // Map to keep track of occurrences of (nums[i] - i)
      let pair_count = new Map();

      // Iterate through the array
      for (let i = 0; i < nums.length; i++) {
            // Add index to total pairs count
            totalPair += i;

            // Count valid pairs using the map
            goodPair += pair_count.get(nums[i] - i) || 0;

            // Update the map with current (nums[i] - i) value
            pair_count.set(nums[i] - i, (pair_count.get(nums[i] - i) || 0) + 1);
      }

      // Return the number of bad pairs
      return totalPair - goodPair;
}
