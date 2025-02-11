//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1910

//? ⌚ Time complexity ➺ O(n * m)  👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n + m) 👉🏻  m = len(part)

class Solution {
      public String removeOccurrences(String s, String part) {
            // Get the length of the substring to be removed
            int partLen = part.length();

            // Use a StringBuilder as a sb
            StringBuilder sb = new StringBuilder();

            // Iterate through each character in the string
            for (char ch : s.toCharArray()) {
                  sb.append(ch);  // Push character to sb

                  // Check if the last 'partLen' characters form the substring 'part'
                  if (sb.length() >= partLen && checkMatch(sb, part, partLen)) {
                        // Remove 'partLen' characters if a match is found
                        sb.setLength(sb.length() - partLen);
                  }
            }

            // Convert the sb back to a string and return
            return sb.toString();
      }

      private boolean checkMatch(StringBuilder sb, String part, int partLen) {
            // Check if the last 'partLen' characters match 'part'
            return sb.substring(sb.length() - partLen).equals(part);
      }
}
