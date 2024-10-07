//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2490

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(strArr)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public boolean isCircularSentence(String sentence) {
            // Splitting the sentence into words automatically removes extra spaces
            String[] strArr = sentence.split(" ");

            int n = strArr.length;

            // Iterate through the words
            for (int i = 0; i < n; i++) {
                  // Check if the last character of the current word matches the first character
                  // of the next word
                  if (strArr[i].charAt(strArr[i].length() - 1) != strArr[(i + 1) % n].charAt(0)) {
                        return false;
                  }
            }

            // If all conditions are met, return true
            return true;
      }
}
