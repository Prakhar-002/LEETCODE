//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 217

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var containsDuplicate = function (nums) {
      // Initialize a Set to store unique elements.
      const seen = new Set();

      // Iterate through each number in the array.
      for (const num of nums) {
            // If the current number is already in the set,
            // it means we have found a duplicate.
            if (seen.has(num)) {
                  return true;
            }

            // Add the current number to the set to mark it as seen.
            seen.add(num);
      }

      // If no duplicates are found, return false.
      return false;
}