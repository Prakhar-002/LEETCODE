#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 176

#? ⌚ Time complexity ➺ O(n / 7) 

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def totalMoney(self, n: int) -> int:
            weeks = n // 7        # Number of complete weeks
            days = n % 7          # Remaining days

            # Total for complete weeks: each week starts 1 higher than last week
            # Week 0: 1+2+...+7, Week 1: 2+3+...+8, ...
            # Formula: 7 * (week start) + sum(0..6) for each week
            money = 0
            for i in range(weeks): 
                  # i-th week starts with i+1 on Monday
                  money += 7 * (i + 1) + 21  # 21 = 1+2+...+6
                  # The sum 1+2+...+6 is always 21, so each week is 7*(i+1)+21

            # Add money for remaining days
            for d in range(days):
                  # Each remaining day starts at (weeks+1) + d
                  money += (weeks + 1) + d

            return money
