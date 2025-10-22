//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1625

//? ⌚ Time complexity ➺ O(n^2 d^2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {

      /**
       * Finds the lexicographically smallest string that can be obtained by
       * performing two operations on the string s:
       * 1. Add 'a' to all digits at odd/even indices any number of times.
       * 2. Rotate the string by 'b' positions any number of times.
       * 
       * @param s Original string representing digits.
       * @param a Increment to add to digits at specified indices.
       * @param b Step size for rotation.
       * @return Lexicographically smallest string possible after operations.
       */
      public String findLexSmallestString(String s, int a, int b) {
            int n = s.length();
            String res = s; // Initialize result with original string
            s = s + s; // Duplicate string to enable easy rotation by substring
            int g = gcd(b, n); // Compute greatest common divisor for rotation step optimization

            // Iterate over all rotation start points by step size g
            for (int i = 0; i < n; i += g) {
                  char[] t = s.substring(i, i + n).toCharArray(); // Get rotated substring as char array

                  add(t, n, a, 1); // Add multiples of 'a' to digits at odd indices to minimize string
                  if (b % 2 != 0) {
                        add(t, n, a, 0); // If b is odd, add multiples of 'a' to digits at even indices
                  }

                  String tStr = new String(t);
                  // Update result if new candidate string is lex smaller
                  if (tStr.compareTo(res) < 0) {
                        res = tStr;
                  }
            }
            return res;
      }

      /**
       * Adds multiples of 'a' (0 to 9 times) to digits at positions starting from
       * 'start' index with step 2
       * to produce lexicographically smallest possible digits after addition modulo
       * 10.
       *
       * @param t     Char array representing digits.
       * @param n     Length of the original string.
       * @param a     Increment value to add.
       * @param start Starting index (0 for even, 1 for odd).
       */
      public void add(char[] t, int n, int a, int start) {
            int minVal = 10; // Track minimal digit found
            int times = 0; // How many times to add 'a' to reach minimal digit

            // Find minimum digit achievable by adding multiples of a mod 10
            for (int i = 0; i < 10; i++) {
                  int added = ((t[start] - '0') + i * a) % 10;
                  if (added < minVal) {
                        minVal = added;
                        times = i;
                  }
            }

            // Add 'times' multiples of 'a' mod 10 to every digit at positions start,
            // start+2, ...
            for (int i = start; i < n; i += 2) {
                  t[i] = (char) ('0' + (((t[i] - '0') + times * a) % 10));
            }
      }

      /**
       * Computes the greatest common divisor (gcd) of two integers.
       *
       * @param num1 First integer.
       * @param num2 Second integer.
       * @return gcd of num1 and num2.
       */
      public int gcd(int num1, int num2) {
            while (num2 != 0) {
                  int temp = num1;
                  num1 = num2;
                  num2 = temp % num2;
            }
            return num1;
      }
}
