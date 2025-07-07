//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 383

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(ransomNote)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      bool canConstruct(string ransomNote, string magazine) {
            int freq[26] = {0}; // Frequency of each letter in magazine

            // Count each character in magazine
            for (char ch : magazine) {
                  freq[ch - 'a']++;
            }

            // Check ransomNote character availability
            for (char ch : ransomNote) {
                  if (freq[ch - 'a'] == 0) {
                        return false; // Required char not found
                  }
                  freq[ch - 'a']--; // Use one occurrence
            }

            return true; // All letters are available
      }
};
