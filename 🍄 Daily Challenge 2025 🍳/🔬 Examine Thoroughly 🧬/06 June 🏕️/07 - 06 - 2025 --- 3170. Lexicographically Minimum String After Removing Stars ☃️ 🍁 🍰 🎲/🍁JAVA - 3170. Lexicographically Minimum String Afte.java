//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3170

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public String clearStars(String inputStr) {
            // Create 26 stacks for each lowercase letter
            Stack<Integer>[] charIndices = new Stack[26];
            for (int i = 0; i < 26; i++) {
                  charIndices[i] = new Stack<>();
            }

            // Convert input string to char array
            char[] chars = inputStr.toCharArray();

            // Traverse each character
            for (int i = 0; i < chars.length; i++) {
                  char ch = chars[i];
                  if (ch != '*') {
                        // Record index of letter
                        charIndices[ch - 'a'].push(i);
                  } else {
                        // Find the smallest character to erase
                        for (int j = 0; j < 26; j++) {
                              if (!charIndices[j].isEmpty()) {
                                    int pos = charIndices[j].pop();
                                    chars[pos] = '*'; // Mark for removal
                                    break;
                              }
                        }
                  }
            }

            // Build result string excluding '*'
            StringBuilder result = new StringBuilder();
            for (char ch : chars) {
                  if (ch != '*') {
                        result.append(ch);
                  }
            }

            return result.toString();
      }
}
