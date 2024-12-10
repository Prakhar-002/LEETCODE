//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2981

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n ^ 2)

import java.util.HashMap;

class Solution {
      public int maximumLength(String s) {
            // Create a HashMap to store the count of substrings.
            HashMap<String, Integer> subStringCount = new HashMap<>();

            // Initialize a variable to store the maximum length of a substring
            // that appears at least 3 times.
            int maxLen = -1;

            // Iterate over each character in the input string.
            for (int i = 0; i < s.length(); i++) {
                  int index = i;

                  // Generate all substrings starting at index `i` with consecutive identical characters.
                  while (index < s.length() && s.charAt(index) == s.charAt(i)) {
                        // Extract the substring from `i` to `index + 1`.
                        String sub = s.substring(i, index + 1);
                        index++;

                        // Increment the count of the substring in the HashMap.
                        subStringCount.put(sub, subStringCount.getOrDefault(sub, 0) + 1);

                        // If the substring appears at least 3 times and has a length greater than
                        // the current maximum, update the maximum length.
                        if (subStringCount.get(sub) >= 3 && sub.length() > maxLen) {
                              maxLen = sub.length();
                        }
                  }
            }

            // Return the maximum length found, or -1 if no such substring exists.
            return maxLen;
      }
}

