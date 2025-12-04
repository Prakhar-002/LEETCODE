//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 424

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var characterReplacement = function (s, k) {
      // Object (HashMap) to store character frequencies in the current window
      let charCount = new Map();
      let left = 0; // Left pointer of the sliding window
      let maxFreq = 0; // Maximum frequency of a single character in the window
      let longestString = 0; // Stores the longest valid substring length

      // Iterate through the string with a right pointer
      for (let right = 0; right < s.length; right++) {
            // Update the frequency count of the current character
            charCount.set(s[right], (charCount.get(s[right]) || 0) + 1);

            // Update maxFreq with the highest occurring character in the window
            maxFreq = Math.max(maxFreq, charCount.get(s[right]));

            // If the window size minus the highest frequency character is greater than k, shrink the window
            while ((right - left + 1) - maxFreq > k) {
                  charCount.set(s[left], charCount.get(s[left]) - 1);
                  left++; // Move the left pointer forward
            }

            // Update longestString with the current valid window size
            longestString = Math.max(longestString, right - left + 1);
      }

      return longestString;
}