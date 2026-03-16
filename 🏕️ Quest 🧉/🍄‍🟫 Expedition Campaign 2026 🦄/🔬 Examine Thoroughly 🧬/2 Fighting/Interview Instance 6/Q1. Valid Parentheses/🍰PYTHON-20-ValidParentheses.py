#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 20

#? ⌚ Time complexity -> O(n) 👉 length of s

#? 🧺 Space complexity -> O(n) 👉 making of stack

class Solution:
      def isValid(self, s: str) -> bool:
            # Stack to keep track of opening brackets
            stack = []

            # Map each opening bracket to its corresponding closing bracket
            mapping = {"(": ")", "{": "}", "[": "]"}

            for ch in s:
                  # If current char is an opening bracket, push onto stack
                  if ch in mapping:
                        stack.append(ch)

                  # If current char is a closing bracket
                  elif ch in mapping.values():
                        # Stack must be non-empty and top must match current closing bracket
                        if not stack or mapping[stack.pop()] != ch:
                              return False

            # Valid only if all opening brackets were matched and closed
            return not stack