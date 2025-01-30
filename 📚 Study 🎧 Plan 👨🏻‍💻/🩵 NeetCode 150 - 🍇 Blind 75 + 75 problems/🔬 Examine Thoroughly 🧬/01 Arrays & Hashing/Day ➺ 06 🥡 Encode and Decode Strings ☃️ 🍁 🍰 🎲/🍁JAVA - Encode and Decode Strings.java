//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 271

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(strs)

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {

      public String encode(List<String> strs) {
            // Initialize a StringBuilder for efficient string concatenation
            StringBuilder res = new StringBuilder();
            // Loop through each string in the list
            for (String s : strs) {
                  // Append the length of the string, a delimiter '#', and the string itself
                  res.append(s.length()).append("#").append(s);
            }
            // Return the fully encoded string
            return res.toString();
      }

      public List<String> decode(String s) {
            // Initialize a list to store the decoded strings
            List<String> res = new ArrayList<>();
            // Pointer to traverse the encoded string
            int i = 0;

            while (i < s.length()) {
                  // Find the position of the next delimiter '#'
                  int j = i;
                  while (s.charAt(j) != '#') {
                        j++;
                  }
                  // Extract the length of the next string
                  int length = Integer.parseInt(s.substring(i, j));

                  // Move the pointer past the delimiter
                  i = j + 1;

                  // Extract the actual string using the length
                  String str = s.substring(i, i + length);
                  res.add(str);

                  // Move the pointer to the next encoded part
                  i = i + length;
            }
            // Return the decoded list of strings
            return res;
      }
}
