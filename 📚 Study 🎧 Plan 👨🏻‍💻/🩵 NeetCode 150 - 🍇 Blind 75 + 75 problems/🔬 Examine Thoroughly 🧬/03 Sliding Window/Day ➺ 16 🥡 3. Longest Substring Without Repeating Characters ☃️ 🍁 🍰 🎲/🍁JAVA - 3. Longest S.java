//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(m) 👉🏻 m = maxLength

import java.util.HashSet;

class Solution {
      public int lengthOfLongestSubstring(String s) {
            // HashSet to store unique characters
            HashSet<Character> charSet = new HashSet<>();
            int left = 0;  // Left pointer of the sliding window
            int maxLength = 0;  // Maximum length of substring

            // Iterate through the string with a right pointer
            for (int right = 0; right < s.length(); right++) {
                  // If character is already in set, shrink the window from the left
                  while (charSet.contains(s.charAt(right))) {
                        charSet.remove(s.charAt(left));
                        left++; // Move left pointer to remove duplicates
                  }

                  // Add current character to the set
                  charSet.add(s.charAt(right));

                  // Update maxLength with the current window size
                  maxLength = Math.max(maxLength, right - left + 1);
            }

            return maxLength;
      }
}
