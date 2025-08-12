#! https://github.com/Prakhar-002/LEETCODE

#Todo 📌 QUESTION NUMBER 131 

from typing import List

class Solution:
      def partition(self, s: str) -> List[List[str]]:
            result = []   # Will store all possible palindrome partitions
            part = []     # Temporary list to hold the current partition path

            def dfs(i):
                  # ----------------------------------------------------------
                  # Base Case:
                  # If our index 'i' has reached the end of the string,
                  # we have a complete partition made of palindromic substrings.
                  # Add a copy of 'part' to results.
                  # ----------------------------------------------------------
                  if i >= len(s):
                        result.append(part[:])  # append a copy
                        return

                  # ----------------------------------------------------------
                  # Try all possible partition splits starting from index i
                  # ----------------------------------------------------------
                  for j in range(i, len(s)):
                        # Only proceed if s[i:j+1] is a palindrome
                        if self.is_pali(s, i, j):
                              part.append(s[i: j + 1])  # Choose substring
                              dfs(j + 1)                # Explore remaining string
                              part.pop()                 # Backtrack — remove last

            # Start DFS recursion from index 0
            dfs(0)
            return result

      def is_pali(self, string: str, l: int, r: int) -> bool:
            # Check if the substring from l to r is a palindrome
            while l < r:
                  if string[l] != string[r]:
                        return False
                  l, r = l + 1, r - 1
            return True
