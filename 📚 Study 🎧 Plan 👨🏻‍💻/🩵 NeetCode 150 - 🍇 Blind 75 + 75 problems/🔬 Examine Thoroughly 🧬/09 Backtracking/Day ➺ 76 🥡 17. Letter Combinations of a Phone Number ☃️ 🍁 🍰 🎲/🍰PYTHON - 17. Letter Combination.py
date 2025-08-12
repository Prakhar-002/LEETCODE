#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 17

#? ⌚ Time complexity ➺ O(n * 4 ^ n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from typing import List

class Solution:
      def letterCombinations(self, digits: str) -> List[str]:
            # Result list storing all possible letter combinations
            res = []

            # Mapping from digit to possible letters (phone keypad)
            digitToChar = {
                  "2": "abc",
                  "3": "def",
                  "4": "ghi",
                  "5": "jkl",
                  "6": "mno",
                  "7": "pqrs",  # corrected 'qprs' → 'pqrs'
                  "8": "tuv",
                  "9": "wxyz",
            }

            # ----------------------------------------------------------
            # Backtracking function
            # i       → current index in the input 'digits'
            # curStr  → the string built so far
            # ----------------------------------------------------------
            def backtracking(i, curStr):
                  # Base Case: if the current string length equals digits length
                  # we have a complete combination
                  if len(curStr) == len(digits):
                        res.append(curStr)
                        return

                  # Recursive exploration:
                  # For the current digit, iterate over its possible letters
                  for ch in digitToChar[digits[i]]:
                        # Append the letter and move to the next digit
                        backtracking(i + 1, curStr + ch)

            # Start backtracking only if input string is not empty
            if digits:
                  backtracking(0, "")

            return res
