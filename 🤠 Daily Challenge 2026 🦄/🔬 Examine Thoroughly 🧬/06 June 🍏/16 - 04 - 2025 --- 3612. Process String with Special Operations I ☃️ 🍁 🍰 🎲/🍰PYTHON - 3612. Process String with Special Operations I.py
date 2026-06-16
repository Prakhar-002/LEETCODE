#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3612

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def processStr(self, s: str) -> str:
            result = []

            for ch in s:
                  if ch.islower():
                        # Append normal lowercase letters
                        result.append(ch)
                  elif ch == '*' and result:
                        # Remove the last character
                        result.pop()
                  elif ch == '#':
                        # Duplicate the entire current list
                        result = 2 * result
                  elif ch == '%':
                        # Reverse the entire current list
                        result.reverse()

            return "".join(result)