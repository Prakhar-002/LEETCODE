#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1910

#? ⌚ Time complexity ➺ O(n * m)  👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n + m) 👉🏻  m = len(part)

class Solution:
      def removeOccurrences(self, s: str, part: str) -> str:
            # Get the length of the substring to be removed
            part_len = len(part)

            # Initialize an empty stack to store characters
            stack = []

            # Iterate through each character in the string
            for ch in s:
                  stack.append(ch)  # Push character to stack

                  # Check if the last 'part_len' characters form the substring 'part'
                  if len(stack) >= part_len and self.check_match(stack, part, part_len):
                        # Remove 'part_len' characters if a match is found
                        for _ in range(part_len):
                              stack.pop()

            # Convert the stack back to a string and return
            return "".join(stack)

      def check_match(self, stack, part, part_length):
            # Check if the last 'part_length' characters match 'part'
            return "".join(stack[-part_length:]) == part
