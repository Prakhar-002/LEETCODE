//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1768

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public String mergeAlternately(String word1, String word2) {
            // a StringBuilder which will store the merged result
            StringBuilder merge = new StringBuilder();

            // first pointer for traversing `word1`
            int ptrOne = 0;
            // second pointer for traversing `word2`
            int ptrTwo = 0;

            // loop continues as long as both `ptrOne` is < the length of `word1`
            // and `ptrTwo` is < the length of `word2`
            while (ptrOne < word1.length() && ptrTwo < word2.length()) {
                  // appends the char from `word1` first
                  // increment the pointer for `word1`
                  merge.append(word1.charAt(ptrOne++));

                  // then appends the char from `word2`
                  // increment the pointer for `word2`
                  merge.append(word2.charAt(ptrTwo++));
            }

            // if `word1` has some char remain
            while (ptrOne < word1.length()) {
                  // append remaining char
                  // inc the pointer for accessing the char
                  merge.append(word1.charAt(ptrOne++));
            }

            // if `word2` has some char remain
            while (ptrTwo < word2.length()) {
                  // append remaining char from `word2`
                  // inc the pointer for accessing the char
                  merge.append(word2.charAt(ptrTwo++));
            }

            // returns the merged string
            return merge.toString();
      }
}
