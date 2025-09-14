//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 966

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(wordlist + queries)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      Set<String> words_perfect; // For exact match lookups
      Map<String, String> words_cap; // Lowercased word map for case-insensitive matches
      Map<String, String> words_vow; // Devoweled, lowercased word map for vowel-error matches

      public String[] spellchecker(String[] wordlist, String[] queries) {
            // Initialize sets and maps for the three matching rules
            words_perfect = new HashSet();
            words_cap = new HashMap();
            words_vow = new HashMap();

            for (String word : wordlist) {
                  words_perfect.add(word); // Add word for exact-matching
                  String wordlow = word.toLowerCase();
                  // Store first occurrence for case-insensitive original preservation
                  words_cap.putIfAbsent(wordlow, word);
                  // Store first occurrence for vowel-error match
                  String wordlowDV = devowel(wordlow);
                  words_vow.putIfAbsent(wordlowDV, word);
            }

            String[] ans = new String[queries.length];
            int t = 0;
            for (String query : queries)
                  ans[t++] = solve(query); // Solve each query using defined rules
            return ans;
      }

      // Decide the best match for a query, applying rules in order
      public String solve(String query) {
            // 1. Exact match
            if (words_perfect.contains(query))
                  return query;

            // 2. Case-insensitive match
            String queryL = query.toLowerCase();
            if (words_cap.containsKey(queryL))
                  return words_cap.get(queryL);

            // 3. Vowel-error match
            String queryLV = devowel(queryL);
            if (words_vow.containsKey(queryLV))
                  return words_vow.get(queryLV);

            // 4. No match found
            return "";
      }

      // Replace vowels with '*' for flexible matching
      public String devowel(String word) {
            StringBuilder ans = new StringBuilder();
            for (char c : word.toCharArray())
                  ans.append(isVowel(c) ? '*' : c);
            return ans.toString();
      }

      // Check if character is a vowel
      public boolean isVowel(char c) {
            return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
      }
}
