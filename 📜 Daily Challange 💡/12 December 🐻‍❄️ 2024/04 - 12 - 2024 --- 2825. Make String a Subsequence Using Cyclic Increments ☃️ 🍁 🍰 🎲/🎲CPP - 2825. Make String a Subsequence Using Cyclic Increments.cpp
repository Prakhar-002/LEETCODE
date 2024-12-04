//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2825

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(str1)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      bool canMakeSubsequence(string str1, string str2) {
            // Pointer to track the position in the str2 string
            int targetIndex = 0;

            // Iterate through each character in the str1 string
            for (int sourceIndex = 0; sourceIndex < str1.length(); sourceIndex++) {
                  char sourceChar = str1[sourceIndex];
                  char targetChar = str2[targetIndex];

                  // Check if we can match the current str2 character
                  // Conditions:
                  // 1. Characters are equal, or
                  // 2. The str2 character is the next in sequence (cyclic for 'z'->'a'), or
                  // 3. The str1 character is 'z' and the str2 character is 'a'.
                  if (targetIndex < str2.length() &&
                              (sourceChar == targetChar || targetChar - sourceChar == 1
                                    || (sourceChar == 'z' && targetChar == 'a'))) {
                        targetIndex++; // Move to the next character in the str2 string

                        // If all characters in str2 are matched, return true
                        if (targetIndex == str2.length()) {
                              return true;
                        }
                  }
            }

            // Return true if all characters in str2 are matched, false otherwise
            return targetIndex == str2.length();
      }
};
