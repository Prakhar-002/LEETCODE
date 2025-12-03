//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L2.4 Q1

//? ⌚ Time complexity ➺ O(n * sqrt(n)) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1) 

public class Solution {
      public boolean repeatedSubstringPattern(String s) {
            int n = s.length();  // Total length of the string

            // Try all possible substring lengths from n/2 down to 1
            for (int len = n / 2; len >= 1; len--) {
                  // Length of repeating substring must divide n exactly
                  if (n % len == 0) {
                        int times = n / len;                 // How many repeats needed
                        String pattern = s.substring(0, len); // Candidate substring

                        // Build the repeated string
                        StringBuilder sb = new StringBuilder();
                        for (int i = 0; i < times; i++) {
                              sb.append(pattern);
                        }

                        // If built string equals original, it's valid
                        if (sb.toString().equals(s)) {
                              return true;
                        }
                  }
            }

            // No repeating substring pattern found
            return false;
      }
}
