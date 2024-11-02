//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1957

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public String makeFancyString(String s) {
            // if length is less than 2
            if (s.length() < 2) {
                  // return the same string cause it can not contain 3 consecutive latter
                  return s;
            }

            // Initialize 'fancy' as a StringBuilder with the first two characters of 's'.
            StringBuilder fancy = new StringBuilder(s.substring(0, 2));

            // Start iterating from the third character in the string.
            for (int i = 2; i < s.length(); i++) {
                  char ch = s.charAt(i);

                  // store the length of fancy string
                  int n = fancy.length();

                  // Check if the last two characters in 'fancy' are the same as the current character.
                  if (fancy.charAt(n - 1) == ch && fancy.charAt(n - 2) == ch) {
                        continue;
                  } else {
                        // Otherwise, append 'ch' to 'fancy'.
                        fancy.append(ch);
                  }
            }

            // Convert StringBuilder to String and return the modified string.
            return fancy.toString();
      }
}
