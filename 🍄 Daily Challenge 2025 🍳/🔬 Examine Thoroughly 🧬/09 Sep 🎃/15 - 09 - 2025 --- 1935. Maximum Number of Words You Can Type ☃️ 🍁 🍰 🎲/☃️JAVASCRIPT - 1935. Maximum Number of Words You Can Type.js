//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1935

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(text)

//? 🧺 Space complexity ➺ O(n)

var canBeTypedWords = function (text, brokenLetters) {
      //      Convert brokenLetters into a Set for fast lookup
      const broken = new Set(brokenLetters);

      const words = text.split(" ");           //      Split text into words
      let count = 0;                           //      Counter for typeable words

      //      Check each word
      for (const word of words) {
            let hasBroken = false;             //      Flag for broken letter
            for (const ch of word) {
                  if (broken.has(ch)) {
                        hasBroken = true;      //      Word contains broken letter, skip
                        break;
                  }
            }

            if (!hasBroken) count++;           //      No broken letter found, increment counter
      }

      return count;                            //      Return result
};
