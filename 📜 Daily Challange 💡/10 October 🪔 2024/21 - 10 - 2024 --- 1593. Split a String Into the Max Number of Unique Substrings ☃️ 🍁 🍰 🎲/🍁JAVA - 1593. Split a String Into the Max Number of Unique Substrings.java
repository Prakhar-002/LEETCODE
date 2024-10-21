//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1593

//? ⌚ Time complexity ➺ O(2 ^ n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.HashSet;
import java.util.Set;

class Solution {
      // Helper function to perform depth-first search (DFS) to find the maximum
      // number of unique substrings we can split the string 's' into.
      private int maxUniqueFinderDfs(int i, Set<String> curSet, String s) {
            // Variable to track the maximum number of unique substrings found
            int uniqueSubString = 0;

            // Base case: if 'i' reaches the end of the string, return 0
            if (i == s.length()) {
                  return 0;
            }

            // Loop through the string starting from index 'i'
            for (int j = i; j < s.length(); j++) {
                  // Generate the substring from index 'i' to 'j'
                  String subString = s.substring(i, j + 1);

                  // If the substring is already in the set, skip it
                  if (curSet.contains(subString)) {
                        continue;
                  }

                  // Add the substring to the set of unique substrings
                  curSet.add(subString);

                  // Recursively call the function for the next index (j + 1)
                  // and update the maximum unique substring count
                  uniqueSubString = Math.max(
                              uniqueSubString,
                              1 + maxUniqueFinderDfs(j + 1, curSet, s));

                  // Backtrack: remove the substring from the set
                  curSet.remove(subString);
            }

            // Return the maximum number of unique substrings found
            return uniqueSubString;
      }

      // Main function to initiate the DFS process
      public int maxUniqueSplit(String s) {
            // Start DFS from index 0 with an empty set of substrings
            return maxUniqueFinderDfs(0, new HashSet<>(), s);
      }
}
