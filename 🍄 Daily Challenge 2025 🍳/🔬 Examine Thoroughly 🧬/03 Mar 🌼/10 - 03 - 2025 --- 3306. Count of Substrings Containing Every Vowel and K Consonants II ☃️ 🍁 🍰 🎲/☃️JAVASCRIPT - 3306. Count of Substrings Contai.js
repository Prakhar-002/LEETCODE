//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3306

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(word)

//? 🧺 Space complexity ➺ O(1)

var countOfSubstrings = function (word, k) {
      //? Function to count substrings with at least k non-vowels and all vowels
      function atLeastK(k) {
            let vowels = new Map(); // Map to store vowel frequency
            let nonVowels = 0; // Count of non-vowel characters
            let subStr = 0; // Count of valid substrings
            let l = 0; // Left pointer for sliding window

            for (let r = 0; r < word.length; r++) {
                  let c = word[r];

                  // If current character is a vowel, update its count
                  if (isVowel(c)) {
                        vowels.set(c, (vowels.get(c) || 0) + 1);
                  } else {
                        nonVowels++; // Increment count of non-vowel characters
                  }

                  // Shrink window if all vowels are present & non-vowel count is at least k
                  while (vowels.size === 5 && nonVowels >= k) {
                        subStr += (word.length - r); // Count all valid substrings from (l to r)

                        let leftChar = word[l];
                        if (isVowel(leftChar)) {

                              vowels.set(leftChar, vowels.get(leftChar) - 1);

                              if (vowels.get(leftChar) === 0) {
                                    vowels.delete(leftChar); // Remove vowel if count reaches 0
                              }

                        } else {
                              nonVowels--; // Reduce non-vowel count
                        }

                        l++; // Move left pointer
                  }
            }

            return subStr;
      }

      // Compute the count difference between k and k + 1
      return atLeastK(k) - atLeastK(k + 1);
};

//  * Helper function to check if a character is a vowel
function isVowel(ch) {
      return "aeiou".includes(ch);
}
