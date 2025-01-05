//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2381

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public String shiftingLetters(String s, int[][] shifts) {
            int n = s.length();

            // Create a difference array to track shift operations
            int[] diff = new int[n + 1];

            // Populate the difference array based on the shifts
            for (int[] shift : shifts) {
                  int l = shift[0], r = shift[1], d = shift[2];
                  // If direction is 1 (right shift), increase diff[r + 1] and decrease diff[l]
                  // If direction is 0 (left shift), decrease diff[r + 1] and increase diff[l]
                  diff[r + 1] += d == 1 ? 1 : -1;
                  diff[l] += d == 1 ? -1 : 1;
            }

            int shift = 0;
            // Convert string characters to numerical values (a -> 0, ..., z -> 25)
            int[] nums = new int[n];
            for (int i = 0; i < n; i++) {
                  nums[i] = s.charAt(i) - 'a';
            }

            // Apply the cumulative shifts in reverse order
            for (int i = diff.length - 1; i > 0; i--) {
                  // Add the current value in diff to the cumulative shift
                  shift += diff[i];

                  // Adjust the character value using the cumulative shift
                  nums[i - 1] = (nums[i - 1] + shift % 26 + 26) % 26;
            }

            // Convert the numerical values back to characters
            StringBuilder result = new StringBuilder();
            for (int num : nums) {
                  result.append((char) ('a' + num));
            }

            // Return the final shifted string
            return result.toString();
      }
}
