//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(m) 👉🏻 m = maxLength

var lengthOfLongestSubstring = function (s) {
      // Set to store unique characters
      let charSet = new Set();
      let left = 0; // Left pointer of the sliding window
      let maxLength = 0; // Maximum length of substring

      // Iterate through the string with a right pointer
      for (let right = 0; right < s.length; right++) {
            // If character is already in set, shrink the window from the left
            while (charSet.has(s[right])) {
                  charSet.delete(s[left]);
                  left++; // Move left pointer to remove duplicates
            }

            // Add current character to the set
            charSet.add(s[right]);

            // Update maxLength with the current window size
            maxLength = Math.max(maxLength, right - left + 1);
      }

      return maxLength;
}