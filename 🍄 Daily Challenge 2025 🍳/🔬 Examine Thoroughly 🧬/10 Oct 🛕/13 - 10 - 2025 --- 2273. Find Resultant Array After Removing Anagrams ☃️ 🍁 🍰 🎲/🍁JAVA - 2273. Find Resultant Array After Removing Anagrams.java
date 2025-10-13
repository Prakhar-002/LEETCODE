//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2273

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(words)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public List<String> removeAnagrams(String[] words) {
            List<String> result = new ArrayList<>();
            // Always add the first word — it has no previous comparison
            result.add(words[0]);

            // Loop through remaining words and compare each with its predecessor
            for (int i = 1; i < words.length; i++) {
                  if (!isAnagram(words[i - 1], words[i])) {
                        result.add(words[i]);
                  }
            }
            return result;
      }

      // Helper method to check if two strings are anagrams
      private boolean isAnagram(String w1, String w2) {
            if (w1.length() != w2.length()) return false;

            int[] freq = new int[26];
            for (char c : w1.toCharArray()) freq[c - 'a']++;
            for (char c : w2.toCharArray()) freq[c - 'a']--;

            for (int count : freq)
                  if (count != 0) return false;

            return true;
      }
}
