//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 769

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(arr)

//? 🧺 Space complexity ➺ O(1)

var maxChunksToSorted = function (arr) {
      const n = arr.length;
      let chunks = 0, maxElement = 0;

      // Iterate over the array
      for (let i = 0; i < n; i++) {
            // Update maxElement
            maxElement = Math.max(maxElement, arr[i]);

            if (maxElement === i) {
                  // All values in range [0, i] belong to the prefix arr[0:i]; a new chunk can be formed
                  chunks++;
            }
      }

      return chunks;
}