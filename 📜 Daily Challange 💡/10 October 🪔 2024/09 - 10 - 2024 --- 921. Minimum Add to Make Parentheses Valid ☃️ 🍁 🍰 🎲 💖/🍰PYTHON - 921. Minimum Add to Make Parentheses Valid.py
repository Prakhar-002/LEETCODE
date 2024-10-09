#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 921

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def minAddToMakeValid(self, s: str) -> int:
            # Initialize count of open parentheses and minimum additions needed
            open_count = 0
            min_additions = 0

            # Iterate through each character in the input string
            for ch in s:
                  if ch == '(':
                        # Increment open parentheses count
                        open_count += 1
                  elif ch == ')':
                        if open_count > 0:
                              # Matching pair found, decrement open count
                              open_count -= 1
                        else:
                              # No matching open parenthesis, increment minimum additions
                              min_additions += 1

            # Add remaining open parentheses to minimum additions
            min_additions += open_count

            # Return the total minimum additions needed
            return min_additions

#!--------------------------------------------------------------------------------------

#? ⌚ Time complexity ➺ O(n) 👉🏻 n = len(s)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def minAddToMakeValid(self, s: str) -> int:
            # Initialize an empty stack to store parentheses
            stack = []

            # Iterate through each character in the input string
            for ch in s:
                  # Check if stack is not empty and the current character forms a pair with the top of the stack
                  if stack and (stack[-1] == '(' and ch == ')'):
                        # Remove the matching pair by popping the top element
                        stack.pop()
                  else:
                        # Push the current character onto the stack
                        stack.append(ch)

            # Return the size of the remaining stack, which represents the minimum length
            return len(stack)