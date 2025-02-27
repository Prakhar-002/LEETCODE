//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 873

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(arr)

//? 🧺 Space complexity ➺ O(n)

var lenLongestFibSubseq = function(arr) {
      // Use a Set to store array elements for fast lookup
      const arr_set = new Set(arr);

      // Variable to store the maximum subsequence length
      let maxFibLength = 0;

      // Outer loop to choose the first number
      for (let i = 0; i < arr.length - 1; i++) {
            // Inner loop to choose the second number
            for (let j = i + 1; j < arr.length; j++) {
                  // Set the initial two numbers of the subsequence
                  let prev = arr[i], cur = arr[j];

                  // Calculate the next number in the sequence
                  let nxt = prev + cur;

                  // Initial subsequence length is 2
                  let length = 2;

                  // Extend subsequence if the next number exists
                  while (arr_set.has(nxt)) {
                        // Increase the length of the subsequence
                        length++;

                        // Shift numbers forward
                        prev = cur;
                        cur = nxt;

                        // Calculate the next number
                        nxt = prev + cur;

                        // Update the maximum length found
                        maxFibLength = Math.max(maxFibLength, length);
                  }
            }
      }

      // Return the length of the longest Fibonacci-like subsequence found
      return maxFibLength;
};
