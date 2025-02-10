//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 76

//? ⌚ Time complexity ➺ O(n)  👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(m) 👉🏻  m = Unique Char in s & t

var minWindow = function(s, t) {
      // If t is empty, return an empty string
      if (t.length === 0) {
            return "";
      }

      // Create frequency maps for t and window
      let countT = new Map(), window = new Map();

      // Populate countT with the frequency of characters in t
      for (let ch of t) {
            countT.set(ch, (countT.get(ch) || 0) + 1);
      }

      let have = 0, need = countT.size;
      let res = [-1, -1], resLen = Infinity;  // Store the indices of the smallest window
      let l = 0; // Left pointer

      // Iterate with right pointer `r`
      for (let r = 0; r < s.length; r++) {
            let ch = s[r];
            window.set(ch, (window.get(ch) || 0) + 1);

            // If character matches the required count
            if (countT.has(ch) && window.get(ch) === countT.get(ch)) {
                  have++;
            }

            // Shrink window while valid
            while (have === need) {
                  // Update result if the current window is smaller
                  if ((r - l + 1) < resLen) {
                        res = [l, r];
                        resLen = r - l + 1;
                  }

                  // Remove leftmost character
                  let leftChar = s[l];
                  window.set(leftChar, window.get(leftChar) - 1);

                  // If removing breaks a needed character count
                  if (countT.has(leftChar) && window.get(leftChar) < countT.get(leftChar)) {
                        have--;
                  }

                  l++; // Move left pointer
            }
      }

      let [start, end] = res;
      // Return the smallest window substring or an empty string if not found
      return resLen === Infinity ? "" : s.substring(start, end + 1);
};
