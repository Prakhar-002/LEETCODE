//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1733

//? ⌚ Time complexity ➺ O(m * n)  👉🏻  n = given

//? 🧺 Space complexity ➺ O(m + n) 👉🏻  m = lang

var minimumTeachings = function (n, languages, friendships) {
      const sadUsers = new Set();   //      Users who cannot communicate with their friends

      //      Identify pairs who cannot talk due to no common language
      for (const [u0, v0] of friendships) {
            const u = u0 - 1;      //      Zero-based indexing
            const v = v0 - 1;

            const langSet = new Set(languages[u]);   //      Languages user u knows
            let canTalk = false;                      //      Flag for shared language

            for (const lang of languages[v]) {
                  if (langSet.has(lang)) {
                        canTalk = true;
                        break;
                  }
            }

            if (!canTalk) {
                  sadUsers.add(u);
                  sadUsers.add(v);
            }
      }

      const languageCount = new Map();  //      Count of sad users knowing each language
      let mostKnownLang = 0;

      //      Count language occurrences among sad users
      for (const user of sadUsers) {
            for (const lang of languages[user]) {
                  const count = (languageCount.get(lang) || 0) + 1;
                  languageCount.set(lang, count);
                  if (count > mostKnownLang) mostKnownLang = count;
            }
      }

      //      Minimum teachings = sad users - largest group sharing a language
      return sadUsers.size - mostKnownLang;
};
