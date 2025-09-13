//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3541

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(26)

class Solution {
      public int maxFreqSum(String s) {
            int freq[] = new int[26];      // Tracks frequency of each lowercase letter ('a'-'z')

            // Count occurrences of each character
            for (char ch : s.toCharArray()) {
                  freq[ch - 'a'] += 1;
            }

            // Find the maximum among the vowels
            int vowels = Math.max(
                  freq['a' - 'a'],
                  Math.max(
                        freq['e' - 'a'],
                        Math.max(
                              freq['i' - 'a'],
                              Math.max(
                                    freq['o' - 'a'],
                                    freq['u' - 'a']
                              )
                        )
                  )
            );

            // Set vowel frequencies to zero so they're not counted for consonant max
            freq['a' - 'a'] = 0;
            freq['e' - 'a'] = 0;
            freq['i' - 'a'] = 0;
            freq['o' - 'a'] = 0;
            freq['u' - 'a'] = 0;

            int consonant = 0;             // Store max frequency among non-vowel letters

            // Find max frequency from consonants and other characters
            for (int f : freq) {
                  consonant = Math.max(consonant, f);
            }

            // Add max-vowel frequency to max-consonant frequency for result
            return consonant + vowels;
      }
}
