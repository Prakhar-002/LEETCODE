//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1768

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var mergeAlternately = function (word1, word2) {
      // an empty string which will store the merged result
      let merge = "";

      // first pointer for traversing `word1`
      let ptrOne = 0;
      // second pointer for traversing `word2`
      let ptrTwo = 0;

      // loop continues as long as both `ptrOne` is < the length of `word1` 
      // and `ptrTwo` is < the length of `word2`
      while (word1.length > ptrOne && word2.length > ptrTwo) {
            // appends the char from `word1` first
            // increment the pointer for `word1`
            merge += word1[ptrOne++];

            // then appends the char from `word2`
            // increment the pointer for `word2`
            merge += word2[ptrTwo++];
      }

      // if `word1` has some char remain
      while (word1.length > ptrOne) {
            // append remaining char
            // inc the pointer for accessing the char
            merge += word1[ptrOne++];
      }

      // if `word2` has some char remain
      while (word2.length > ptrTwo) {
            // append remaining char from `word2`
            // inc the pointer for accessing the char
            merge += word2[ptrTwo++];
      }

      // returns the merged string
      return merge;
};