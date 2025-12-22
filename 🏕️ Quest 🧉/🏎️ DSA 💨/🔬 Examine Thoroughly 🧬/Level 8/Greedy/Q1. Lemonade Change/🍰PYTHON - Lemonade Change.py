#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L8.1 Q1

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(bills)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def lemonadeChange(self, bills: List[int]) -> bool:
            five = 0
            ten = 0

            for bill in bills:
                  # if we get 5$ 
                  if bill == 5:
                        five += 1

                  elif bill == 10:
                        if five >= 1:
                              five -= 1
                              ten += 1 

                        else :
                              return False

                  else :
                        if five >= 1 and ten >= 1:
                              five -= 1
                              ten -= 1

                        elif five >= 3:
                              five -= 3

                        else :
                              return False

            return True
