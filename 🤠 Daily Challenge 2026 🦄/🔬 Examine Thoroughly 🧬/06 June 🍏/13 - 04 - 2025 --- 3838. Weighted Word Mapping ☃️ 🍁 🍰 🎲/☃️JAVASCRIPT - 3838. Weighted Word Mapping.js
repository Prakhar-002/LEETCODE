//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3838

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var mapWordWeights = function(words, weights) {
      // Maps weight mod 26 back to a letter (0→'z', 1→'y', ..., 25→'a')
      const wordMap = [
            'z','y','x','w','v','u','t','s','r','q',
            'p','o','n','m','l','k','j','i','h','g',
            'f','e','d','c','b','a'
      ];

      let res = '';

      for (const word of words) {
            let weight = 0;

            // Sum weights of each character in the word
            for (const ch of word) {
                  weight += weights[ch.charCodeAt(0) - 97];
            }

            // Map the mod result to its corresponding letter
            res += wordMap[weight % 26];
      }

      return res;
};