//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3042

// ? ⌚ Time complexity ➺ O(n ^ 2 * m) 👉🏻  n = No. of words

// ? 🧺 Space complexity ➺ O(1)        👉🏻  m = Max len(one word)

var countPrefixSuffixPairs = function (words) {
      let n = words.length;
      let count = 0;

      // Step 1: Iterate through each pair of words
      for (let i = 0; i < n; i++) {
            for (let j = i + 1; j < n; j++) {
                  let str1 = words[i];
                  let str2 = words[j];

                  // Step 2: Skip if the first string is larger than the second
                  if (str1.length > str2.length) {
                        continue;
                  }

                  // Step 3: Check if str1 is both the prefix and suffix of str2
                  if (str2.startsWith(str1) && str2.endsWith(str1)) {
                        count++;
                  }
            }
      }

      // Step 4: Return the total count of prefix-suffix pairs
      return count;
}