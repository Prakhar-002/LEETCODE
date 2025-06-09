#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2434

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def robotWithString(self, s: str) -> str:
            from collections import Counter

            cnt = [0] * 26    # Frequency array

            # Count all characters
            for ch in s:
                  cnt[ord(ch) - ord('a')] += 1

            stack = []             # Stack for holding characters
            res = []               # List to store result characters
            min_char = 'a'         # Start with smallest character

            for ch in s:
                  stack.append(ch)                   # Robot picks up character
                  cnt[ord(ch) - ord('a')] -= 1       # Decrease frequency

                  # Move to next available smallest character
                  while min_char <= 'z' and cnt[ord(min_char) - ord('a')] == 0:
                        min_char = chr(ord(min_char) + 1)

                  # Pop from stack if possible
                  while stack and stack[-1] <= min_char:
                        res.append(stack.pop())      # Write character

            return ''.join(res)
