//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 763

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

var partitionLabels = function (s) {
      // Step 1: Store the last occurrence index of each character
      let lastIdx = new Array(26).fill(0); // Array to store last index of each character (a-z)

      // Populate last occurrence indices
      for (let i = 0; i < s.length; i++) {
            lastIdx[s.charCodeAt(i) - 'a'.charCodeAt(0)] = i; // Store last index of each character
      }

      // Step 2: Partitioning process
      let partitions = [];
      let size = 0, end = 0; // Variables to track partition size and partition end

      // Iterate through the string to determine partitions
      for (let i = 0; i < s.length; i++) {
            size++; // Increase partition size
            end = Math.max(end, lastIdx[s.charCodeAt(i) - 'a'.charCodeAt(0)]); // Update partition end

            // If the current index matches the partition end
            if (i === end) {
                  partitions.push(size); // Store partition size
                  size = 0; // Reset size for the next partition
            }
      }

      return partitions; // Return list of partition sizes
};