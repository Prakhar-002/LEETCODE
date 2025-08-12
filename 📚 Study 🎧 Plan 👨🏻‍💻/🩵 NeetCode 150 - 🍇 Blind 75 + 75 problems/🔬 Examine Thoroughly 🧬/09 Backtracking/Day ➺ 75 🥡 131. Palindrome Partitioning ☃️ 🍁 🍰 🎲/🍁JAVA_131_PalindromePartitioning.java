//! https://github.com/Prakhar-002/LEETCODE

//Todo 📌 QUESTION NUMBER 131 

import java.util.*;

class Solution {
      public List<List<String>> partition(String s) {
            List<List<String>> result = new ArrayList<>(); // Stores all partitions
            List<String> part = new ArrayList<>(); // Current partition path

            // Start DFS from index 0
            dfs(0, s, part, result);

            return result;
      }

      private void dfs(int i, String s, List<String> part, List<List<String>> result) {
            // ----------------------------------------------------------
            // Base Case:
            // If i has reached the end of the string, add current partition to results
            // ----------------------------------------------------------
            if (i >= s.length()) {
                  result.add(new ArrayList<>(part)); // Add a copy of current list
                  return;
            }

            // ----------------------------------------------------------
            // Try all possible cuts starting at index i
            // ----------------------------------------------------------
            for (int j = i; j < s.length(); j++) {
                  if (isPali(s, i, j)) {
                        part.add(s.substring(i, j + 1)); // Choose substring
                        dfs(j + 1, s, part, result); // Explore further
                        part.remove(part.size() - 1); // Backtrack
                  }
            }
      }

      private boolean isPali(String s, int l, int r) {
            // Two-pointer check for palindrome
            while (l < r) {
                  if (s.charAt(l) != s.charAt(r))
                        return false;
                  l++;
                  r--;
            }
            return true;
      }
}
