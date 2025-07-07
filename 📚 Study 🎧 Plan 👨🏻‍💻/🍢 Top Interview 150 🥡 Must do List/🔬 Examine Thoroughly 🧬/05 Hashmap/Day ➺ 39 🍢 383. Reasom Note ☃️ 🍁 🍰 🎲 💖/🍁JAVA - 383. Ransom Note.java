//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 383

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(ransomNote)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public boolean canConstruct(String ransomNote, String magazine) {
            int[] freq = new int[26]; // To store letter counts for magazine

            // Count characters in magazine
            for (char ch : magazine.toCharArray()) {
                  freq[ch - 'a']++;
            }

            // Check if each char in ransomNote can be constructed
            for (char ch : ransomNote.toCharArray()) {
                  if (freq[ch - 'a'] == 0) {
                        return false; // Not enough of this char
                  }
                  freq[ch - 'a']--; // Use one occurrence
            }

            return true; // All characters matched
      }
}
