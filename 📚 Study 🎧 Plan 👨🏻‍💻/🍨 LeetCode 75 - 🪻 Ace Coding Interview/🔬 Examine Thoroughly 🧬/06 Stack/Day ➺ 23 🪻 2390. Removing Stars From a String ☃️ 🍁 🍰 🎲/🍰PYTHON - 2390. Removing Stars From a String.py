#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2390

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def removeStars(self, s: str) -> str:
            # List to simulate stack behavior
            char_stack = []

            # Iterate over each character in the input string
            for ch in s:
                  if ch == '*':
                        # Remove the top element for '*'
                        char_stack.pop()
                  else:
                        # Add the character to the stack
                        char_stack.append(ch)

            # Convert the list back to a string and return
            return ''.join(char_stack)
