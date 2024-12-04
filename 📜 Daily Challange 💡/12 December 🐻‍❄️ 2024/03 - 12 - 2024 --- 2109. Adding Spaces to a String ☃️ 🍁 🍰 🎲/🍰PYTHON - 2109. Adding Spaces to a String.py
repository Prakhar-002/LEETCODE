#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2109

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(spaces)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def addSpaces(self, s: str, spaces: list[int]) -> str:
            # Initialize variables to keep track of the previous index
            prev_index = 0
            result = ""

            # Iterate through the list of space positions
            for i in spaces:
                  # Append the substring from the previous index to the current space position
                  result += s[prev_index : i] + " "  # Add a space after each segment
                  prev_index = i  # Update the previous index

            # Append the remaining part of the string after the last space
            result += s[prev_index : ]

            return result
