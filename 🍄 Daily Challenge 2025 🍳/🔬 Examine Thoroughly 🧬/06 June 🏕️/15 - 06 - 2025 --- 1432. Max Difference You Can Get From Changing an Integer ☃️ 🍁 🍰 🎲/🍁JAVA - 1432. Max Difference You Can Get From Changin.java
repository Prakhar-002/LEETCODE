//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1432

//? ⌚ Time complexity ➺ O(log n)

//? 🧺 Space complexity ➺ O(log n)

class Solution {
      public int maxDiff(int num) {
            String maxNum = Integer.toString(num);
            String minNum = maxNum;

            // Build the maximum number by replacing the first digit that is not '9' with '9'
            for (char c : maxNum.toCharArray()) {
                  if (c != '9') {
                        maxNum = maxNum.replace(c, '9');
                        break;
                  }
            }

            // Build the minimum number
            for (int i = 0; i < minNum.length(); i++) {
                  char c = minNum.charAt(i);
                  if (i == 0) {
                        // Replace the first digit with '1' if it's not '1'
                        if (c != '1') {
                              minNum = minNum.replace(c, '1');
                              break;
                        }
                  } else {
                        // Replace first suitable digit (not '0' or equal to first digit) with '0'
                        if (c != '0' && c != minNum.charAt(0)) {
                              minNum = minNum.replace(c, '0');
                              break;
                        }
                  }
            }

            // Return the integer difference
            return Integer.parseInt(maxNum) - Integer.parseInt(minNum);
      }
}
