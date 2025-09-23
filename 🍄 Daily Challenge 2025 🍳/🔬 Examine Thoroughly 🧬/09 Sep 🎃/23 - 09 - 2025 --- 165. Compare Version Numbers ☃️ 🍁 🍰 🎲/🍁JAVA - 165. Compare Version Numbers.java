//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 165

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      /*
       * Compares two version numbers represented as strings,
       * returning negative if version1 < version2,
       * positive if version1 > version2,
       * or zero if equal.
       * Time complexity: O(n) where n is the max number of version segments.
       */
      public int compareVersion(String version1, String version2) {
            // Split both version strings by '.' to get arrays of segments
            String s1[] = version1.split("\\.");
            String s2[] = version2.split("\\.");

            // Compute the maximum number of segments to compare
            int maxLength = Math.max(s1.length, s2.length);

            // Compare segments one by one
            for (int i = 0; i < maxLength; i++) {
                  // If segment is missing, treat as 0
                  Integer v1 = i < s1.length ? Integer.parseInt(s1[i]) : 0;
                  Integer v2 = i < s2.length ? Integer.parseInt(s2[i]) : 0;

                  // Compare current segments
                  int compare = v1.compareTo(v2);
                  if (compare != 0) {
                        // Return at first difference
                        return compare;
                  }
            }

            // All segments are equal
            return 0;
      }
}
