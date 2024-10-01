#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 155

#? ⌚ Time complexity ➺ O(1) 

#? 🧺 Space complexity ➺ O(n) 👉🏻  n = stack size

class MinStack:

      def __init__(self):
            # Main stack to store all values
            self.stack = []  
            # Stack to store the minimum values
            self.min_stack = []  

      def push(self, val: int) -> None:
            # Push the value to the main stack
            self.stack.append(val)
            # Push the minimum value to the min_stack
            # If the min_stack is empty, push the value
            # Otherwise, push the minimum of the current value 
            # and the top of the min_stack
            if not self.min_stack:
                  self.min_stack.append(val)
            else:
                  self.min_stack.append(min(val, self.min_stack[-1]))

      def pop(self) -> None:
            # Pop the value from both the stack and the min_stack
            self.stack.pop()
            self.min_stack.pop()

      def top(self) -> int:
            # Return the top value from the main stack
            return self.stack[-1]

      def getMin(self) -> int:
            # Return the top value from the min_stack (which is the minimum value)
            return self.min_stack[-1]
