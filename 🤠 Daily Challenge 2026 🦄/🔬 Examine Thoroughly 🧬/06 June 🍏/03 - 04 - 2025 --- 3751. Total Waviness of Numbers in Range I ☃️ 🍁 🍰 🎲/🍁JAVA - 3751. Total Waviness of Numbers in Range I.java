//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3751

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums1 - nums2)

//? 🧺 Space complexity ➺ O(1)

class Solution {

      // Count peaks and valleys in the digit sequence of a number
      private int waviness(String n) {
            int waviness = 0;

            for (int i = 1; i < n.length() - 1; i++) {
                  int prev = n.charAt(i - 1) - '0';
                  int curr = n.charAt(i) - '0';
                  int next = n.charAt(i + 1) - '0';

                  boolean peak = prev < curr && curr > next; // Middle digit is highest
                  boolean valley = prev > curr && curr < next; // Middle digit is lowest

                  if (peak || valley)
                        waviness++;
            }

            return waviness;
      }

      public int totalWaviness(int num1, int num2) {
            int ans = 0;

            // Accumulate waviness for every number in the range
            for (int i = num1; i <= num2; i++) {
                  ans += waviness(String.valueOf(i));
            }

            return ans;
      }
}