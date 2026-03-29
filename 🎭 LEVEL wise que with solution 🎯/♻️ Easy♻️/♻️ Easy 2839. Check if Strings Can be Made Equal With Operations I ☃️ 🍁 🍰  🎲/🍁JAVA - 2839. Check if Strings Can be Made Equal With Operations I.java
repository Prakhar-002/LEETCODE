//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2839

//? ⌚ Time complexity ➺ O(1) 👉🏻  fixed 4-character strings, constant comparisons

//? 🧺 Space complexity ➺ O(1) 

class Solution {
      public boolean canBeEqual(String s1, String s2) {
            // Odd-indexed positions (0, 2) can be swapped independently
            boolean evenMatch = (s1.charAt(0) == s2.charAt(0) && s1.charAt(2) == s2.charAt(2))
                        || (s1.charAt(0) == s2.charAt(2) && s1.charAt(2) == s2.charAt(0));

            // Odd-indexed positions (1, 3) can be swapped independently
            boolean oddMatch = (s1.charAt(1) == s2.charAt(1) && s1.charAt(3) == s2.charAt(3))
                        || (s1.charAt(1) == s2.charAt(3) && s1.charAt(3) == s2.charAt(1));

            return evenMatch && oddMatch;
      }
}