//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3307

//? ⌚ Time complexity ➺ O(log k)

//? 🧺 Space complexity ➺ O(1)

var kthCharacter = function (k, operations) {
      let ans = 0; // This will count how many times we need to shift from 'a'

      // Continue until we reach the root of the binary tree (position 1)
      while (k !== 1) {
            // Find the most significant bit position in k (i.e., highest power of 2 ≤ k)
            let t = Math.floor(Math.log2(k));

            // If k is exactly a power of 2 (like 2, 4, 8, 16, etc.), move one level up
            // Example: if k == 8 (2^3), then we subtract 2^2 instead (to avoid staying at same level)
            if (Math.pow(2, t) === k) {
                  t--;
            }

            // Move k one step up in the binary tree by subtracting 2^t
            k -= Math.pow(2, t);

            // If there's an operation at level t, we increment our shift count
            if (operations[t]) {
                  ans++;
            }
      }

      // Return the final character after applying (ans % 26) shifts from 'a'
      return String.fromCharCode("a".charCodeAt(0) + (ans % 26));
};
