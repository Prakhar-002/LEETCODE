//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1652

//? ⌚ Time complexity ➺ O(n + k) 👉🏻  n = len(code)

//? 🧺 Space complexity ➺ O(1)

var decrypt = function(code, k) {
      // Get the length of the code array
      const N = code.length;

      // Initialize an array to store the decrypted code
      const decryptedCode = Array(N).fill(0);

      // Initialize pointers and the current sum
      let l = 0, curSum = 0;

      // Iterate over the extended range of indices to handle circular behavior
      for (let r = 0; r < N + Math.abs(k); r++) {
            // Add the current value to the sum (using modulo for circular behavior)
            curSum += code[r % N];

            // If the window size exceeds the absolute value of k, remove the leftmost value
            if (r - l + 1 > Math.abs(k)) {
                  curSum -= code[l % N];
                  l = (l + 1) % N;
            }

            // When the window size equals the absolute value of k
            if (r - l + 1 === Math.abs(k)) {
                  if (k > 0) {
                        // If k is positive, update the value at the (l-1)%N index
                        decryptedCode[(l - 1 + N) % N] = curSum;
                  } else if (k < 0) {
                        // If k is negative, update the value at the (r+1)%N index
                        decryptedCode[(r + 1) % N] = curSum;
                  }
            }
      }

      // Return the decrypted code array
      return decryptedCode;
};
