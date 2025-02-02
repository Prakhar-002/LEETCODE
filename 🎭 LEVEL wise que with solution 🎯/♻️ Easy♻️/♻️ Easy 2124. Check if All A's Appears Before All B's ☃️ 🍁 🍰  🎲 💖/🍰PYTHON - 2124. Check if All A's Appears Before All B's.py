#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2124

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def checkString(self, s: str) -> bool:
            # The problem states that all 'a's should appear before any 'b'
            # This means the string should not contain "ba" as a substring
            return "ba" not in s
