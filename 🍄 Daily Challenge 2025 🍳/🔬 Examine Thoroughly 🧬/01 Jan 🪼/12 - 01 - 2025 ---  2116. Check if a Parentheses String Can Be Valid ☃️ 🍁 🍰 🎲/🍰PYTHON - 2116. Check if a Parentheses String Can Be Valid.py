#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2116

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def canBeValid(self, s: str, locked: str) -> bool:
            # Get the length of the string
            str_len = len(s)

            # If the length of the string is odd, it cannot be a valid parentheses sequence
            if str_len % 2 == 1: 
                  return False

            # Initialize lists to keep track of open brackets and unlocked positions
            open_brackets = []
            unlocked = []

            # Iterate through the string
            for i in range(len(s)):
                  if locked[i] == '0':
                        # If the character is unlocked, add its index to the unlocked list
                        unlocked.append(i)
                  elif s[i] == '(':
                        # If the character is a locked '(', add its index to open_brackets
                        open_brackets.append(i)
                  elif s[i] == ')':
                        if open_brackets:
                              # If there is a matching open bracket, pop it
                              open_brackets.pop()
                        elif unlocked:
                              # If there are unlocked positions available, use one to match ')'
                              unlocked.pop()
                        else:
                              # If no match is possible, return False
                              return False

            # Check for remaining open brackets and unlocked positions
            while open_brackets and unlocked and open_brackets[-1] < unlocked[-1]:
                  # Match open brackets with unlocked positions if they can be closed
                  open_brackets.pop()
                  unlocked.pop()

            # If there are any unmatched open brackets left, return False
            if open_brackets: 
                  return False

            # If all checks pass, the string can be valid
            return True
