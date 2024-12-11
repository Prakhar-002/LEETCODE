//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1456

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

var maxVowels = function (s, k) {
      // Initialize the left pointer for the sliding window
      let l = 0;

      // Define the set of vowels for quick lookup
      const vowels = new Set(['a', 'e', 'i', 'o', 'u']);

      // Variable to keep track of the current count of vowels in the window
      let curVowels = 0;

      // Variable to store the maximum number of vowels found
      let maxVowels = 0;

      // Iterate through the string with the right pointer
      for (let r = 0; r < s.length; r++) {
            // Increment the count if the current character is a vowel
            if (vowels.has(s[r])) {
                  curVowels++;
            }

            // If the window size exceeds k, adjust by removing the leftmost character
            if (r - l + 1 > k) {
                  if (vowels.has(s[l])) {
                        curVowels--;
                  }
                  l++; // Move the left pointer to the right
            }

            // Update the maximum vowels count if the current count is greater
            maxVowels = Math.max(curVowels, maxVowels);
      }

      // Return the maximum number of vowels found
      return maxVowels;
}