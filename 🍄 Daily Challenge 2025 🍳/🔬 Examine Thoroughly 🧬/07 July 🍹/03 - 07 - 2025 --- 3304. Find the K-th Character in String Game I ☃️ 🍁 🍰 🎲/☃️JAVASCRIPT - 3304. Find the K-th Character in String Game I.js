//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3304

//? ⌚ Time complexity ➺ O(log k) 

//? 🧺 Space complexity ➺ O(1)

var kthCharacter = function (k) {
      let ans = 0;

      // Loop until we reach root (k == 1)
      while (k !== 1) {
            // Find the position of the highest bit (similar to log2)
            let t = Math.floor(Math.log2(k));

            // If k is a power of 2, decrease t by 1
            if ((1 << t) === k) {
                  t -= 1;
            }

            // Subtract the largest power of 2 <= k
            k -= (1 << t);

            // Each such operation increases the depth → next letter
            ans++;
      }

      // Convert depth to character by offsetting from 'a'
      return String.fromCharCode('a'.charCodeAt(0) + ans);
};
