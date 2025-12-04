
//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1358

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

//* HashMap  

var numberOfSubstrings = function (s) {
      // Map to store the frequency of 'a', 'b', and 'c'
      let abcCount = new Map();
      let substring = 0;  // Counter to store the number of valid substrings
      let l = 0;  // Left pointer for the sliding window

      // Iterate over the string with the right pointer `r`
      for (let r = 0; r < s.length; r++) {
            abcCount.set(s[r], (abcCount.get(s[r]) || 0) + 1);

            // When all three characters ('a', 'b', 'c') are in the window
            while (abcCount.size === 3) {
                  // Every substring starting from index `l` to `r`
                  // contributes to (s.length - r) valid substrings
                  substring += (s.length - r);

                  // Shrink the window from the left
                  abcCount.set(s[l], abcCount.get(s[l]) - 1);

                  // If the character count becomes zero, remove it from the map
                  if (abcCount.get(s[l]) === 0) {
                        abcCount.delete(s[l]);
                  }

                  l++;  // Move the left pointer forward
            }
      }

      return substring;  // Return the total count of valid substrings
};

//!--------------------------------------------------------------------------------- 

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

var numberOfSubstrings = function (s) {
      // Variables to store the most recent index of 'a', 'b', and 'c'
      let a = -1, b = -1, c = -1;
      let count = 0; // Counter to store the total number of valid substrings

      // Iterate over the string
      for (let i = 0; i < s.length; i++) {
            // Update the most recent position of 'a', 'b', or 'c'
            switch (s[i]) {
                  case 'a':
                        a = i;
                        break;
                  case 'b':
                        b = i;
                        break;
                  case 'c':
                        c = i;
                        break;
            }

            // If any of the three characters are missing, continue to the next iteration
            if (a === -1 || b === -1 || c === -1) {
                  continue;
            }

            // Find the leftmost occurrence among 'a', 'b', and 'c'
            const min = Math.min(a, b, c);

            // Every substring starting from index 0 to `min` is valid
            count += (min + 1);
      }

      return count; // Return the total count of valid substrings
};
