//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3723

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public String maxSumOfSquares(int num, int sum) {

            // If only one digit is allowed and sum > 9,
            // no valid single-digit number can be formed.
            if (num == 1 && sum > 9) {
                  return "";
            }

            // If only one digit is allowed and sum <= 9,
            // return the sum as a string.
            if (num == 1 && sum < 10) {
                  return String.valueOf(sum);
            }

            // Initialize the answer with num zeros.
            char[] ans = new char[num];
            Arrays.fill(ans, '0');

            // Fill digits from left to right to maximize the number.
            for (int i = 0; i < num; i++) {

                  // If the remaining sum is greater than 9,
                  // place the largest possible digit, 9.
                  if (sum > 9) {
                        ans[i] = '9';
                        sum -= 9;
                  } else {

                        // Place the remaining sum as the current digit.
                        ans[i] = (char) ('0' + sum);

                        // All the sum has been used.
                        sum = 0;
                        break;
                  }
            }

            // If some sum remains, the required number is impossible.
            if (sum > 0) {
                  return "";
            }

            // Convert the character array into a string.
            return new String(ans);
      }
}