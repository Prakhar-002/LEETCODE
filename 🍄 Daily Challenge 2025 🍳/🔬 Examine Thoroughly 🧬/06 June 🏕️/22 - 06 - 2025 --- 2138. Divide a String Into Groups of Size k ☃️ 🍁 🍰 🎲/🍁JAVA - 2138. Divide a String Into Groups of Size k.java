//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2139

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public String[] divideString(String s, int k, char fill) {
            int n = s.length();

            // If the string length is not a multiple of k, pad it with the fill character
            int remainder = n % k;
            if (remainder != 0) {
                  int padding = k - remainder;
                  StringBuilder sb = new StringBuilder(s);
                  for (int i = 0; i < padding; i++) {
                        sb.append(fill);
                  }
                  s = sb.toString(); // Update s with the padded string
            }

            int groupCount = s.length() / k; // Number of groups
            String[] result = new String[groupCount]; // Final array to return

            // Slice the string into k-length chunks and store in result[]
            for (int i = 0; i < s.length(); i += k) {
                  result[i / k] = s.substring(i, i + k);
            }

            return result;
      }
}
