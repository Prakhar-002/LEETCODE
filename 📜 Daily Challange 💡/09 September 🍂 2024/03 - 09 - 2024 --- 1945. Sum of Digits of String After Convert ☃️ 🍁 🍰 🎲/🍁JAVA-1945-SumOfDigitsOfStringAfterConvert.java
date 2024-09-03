//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1945

//? ⌚ Time complexity ➺ O(n * k) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public int getLucky(String s, int k) {
            // This will store the numeric conversion of each character from the string `s`
            StringBuilder number = new StringBuilder();
            for (char ch : s.toCharArray()) {
                  // expression converts a lowercase English letter to its position in the alphabet: 
                  // 'a' becomes 1, 'b' becomes 2, ..., 'z' becomes 26
                  number.append(ch - 'a' + 1);
            }

            // Summation of digits up to `k` times
            while (k > 0) {
                  // This variable will store the sum of the digits of `numberStr` during each iteration
                  int tempNum = 0;
                  for (char ch : number.toString().toCharArray()) {
                        // converts each character to an integer, and adds it to `tempNum`
                        tempNum += ch - '0'; 
                  }

                  //  `numberStr` is updated to be the string representation of `tempNum`
                  number = new StringBuilder(String.valueOf(tempNum));
                  // The loop decreases `k` by 1 with each iteration until `k` equals 0
                  k--;
            }

            // converts `numberStr` back to an integer and return
            return Integer.parseInt(number.toString()); 
      }
}