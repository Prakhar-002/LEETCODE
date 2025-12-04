//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 424

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

import java.util.HashMap;

class Solution {
      public int characterReplacement(String s, int k) {
            // HashMap to store character frequencies in the current window
            HashMap<Character, Integer> charCount = new HashMap<>();
            int left = 0; // Left pointer of the sliding window
            int maxFreq = 0; // Maximum frequency of a single character in the window
            int longestString = 0; // Stores the longest valid substring length

            // Iterate through the string with a right pointer
            for (int right = 0; right < s.length(); right++) {
                  // Update the frequency count of the current character
                  charCount.put(s.charAt(right), charCount.getOrDefault(s.charAt(right), 0) + 1);

                  // Update maxFreq with the highest occurring character in the window
                  maxFreq = Math.max(maxFreq, charCount.get(s.charAt(right)));

                  // If the window size minus the highest frequency character is greater than k, shrink the window
                  while ((right - left + 1) - maxFreq > k) {
                        charCount.put(s.charAt(left), charCount.get(s.charAt(left)) - 1);
                        left++; // Move the left pointer forward
                  }

                  // Update longestString with the current valid window size
                  longestString = Math.max(longestString, right - left + 1);
            }

            return longestString;
      }
}