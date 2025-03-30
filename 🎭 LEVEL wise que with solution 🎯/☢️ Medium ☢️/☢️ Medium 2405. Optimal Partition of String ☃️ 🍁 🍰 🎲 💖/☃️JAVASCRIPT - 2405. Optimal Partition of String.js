//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2405

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

var partitionString = function (s) {
      let partitions = 0; // Count of partitions
      let seen = new Array(26).fill(false); // Boolean array to track seen characters

      // Iterate through each character in the string
      for (let i = 0; i < s.length; i++) {
            let index = s.charCodeAt(i) - 'a'.charCodeAt(0); // Convert character to index (0-25)

            // If the character is already seen, start a new partition
            if (seen[index]) {
                  partitions++; // Increment partition count
                  seen.fill(false); // Reset seen array
            }

            // Mark the current character as seen
            seen[index] = true;
      }

      return partitions + 1; // Add one to count the last partition
};
