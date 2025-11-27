//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 43

//? ⌚ Time complexity ➺ O(1) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

public class Solution {
      public String multiply(String num1, String num2) {
            int n1 = num1.length();
            int n2 = num2.length();
            int[] result = new int[n1 + n2];

            // Multiply each digit in num1 by each digit in num2
            for (int i = n1 - 1; i >= 0; i--) {
                  int digit1 = num1.charAt(i) - '0';
                  for (int j = n2 - 1; j >= 0; j--) {
                        int digit2 = num2.charAt(j) - '0';

                        int sum = digit1 * digit2 + result[i + j + 1];
                        result[i + j + 1] = sum % 10;
                        result[i + j] += sum / 10;
                  }
            }

            // Convert result array to string, skipping leading zeros
            StringBuilder sb = new StringBuilder();
            int index = 0;
            while (index < result.length - 1 && result[index] == 0) {
                  index++;
            }
            while (index < result.length) {
                  sb.append(result[index]);
                  index++;
            }
            return sb.toString();
      }
}
