#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 860

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(bills)

#? 🧺 Space complexity ➺ O(1)

from typing import List

class Solution:
      def lemonadeChange(self, bills: List[int]) -> bool:
            # Initialize counters for $5 and $10 bills
            five = 0
            ten = 0

            # Iterate through each bill in the input list
            for bill in bills:
                  # Case 1: Customer pays with $5
                  if bill == 5:
                        five += 1
                  # Case 2: Customer pays with $10
                  elif bill == 10:
                        # Check if we have a $5 bill to give as change
                        if five >= 1:
                              five -= 1
                              ten += 1
                        else:
                              return False  # Can't provide change
                  # Case 3: Customer pays with $20
                  else:
                        # Option 1: Give change as $10 + $5
                        if five >= 1 and ten >= 1:
                              ten -= 1
                              five -= 1
                        # Option 2: Give change as $5 + $5 + $5
                        elif five >= 3:
                              five -= 3
                        # If neither option is possible, we can't provide change
                        else:
                              return False

            # If we've made it through all transactions, return True
            return True


