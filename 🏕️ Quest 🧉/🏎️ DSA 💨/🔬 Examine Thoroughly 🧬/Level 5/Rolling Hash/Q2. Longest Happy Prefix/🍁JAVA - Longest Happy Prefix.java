//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L5.3 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      // Helper method to build the LPS (Longest Prefix Suffix) array for string s
      private int[] findLps(String s) {
            int n = s.length();
            int[] lps = new int[n]; // lps[i] = length of longest proper prefix which is also suffix of s[0..i]

            int length = 0; // length of current longest prefix-suffix
            int i = 1; // we start from index 1, because lps[0] is always 0

            while (i < n) {
                  if (s.charAt(i) == s.charAt(length)) {
                        // Characters match: we can extend current prefix-suffix
                        length++;
                        lps[i] = length;
                        i++;
                  } else {
                        // Mismatch after at least one matching character
                        if (length != 0) {
                              // Fall back to the previous longest prefix-suffix for this length
                              // This avoids re-checking from the beginning (KMP optimization)
                              length = lps[length - 1];
                        } else {
                              // No prefix-suffix to fall back to, so lps[i] stays 0
                              i++;
                        }
                  }
            }
            return lps;
      }

      public String longestPrefix(String s) {
            // Build the LPS array for the whole string
            int[] prefixLps = findLps(s);

            // The last value in LPS is the length of the longest prefix
            // that is also a suffix for the entire string
            int happyPrefixLen = prefixLps[s.length() - 1];

            // Return that prefix substring
            return s.substring(0, happyPrefixLen);
      }
}
