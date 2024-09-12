//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1684

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(words) m = len(allowed)

//? 🧺 Space complexity ➺ O(1)

var countConsistentStrings = function (allowed, words) {
      // Converts the string into a Set to reduce the time complexity
      const allowedSet = new Set(allowed);

      // This counter represents the number of consistent strings,
      // which initially is assumed to be equal to the total number of words
      let consistentString = words.length;

      // loop iterates over each word in the `words`
      for (let word of words) {
            // `for...of` loop iterates over each character (`ch`) of the current word
            for (let ch of word) {
                  // If an inconsistent word is found (when a character is not in `allowedSet`)
                  if (!allowedSet.has(ch)) {
                        // counter `consistentString` is decremented by 1
                        consistentString--;
                        // decremented only once per inconsistent word so break it here
                        break;
                  }
            }
      }

      return consistentString;
}
