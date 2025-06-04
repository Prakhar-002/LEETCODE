//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3403

//? ⌚ Time complexity ➺   O(n × (n - numFriends + 1)) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺  O(n - numFriends + 1)

class Solution {
      public String answerString(String word, int numFriends) { 
            // If there's only 1 friend, return the whole word
            if (numFriends == 1) {
                  return word;
            }

            // Get the length of the word
            int n = word.length();

            // Variable to store the lexicographically largest substring
            String res = "";

            int length = n - numFriends + 1;

            // Iterate over each possible starting index
            for (int i = 0; i < n; i++) {
                  // Extract a substring of max allowed length
                  // Length should be (n - numFriends + 1)
                  // We take min to ensure we don't go out of bounds
                  String temp = word.substring(i, Math.min(i + length, n));

                  // If current substring is lexicographically greater or equal
                  if (res.compareTo(temp) <= 0) {
                        res = temp; // Update the result
                  }
            }

            // Return the best substring found
            return res;
      }
}
