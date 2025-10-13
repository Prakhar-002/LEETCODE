//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2273

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(words)

//? 🧺 Space complexity ➺ O(n)

var removeAnagrams = function (words) {
      const result = [words[0]];

      // Helper to check if two strings are anagrams
      const isAnagram = (s1, s2) => {
            if (s1.length !== s2.length) return false;

            const freq = Array(26).fill(0);
            for (const ch of s1) freq[ch.charCodeAt(0) - 97]++;
            for (const ch of s2) freq[ch.charCodeAt(0) - 97]--;

            return freq.every(count => count === 0);
      };

      // Process each adjacent pair
      for (let i = 1; i < words.length; i++) {
            if (!isAnagram(words[i - 1], words[i])) {
                  result.push(words[i]);
            }
      }

      return result;
};
