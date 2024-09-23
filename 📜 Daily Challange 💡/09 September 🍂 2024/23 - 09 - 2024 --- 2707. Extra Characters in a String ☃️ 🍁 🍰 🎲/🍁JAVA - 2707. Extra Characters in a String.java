//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2707

//? ⌚ Time complexity ➺ O(n ^ 3) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      private Set<String> words;
      private Map<Integer, Integer> dp;
      private String s;

      public int minExtraChar(String s, String[] dictionary) {
            this.s = s;
            // A set created from the `dictionary`
            // for faster membership tests to check if a substring is a valid word
            this.words = new HashSet<>(Arrays.asList(dictionary));
            // HashMap stores the results of subProblems
            this.dp = new HashMap<>();
            dp.put(s.length(), 0);

            // execution starts with `dfs(0)`
            return dfs(0);
      }

      // function computes the minimal number of additional
      // characters needed starting from index `i`
      private int dfs(int i) {
            // If `i` is already in `dp`
            // it means we have computed the needed extra chars for substring
            // `s.substring(i)`
            if (dp.containsKey(i)) {
                  // return this stored value
                  return dp.get(i);
            }

            // function considers two cases for each position `i`

            // Skipping the current character: `(1 + dfs(i + 1))`
            // assumes that if the char at index `i` is not part of any valid word
            // skip it, hence adding 1 to the count and moving forward
            int extraChars = 1 + dfs(i + 1); // skip cur char

            // Form words using the current character and extend to subsequent characters
            for (int j = i; j < s.length(); j++) {
                  // If substring `s.substring(i, j + 1)` from the current index `i`
                  // to another index `j` is in the dictionary (`words`)
                  if (words.contains(s.substring(i, j + 1))) {
                        // call recursively to solve for the remaining string `s.substring(j + 1)`
                        extraChars = Math.min(extraChars, dfs(j + 1));
                  }
            }

            // `dp.put(i, extraChars)` is updated
            dp.put(i, extraChars);
            // return the result
            return extraChars;
      }
}
