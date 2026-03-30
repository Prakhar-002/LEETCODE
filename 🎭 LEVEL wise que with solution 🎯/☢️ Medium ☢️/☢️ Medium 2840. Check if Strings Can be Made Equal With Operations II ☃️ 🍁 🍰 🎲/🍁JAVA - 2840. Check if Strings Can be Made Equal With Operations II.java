//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2840

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s1)

//? 🧺 Space complexity ➺ O(26)

class Solution {
      public boolean checkStrings(String s1, String s2) {
            // even[i] tracks net frequency of char i at even positions
            // odd[i] tracks net frequency of char i at odd positions
            int[] even = new int[26];
            int[] odd = new int[26];

            for (int i = 0; i < s1.length(); i++) {
                  if (i % 2 == 0) {
                        // Add s1 char, subtract s2 char at even index
                        even[s1.charAt(i) - 'a']++;
                        even[s2.charAt(i) - 'a']--;
                  } else {
                        // Add s1 char, subtract s2 char at odd index
                        odd[s1.charAt(i) - 'a']++;
                        odd[s2.charAt(i) - 'a']--;
                  }
            }

            // All frequencies must cancel out for a valid rearrangement
            for (int i = 0; i < 26; i++) {
                  if (even[i] != 0 || odd[i] != 0)
                        return false;
            }

            return true;
      }
}