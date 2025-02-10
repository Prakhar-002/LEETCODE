//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 76

//? ⌚ Time complexity ➺ O(n)  👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(m) 👉🏻  m = Unique Char in s & t

import java.util.HashMap;

class Solution {
      public String minWindow(String s, String t) {
            // If t is empty, return an empty string
            if (t.isEmpty()) {
                  return "";
            }

            // Count frequency of characters in t
            HashMap<Character, Integer> countT = new HashMap<>();
            HashMap<Character, Integer> window = new HashMap<>();

            for (char ch : t.toCharArray()) {
                  countT.put(ch, countT.getOrDefault(ch, 0) + 1);
            }

            int have = 0, need = countT.size();
            int[] res = {-1, -1};  // Store the indices of the smallest window
            int resLen = Integer.MAX_VALUE;  // Track the length of the smallest window
            int l = 0; // Left pointer of sliding window

            // Iterate with right pointer `r`
            for (int r = 0; r < s.length(); r++) {
                  char ch = s.charAt(r);
                  window.put(ch, window.getOrDefault(ch, 0) + 1);

                  // If character matches the required count
                  if (countT.containsKey(ch) && window.get(ch).intValue() == countT.get(ch).intValue()) {
                        have++;
                  }

                  // Shrink window while valid
                  while (have == need) {
                        // Update result if the current window is smaller
                        if ((r - l + 1) < resLen) {
                              res[0] = l;
                              res[1] = r;
                              resLen = r - l + 1;
                        }

                        // Remove leftmost character
                        char leftChar = s.charAt(l);
                        window.put(leftChar, window.get(leftChar) - 1);

                        // If removing breaks a needed character count
                        if (countT.containsKey(leftChar) && window.get(leftChar) < countT.get(leftChar)) {
                              have--;
                        }

                        l++; // Move left pointer
                  }
            }

            // Return the smallest window substring or empty string if not found
            return resLen == Integer.MAX_VALUE ? "" : s.substring(res[0], res[1] + 1);
      }
}
