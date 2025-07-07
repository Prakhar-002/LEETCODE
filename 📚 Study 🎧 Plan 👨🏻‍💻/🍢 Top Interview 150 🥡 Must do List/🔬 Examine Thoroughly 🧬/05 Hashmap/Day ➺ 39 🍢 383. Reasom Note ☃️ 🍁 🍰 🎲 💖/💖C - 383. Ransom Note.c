//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 383

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(ransomNote)

//? 🧺 Space complexity ➺ O(1)

#include <stdbool.h>
#include <string.h>

bool canConstruct(char* ransomNote, char* magazine) {
      int freq[26] = {0};  // Array to store frequency of each letter in magazine

      // Count each character in magazine
      for (int i = 0; magazine[i] != '\0'; i++) {
            freq[magazine[i] - 'a']++;
      }

      // Check if ransomNote can be formed
      for (int i = 0; ransomNote[i] != '\0'; i++) {
            if (freq[ransomNote[i] - 'a'] == 0) {
                  return false;  // Not enough characters in magazine
            }
            freq[ransomNote[i] - 'a']--;  // Use one occurrence
      }

      return true;  // All characters matched
}
