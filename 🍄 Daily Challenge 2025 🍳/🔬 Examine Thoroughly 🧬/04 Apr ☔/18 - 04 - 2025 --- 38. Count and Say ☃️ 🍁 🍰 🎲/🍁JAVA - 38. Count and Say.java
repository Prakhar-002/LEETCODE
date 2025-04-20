//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 38

//? ⌚ Time complexity ➺ O(n * 2 ^ n)

//? 🧺 Space complexity ➺ O(2 ^ n)

class Solution {
      // Helper method to generate the next term of the Count and Say sequence
      public String cntStr(String str) {
            StringBuilder nextStr = new StringBuilder(); // To hold the next sequence
            int left = 0, right = 0; // Two pointers for grouping identical digits

            // Traverse through the current sequence
            while (right < str.length()) {

                  // Expand right pointer while characters at left and right are equal
                  while (right < str.length() && str.charAt(left) == str.charAt(right)) {
                        right++;
                  }

                  // Append the count of digits (right - left)
                  nextStr.append(Integer.toString(right - left));

                  // Append the actual digit
                  nextStr.append(str.charAt(left));

                  // Move left to the next group
                  left = right;
            }

            return nextStr.toString(); // Return the next sequence string
      }

      // Main method to get the nth term in the Count and Say sequence
      public String countAndSay(int n) {
            String str = "1"; // The first term in the sequence

            // Generate the sequence iteratively up to n
            while (n-- > 1) {
                  str = cntStr(str); // Use helper to compute next term
            }

            return str; // Return the nth term
      }
}
