//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1790

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s1 + s2)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public boolean areAlmostEqual(String s1, String s2) {
            // If lengths differ, swapping won't make them equal
            if (s1.length() != s2.length()) {
                  return false;
            }

            int first = -1;  // Index of first mismatch
            int sec = -1;    // Index of second mismatch
            int diff_count = 0;  // Count of differing characters

            // Iterate through the strings
            for (int i = 0; i < s1.length(); i++) {
                  if (s1.charAt(i) != s2.charAt(i)) {  
                        diff_count++;  // Increment mismatch count

                        if (diff_count == 1) {
                              first = i;  // Store first mismatch index
                        } else if (diff_count == 2) {
                              sec = i;  // Store second mismatch index
                        } else {
                              return false;  // More than 2 mismatches → can't swap to match
                        }
                  }
            }

            // If no difference, they are already equal
            // If exactly two differences, check if swapping makes them equal
            return diff_count == 0 || (diff_count == 2 && s1.charAt(first) == s2.charAt(sec) && s1.charAt(sec) == s2.charAt(first));
      }
}
