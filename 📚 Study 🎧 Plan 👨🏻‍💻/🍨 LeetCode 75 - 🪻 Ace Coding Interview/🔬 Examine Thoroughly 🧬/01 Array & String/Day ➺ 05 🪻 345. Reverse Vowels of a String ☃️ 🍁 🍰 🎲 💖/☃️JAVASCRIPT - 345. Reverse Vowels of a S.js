//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 345

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = s.length

//? 🧺 Space complexity ➺ O(n)

var reverseVowels = function (s) {
      // Set of vowels for easy lookup
      const vowels = new Set("aeiouAEIOU");

      // Convert the string to an array of characters
      // This allows us to modify the characters directly
      let chars = s.split('');

      // Initialize two pointers
      let left = 0;
      let right = chars.length - 1;

      // Use two pointers to find and swap vowels
      while (left < right) {
            // Move left pointer to the right until a vowel is found
            while (left < right && !vowels.has(chars[left])) {
                  left++;
            }

            // Move right pointer to the left until a vowel is found
            while (left < right && !vowels.has(chars[right])) {
                  right--;
            }

            // If both pointers are at vowels, swap them
            if (left < right) {
                  [chars[left], chars[right]] = [chars[right], chars[left]];

                  // Move the pointers inward to continue checking
                  left++;
                  right--;
            }
      }

      // Convert the array back to a string and return
      return chars.join('');
};