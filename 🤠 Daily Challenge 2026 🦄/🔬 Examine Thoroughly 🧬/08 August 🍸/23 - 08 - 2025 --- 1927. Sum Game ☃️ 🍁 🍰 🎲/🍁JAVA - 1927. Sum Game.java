//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3622

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public boolean sumGame(String num) {
            int leftSum = 0;
            int rightSum = 0;
            int leftQue = 0;
            int rightQue = 0;
            int n = num.length();

            // Count sums and '?' occurrences in the left and right halves
            for (int i = 0; i < n; i++) {
                  char ch = num.charAt(i);
                  if (i < n / 2) {
                        if (ch == '?') {
                              leftQue++;
                        } else {
                              leftSum += ch - '0';
                        }
                  } else {
                        if (ch == '?') {
                              rightQue++;
                        } else {
                              rightSum += ch - '0';
                        }
                  }
            }

            // Alice wins if total number of '?' is odd
            if ((leftQue + rightQue) % 2 == 1) {
                  return true;
            }

            // Bob can only ensure equality if the difference in sums balances the '?' counts
            int left = 2 * leftSum + 9 * leftQue;
            int right = 2 * rightSum + 9 * rightQue;

            return left != right;
      }
}