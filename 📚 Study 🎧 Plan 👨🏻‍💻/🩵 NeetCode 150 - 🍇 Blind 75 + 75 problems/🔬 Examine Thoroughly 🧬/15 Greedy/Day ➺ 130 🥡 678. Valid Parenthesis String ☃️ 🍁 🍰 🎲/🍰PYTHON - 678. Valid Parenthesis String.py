#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 678

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def checkValidString(self, s: str) -> bool:
            leftMin, leftMax = 0, 0  # leftMin: minimum possible unmatched '('; leftMax: maximum possible unmatched '('

            for ch in s:
                  if ch == "(":
                        # '(' increases both min and max unmatched '(' count
                        leftMin += 1
                        leftMax += 1
                  elif ch == ")":
                        # ')' decreases both min and max unmatched '(' count
                        leftMin -= 1
                        leftMax -= 1
                  else:  # ch == '*'
                        # '*' can be '(', ')' or empty:
                        #   min unmatched '(' might decrease (if * is ')')
                        #   max unmatched '(' might increase (if * is '(')
                        leftMin -= 1  
                        leftMax += 1

                  # If at any point max unmatched '(' < 0, too many ')' encountered → invalid
                  if leftMax < 0:
                        return False

                  # leftMin should never be negative (can treat excess ')' as balanced by '*')
                  if leftMin < 0:
                        leftMin = 0

            # If min unmatched '(' is 0, string can be validly balanced
            return leftMin == 0
