#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 20

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(n)

class Solution: 
      def isValid(self, s: str) -> bool:
            # Stack to store expected closing brackets or track opening brackets
            stack = []
            mapping = {"(": ")", "{": "}", "[": "]"}

            for ch in s:
                  # If it is an opening bracket, push onto the stack
                  if ch in mapping:
                        stack.append(ch)
                  # If it is a closing bracket, verify with the top element of the stack
                  elif ch in mapping.values():
                        if not stack or mapping[stack.pop()] != ch:
                              return False

            # Valid if all opening brackets have been properly matched and closed
            return not stack