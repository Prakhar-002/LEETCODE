//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 443

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(chars)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int compress(char[] chars) {
            int n = chars.length;
            int i = 0; // Position to read characters
            int j = 0; // Position to write the compressed result

            while (i < n) {
                  char ch = chars[i];
                  int count = 0;

                  // Count the occurrences of the current character
                  while (i < n && chars[i] == ch) {
                        i++;
                        count++;
                  }

                  // Write the character to the result
                  chars[j] = ch;
                  j++;

                  // If count > 1, write the count as digits
                  if (count > 1) {
                        for (char digit : String.valueOf(count).toCharArray()) {
                              chars[j] = digit;
                              j++;
                        }
                  }
            }

            // The final length of the compressed array
            return j;
      }
}
