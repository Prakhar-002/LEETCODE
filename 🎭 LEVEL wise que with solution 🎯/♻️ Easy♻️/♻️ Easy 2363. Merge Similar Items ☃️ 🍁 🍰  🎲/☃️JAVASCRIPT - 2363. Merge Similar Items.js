//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2363

// ? ⌚ Time complexity ➺ O(n + m + k log k) 👉🏻  n = len(items1) m = len(items2)

// ? 🧺 Space complexity ➺ O(n + m)          👉🏻    k = No.of unique value

var mergeSimilarItems = function (items1, items2) {
      // Map to store weight sums for each value
      const val_to_wei = new Map();

      // Process the first list and add weights to corresponding values
      for (const [value, weight] of items1) {
            val_to_wei.set(value, (val_to_wei.get(value) || 0) + weight);
      }

      // Process the second list and add weights to corresponding values
      for (const [value, weight] of items2) {
            val_to_wei.set(value, (val_to_wei.get(value) || 0) + weight);
      }

      // This will hold the final result list
      const ret = [];

      // Convert map to array, sort by value, and add to result list
      const sortedEntries = Array.from(val_to_wei.entries()).sort((a, b) => a[0] - b[0]);

      for (const [value, weight] of sortedEntries) {
            ret.push([value, weight]);
      }

      // Return the merged and sorted list of items
      return ret;
};
