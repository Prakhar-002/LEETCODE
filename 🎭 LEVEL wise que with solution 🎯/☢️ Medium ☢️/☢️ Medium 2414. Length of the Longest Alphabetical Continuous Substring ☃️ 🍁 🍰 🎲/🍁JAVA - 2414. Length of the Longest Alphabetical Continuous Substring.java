//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2414

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int longestContinuousSubstring(String s) {
            // If the string is null or empty, no substring can be formed.
            if (s == null || s.length() == 0) {
                  return 0;
            }

            // `total` stores the maximum length found so far, initialized to 1.
            int total = 1;
            // `count` tracks the length of the current continuous substring.
            int count = 1;

            // Iterate from the second character to the end of the string.
            for (int i = 1; i < s.length(); i++) {
                  // Check if the current character is the next letter after the previous one.
                  // In Java, `char` can be treated as an integer type for this comparison.
                  if (s.charAt(i) == s.charAt(i - 1) + 1) {
                        // If the streak continues, increment the current count.
                        count++;
                        // Update the overall maximum length if needed.
                        total = Math.max(count, total);
                  } else {
                        // If the streak is broken, reset the current count to 1.
                        count = 1;
                  }
            }

            // Return the maximum length found.
            return total;
      }
}
