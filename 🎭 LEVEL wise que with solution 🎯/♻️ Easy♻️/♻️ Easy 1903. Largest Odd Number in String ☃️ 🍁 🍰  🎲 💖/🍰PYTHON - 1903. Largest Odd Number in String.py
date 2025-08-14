#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1903

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(num)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def largestOddNumber(self, num: str) -> str:
            # Iterate from the last character to the first
            for i in range(len(num) - 1, -1, -1):
                  # Convert current char to int and check if it is odd
                  if int(num[i]) % 2 != 0:
                        # Return substring from start to this index (inclusive)
                        return num[:i + 1]

            # If no odd digit found, return empty string
            return ""
