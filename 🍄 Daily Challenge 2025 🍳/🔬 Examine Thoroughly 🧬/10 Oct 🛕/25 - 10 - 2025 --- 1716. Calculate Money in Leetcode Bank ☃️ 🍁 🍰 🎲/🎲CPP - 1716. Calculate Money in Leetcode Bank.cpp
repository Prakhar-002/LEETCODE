//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 176

//? ⌚ Time complexity ➺ O(n / 7)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      /**
       * Calculates the total money in the LeetCode Bank after n days.
       *
       * @param n Number of days
       * @return Total amount of money saved after n days
       */
      int totalMoney(int n) {
            int weeks = n / 7;   // Number of complete weeks
            int days = n % 7;    // Remaining days
            int money = 0;

            // Add money for complete weeks
            for (int i = 0; i < weeks; ++i) {
                  // Each week: 7 * (i + 1) + 21 (where 21 is sum of 1...6)
                  money += 7 * (i + 1) + 21;
            }

            // Add money for the last incomplete week
            for (int d = 0; d < days; ++d) {
                  // Each remaining day: starts at weeks+1 and increases by 1 each day
                  money += (weeks + 1) + d;
            }

            return money;
      }
};
