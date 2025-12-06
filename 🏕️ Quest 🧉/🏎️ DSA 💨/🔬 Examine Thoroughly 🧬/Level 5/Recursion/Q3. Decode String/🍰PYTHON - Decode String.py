
#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 394

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def decodeString(self, s: str) -> str:
            # Initialize an empty stack to help with decoding nested patterns
            stack = []

            # Iterate through each character in the string
            for i in range(len(s)):
                  if s[i] != ']':
                        # Push characters onto the stack until a closing bracket is encountered
                        stack.append(s[i])
                  else:
                        # Start constructing the substring inside the brackets
                        substr = ""
                        while stack[-1] != '[':
                              # Build the substring in reverse order by popping from the stack
                              substr = stack.pop() + substr

                        # Pop the '[' character from the stack
                        stack.pop()

                        # Retrieve the multiplier (digits preceding the brackets)
                        key = ""
                        while stack and stack[-1].isdigit():
                              # Build the multiplier in reverse order
                              key = stack.pop() + key

                        # Repeat the substring and push it back onto the stack
                        stack.append(int(key) * substr)

            # Join all elements in the stack to form the final decoded string
            return "".join(stack)
