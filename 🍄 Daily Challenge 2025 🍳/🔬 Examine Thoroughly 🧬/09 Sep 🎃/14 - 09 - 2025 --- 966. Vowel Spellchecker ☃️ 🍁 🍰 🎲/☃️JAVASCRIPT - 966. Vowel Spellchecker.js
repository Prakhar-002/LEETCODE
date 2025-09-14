//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 966

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(wordlist + queries)

//? 🧺 Space complexity ➺ O(n)

var spellchecker = function (wordlist, queries) {
      //  For exact match lookups
      const words_perfect = new Set(wordlist);
      //  Lowercased word map for case-insensitive matches
      const words_cap = {};
      //  Devoweled, lowercased word map for vowel-error matches
      const words_vow = {};

      //  Replace vowels with '*' for flexible matching
      function devowel(word) {
            return word.replace(/[aeiou]/g, '*');
      }

      //  Initialize maps with first occurrence
      wordlist.forEach(word => {
            const wordlow = word.toLowerCase();

            //  Store first occurrence for case-insensitive original preservation
            if (!(wordlow in words_cap)) {
                  words_cap[wordlow] = word;
            }

            //  Store first occurrence for vowel-error match
            const wordlowDV = devowel(wordlow);
            if (!(wordlowDV in words_vow)) {
                  words_vow[wordlowDV] = word;
            }
      });

      //  Decide the best match for a query, applying rules in order
      function solve(query) {
            //  1. Exact match
            if (words_perfect.has(query)) return query;
            //  2. Case-insensitive match
            const queryL = query.toLowerCase();
            if (words_cap.hasOwnProperty(queryL)) return words_cap[queryL];
            //  3. Vowel-error match
            const queryLV = devowel(queryL);
            if (words_vow.hasOwnProperty(queryLV)) return words_vow[queryLV];
            //  4. No match found
            return "";
      }

      //  Solve each query using matching rules
      return queries.map(solve);
};
