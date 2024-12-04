//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1455

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of words

//? 🧺 Space complexity ➺ O(n)

import java.util.StringTokenizer;

class Solution {
      public int isPrefixOfWord(String sentence, String searchWord) {
            // Split the sentence into words using StringTokenizer
            StringTokenizer tokenizer = new StringTokenizer(sentence);

            // Initialize the 1-based index
            int index = 1;

            // Iterate through each word
            while (tokenizer.hasMoreTokens()) {
                  String word = tokenizer.nextToken();

                  // Check if the word starts with the searchWord
                  if (word.startsWith(searchWord)) {
                        return index; // Return the current index if it's a prefix
                  }

                  // Increment the index for the next word
                  index++;
            }

            // Return -1 if no word starts with the searchWord
            return -1;
      }
}
