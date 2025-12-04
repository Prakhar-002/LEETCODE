//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1358

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

import java.util.HashMap;

class Solution {
      public int numberOfSubstrings(String s) {
            // HashMap to store the frequency of 'a', 'b', and 'c'
            HashMap<Character, Integer> abcCount = new HashMap<>();
            int substring = 0; // Counter to store the number of valid substrings
            int l = 0; // Left pointer for the sliding window

            // Iterate over the string with the right pointer `r`
            for (int r = 0; r < s.length(); r++) {
                  abcCount.put(s.charAt(r), abcCount.getOrDefault(s.charAt(r), 0) + 1);

                  // When all three characters ('a', 'b', 'c') are in the window
                  while (abcCount.size() == 3) {
                        // Every substring starting from index `l` to `r`
                        // contributes to (s.length() - r) valid substrings
                        substring += (s.length() - r);

                        // Shrink the window from the left
                        abcCount.put(s.charAt(l), abcCount.get(s.charAt(l)) - 1);

                        // If the character count becomes zero, remove it from the map
                        if (abcCount.get(s.charAt(l)) == 0) {
                              abcCount.remove(s.charAt(l));
                        }

                        l++; // Move the left pointer forward
                  }
            }

            return substring; // Return the total count of valid substrings
      }
}

// !---------------------------------------------------------------------------------

// ? ⌚ Time complexity ➺ O(n) 👉🏻 n = len(s)

// ? 🧺 Space complexity ➺ O(1)

class Solution {
      public int numberOfSubstrings(String s) {
            // Store the latest indices of 'a', 'b', and 'c'
            int a = -1, b = -1, c = -1;
            int count = 0; // Total count of valid substrings

            // Iterate over the string
            for (int i = 0; i < s.length(); i++) {
                  // Update the most recent index for the current character
                  char ch = s.charAt(i);
                  if (ch == 'a') {
                        a = i;
                  } else if (ch == 'b') {
                        b = i;
                  } else if (ch == 'c') {
                        c = i;
                  }

                  // If all three characters have been seen at least once
                  if (a != -1 && b != -1 && c != -1) {
                        // Find the leftmost occurrence among 'a', 'b', and 'c'
                        int minIndex = Math.min(a, Math.min(b, c));

                        // Every substring starting from index 0 to `minIndex` is valid
                        count += (minIndex + 1);
                  }
            }

            return count; // Return the total count of valid substrings
      }
}