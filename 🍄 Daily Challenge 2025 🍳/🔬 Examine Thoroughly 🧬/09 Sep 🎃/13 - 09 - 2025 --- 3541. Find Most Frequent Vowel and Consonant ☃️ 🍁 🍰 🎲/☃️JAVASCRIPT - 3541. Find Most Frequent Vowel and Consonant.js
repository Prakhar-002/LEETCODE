//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3541

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(26)

var maxFreqSum = function (s) {
      const freq = new Array(26).fill(0);    //      Tracks frequency of each lowercase letter ('a'-'z')

      //      Count each character's frequency
      for (const ch of s) {
            freq[ch.charCodeAt(0) - 'a'.charCodeAt(0)]++;
      }

      //      Get maximum among vowels
      const vowels = Math.max(
            freq['a'.charCodeAt(0) - 'a'.charCodeAt(0)],
            freq['e'.charCodeAt(0) - 'a'.charCodeAt(0)],
            freq['i'.charCodeAt(0) - 'a'.charCodeAt(0)],
            freq['o'.charCodeAt(0) - 'a'.charCodeAt(0)],
            freq['u'.charCodeAt(0) - 'a'.charCodeAt(0)]
      );

      //      Set vowel frequencies to zero before checking consonant max
      freq['a'.charCodeAt(0) - 'a'.charCodeAt(0)] = 0;
      freq['e'.charCodeAt(0) - 'a'.charCodeAt(0)] = 0;
      freq['i'.charCodeAt(0) - 'a'.charCodeAt(0)] = 0;
      freq['o'.charCodeAt(0) - 'a'.charCodeAt(0)] = 0;
      freq['u'.charCodeAt(0) - 'a'.charCodeAt(0)] = 0;

      let consonant = 0;                      //      Stores the max frequency among non-vowels
      for (let i = 0; i < 26; i++) {
            consonant = Math.max(consonant, freq[i]);
      }

      //      Add max-vowel frequency and max-consonant frequency for result
      return consonant + vowels;
};

