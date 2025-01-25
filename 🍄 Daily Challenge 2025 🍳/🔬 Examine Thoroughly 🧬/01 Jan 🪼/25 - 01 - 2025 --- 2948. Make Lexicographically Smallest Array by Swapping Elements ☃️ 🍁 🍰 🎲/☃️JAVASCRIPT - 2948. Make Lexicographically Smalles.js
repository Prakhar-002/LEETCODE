//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2948

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var lexicographicallySmallestArray = function (nums, limit) {
      // List of queues to group elements
      const groups = [];

      // Map to store each number's group index
      const numToGroup = new Map();

      // Create a copy of the original array and sort it
      const sortedNums = [...nums].sort((a, b) => a - b);

      // Group the elements using the sorted array
      for (const n of sortedNums) {
            // If no groups exist or the difference between the current
            // number and the last number in the last group exceeds the limit,
            // create a new group
            if (groups.length === 0 || Math.abs(n - groups[groups.length - 1][groups[groups.length - 1].length - 1]) > limit) {
                  groups.push([]);
            }

            // Add the number to the current group
            groups[groups.length - 1].push(n);

            // Store the group index for the number
            numToGroup.set(n, groups.length - 1);
      }

      // Initialize the result array
      const lexArr = new Array(nums.length);

      // Iterate through the original array of numbers
      nums.forEach((n, i) => {
            // Get the group index for the number
            const idx = numToGroup.get(n);

            // Append the smallest available number from the group to the result
            lexArr[i] = groups[idx].shift();
      });

      // Return the lexicographically smallest array
      return lexArr;
}
