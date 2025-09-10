//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1733

//? ⌚ Time complexity ➺ O(m * n)  👉🏻  n = given

//? 🧺 Space complexity ➺ O(m + n) 👉🏻  m = lang

import java.util.*;

class Solution {
      public int minimumTeachings(int n, int[][] languages, int[][] friendships) {
            Set<Integer> sadUsers = new HashSet<>(); // Users who cannot communicate with friends

            // Identify pairs of friends who cannot talk due to language mismatch
            for (int[] friendship : friendships) {
                  int u = friendship[0] - 1; // Adjust to zero-based indexing
                  int v = friendship[1] - 1;

                  Set<Integer> langSet = new HashSet<>(); // Languages user u knows
                  for (int lang : languages[u]) {
                        langSet.add(lang);
                  }

                  boolean canTalk = false; // Flag if they share a language
                  for (int lang : languages[v]) {
                        if (langSet.contains(lang)) {
                              canTalk = true; // They can communicate
                              break;
                        }
                  }
                  // If no common language, mark both as sad
                  if (!canTalk) {
                        sadUsers.add(u);
                        sadUsers.add(v);
                  }
            }

            Map<Integer, Integer> languageCount = new HashMap<>(); // Counts of sad users per language
            int mostKnownLang = 0; // Max count of users who know a language

            // Count occurrences of each language among sad users
            for (int user : sadUsers) {
                  for (int lang : languages[user]) {
                        int count = languageCount.getOrDefault(lang, 0) + 1;
                        languageCount.put(lang, count);
                        mostKnownLang = Math.max(mostKnownLang, count);
                  }
            }

            // Return minimum teachings needed
            return sadUsers.size() - mostKnownLang;
      }
}
