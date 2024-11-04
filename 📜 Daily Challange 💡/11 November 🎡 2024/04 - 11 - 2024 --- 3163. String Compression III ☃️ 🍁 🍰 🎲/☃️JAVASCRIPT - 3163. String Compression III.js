//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3163

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(word)

//? 🧺 Space complexity ➺ O(1)

var compressedString = function (word) {
      let n = word.length;
      let start = 0;  // Starting index of the current sequence
      let comp = [];  // Array to build the compressed string

      for (let i = 1; i <= n; i++) {
            // Check if we've reached the end, found a different character, or max sequence length of 9
            if (i === n || word[i] !== word[start] || (i - start) === 9) {
                  comp.push((i - start).toString());  // Append sequence length
                  comp.push(word[start]);             // Append the character itself
                  start = i;                          // Update start for the next sequence
            }
      }

      return comp.join('');   // Join array elements into the final compressed string
};