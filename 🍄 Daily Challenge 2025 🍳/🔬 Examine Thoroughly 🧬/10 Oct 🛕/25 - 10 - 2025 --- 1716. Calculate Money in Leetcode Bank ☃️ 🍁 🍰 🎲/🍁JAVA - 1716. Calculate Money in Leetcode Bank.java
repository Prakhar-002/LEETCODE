//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 176

//? ⌚ Time complexity ➺ O(n / 7) 

//? 🧺 Space complexity ➺ O(1)

class Solution {
      /**
       * Calculates the total money in the LeetCode Bank after n days.
       * Each week starts with $1 more than the previous week and each day increments
       * by $1.
       *
       * @param n Number of days
       * @return Total amount of money after n days
       */
      public int totalMoney(int n) {
            int weeks = n / 7; // Number of complete weeks
            int days = n % 7; // Number of days in last incomplete week
            int money = 0;

            // For each complete week:
            // - Week i starts at (i+1) dollars
            // - Each week for 7 days: total is 7*(i+1) + 21 (21 is the sum 1+2+...+6)
            for (int i = 0; i < weeks; i++) {
                  money += 7 * (i + 1) + 21; // 21 is fixed (sum of 1...6)
            }

            // Add money for the remaining days (each day starts at weeks+1 and increments)
            for (int d = 0; d < days; d++) {
                  money += (weeks + 1) + d;
            }

            return money;
      }
}
