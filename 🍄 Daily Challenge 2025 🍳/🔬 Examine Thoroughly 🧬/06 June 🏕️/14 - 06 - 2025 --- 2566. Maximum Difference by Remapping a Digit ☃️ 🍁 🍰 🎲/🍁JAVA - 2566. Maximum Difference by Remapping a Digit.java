//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2566

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = log(num)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public int minMaxDifference(int num) {
            // Convert the number to string
            String s = Integer.toString(num);
            String maxStr = s;
            String minStr = s;

            int pos = 0;

            // Find the first digit that is not '9'
            while (pos < s.length() && s.charAt(pos) == '9') {
                  pos++;
            }

            // Replace all occurrences of that digit with '9' to get maximum number
            if (pos < s.length()) {
                  maxStr = s.replace(s.charAt(pos), '9');
            }

            // Replace all occurrences of the first digit with '0' to get minimum number
            minStr = s.replace(s.charAt(0), '0');

            // Convert both strings back to integers and return the difference
            return Integer.parseInt(maxStr) - Integer.parseInt(minStr);
      }
}
