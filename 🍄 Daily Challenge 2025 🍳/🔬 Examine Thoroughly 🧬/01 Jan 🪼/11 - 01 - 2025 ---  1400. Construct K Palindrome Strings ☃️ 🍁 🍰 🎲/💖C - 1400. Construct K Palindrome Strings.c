//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1400

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool canConstruct(char* s, int k) {
      // If the string length is less than k, constructing k palindromes is impossible.
      int len = strlen(s);
      if (len < k) {
            return false;
      }

      // If the string length equals k, each character can form a single-character palindrome.
      if (len == k) {
            return true;
      }

      // Count the frequency of each character in the string.
      int charCount[26] = {0};
      for (int i = 0; s[i] != '\0'; i++) {
            charCount[s[i] - 'a']++;
      }

      // Count the number of characters with odd frequencies.
      int oddCount = 0;
      for (int i = 0; i < 26; i++) {
            if (charCount[i] % 2 != 0) {
                  oddCount++;
            }
      }

      // We can construct k palindromes if the odd frequencies are less than or equal to k.
      return oddCount <= k;
}
