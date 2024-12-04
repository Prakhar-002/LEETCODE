//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2825

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(str1)

//? 🧺 Space complexity ➺ O(1)

var canMakeSubsequence = function (str1, str2) {
      // Pointer to track the position in the str2 string
      let targetIndex = 0;

      // Iterate through each character in the str1 string
      for (let sourceIndex = 0; sourceIndex < str1.length; sourceIndex++) {
            const sourceChar = str1[sourceIndex];
            const targetChar = str2[targetIndex];

            // Check if we can match the current str2 character
            // Conditions:
            // 1. Characters are equal, or
            // 2. The str2 character is the next in sequence (cyclic for 'z'->'a'), or
            // 3. The str1 character is 'z' and the str2 character is 'a'.
            if (targetIndex < str2.length &&
                  (sourceChar === targetChar || targetChar.charCodeAt(0) - sourceChar.charCodeAt(0) === 1
                        || (sourceChar === 'z' && targetChar === 'a'))) {
                  targetIndex++; // Move to the next character in the str2 string

                  // If all characters in str2 are matched, return true
                  if (targetIndex === str2.length) {
                        return true;
                  }
            }
      }

      // Return true if all characters in str2 are matched, false otherwise
      return targetIndex === str2.length;
}