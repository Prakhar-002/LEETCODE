#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 20

#? ⌚ Time complexity -> O(n) 👉 length of s

#? 🧺 Space complexity -> O(n) 👉 making of stack

class Solution:
      def isValid(self, s: str) -> bool:
            stack = []

            for ch in s:
                  if ch in '({[':
                        stack.append(ch)
                  else:
                        if not stack:
                              return False

                        if (stack[-1] == '(' and ch == ')') or \
                              (stack[-1] == '{' and ch == '}') or \
                              (stack[-1] == '[' and ch == ']'):
                              stack.pop()
                        else:
                              return False

            return len(stack) == 0