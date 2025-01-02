//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2559

//? ⌚ Time complexity ➺ O(n + q) 👉🏻  n = len(words)

//? 🧺 Space complexity ➺ O(n)    👉🏻  q = len(queries) 

class Solution {
      public int[] vowelStrings(String[] words, int[][] queries) {
            // Define vowels for quick lookup
            String vowels = "aeiou";

            // Initialize a prefix sum array to store cumulative counts of vowel strings
            int[] vowels_words = new int[words.length + 1];

            // Build the prefix sum array
            for (int i = 0; i < words.length; i++) {
                  // Check if the current word starts and ends with a vowel
                  if (vowels.indexOf(words[i].charAt(0)) != -1 
                        && 
                  vowels.indexOf(words[i].charAt(words[i].length() - 1)) != -1) {
                        // Increment the count at the current index
                        vowels_words[i + 1] = vowels_words[i] + 1;
                  } else {
                        // Carry forward the previous count
                        vowels_words[i + 1] = vowels_words[i];
                  }
            }

            // Initialize the result array to store query results
            int[] ans = new int[queries.length];

            // Process each query
            for (int i = 0; i < queries.length; i++) {
                  int st = queries[i][0];
                  int end = queries[i][1];

                  // Calculate the count of vowel strings in the range [st, end]
                  ans[i] = vowels_words[end + 1] - vowels_words[st];
            }

            // Return the results for all queries
            return ans;
      }
}
