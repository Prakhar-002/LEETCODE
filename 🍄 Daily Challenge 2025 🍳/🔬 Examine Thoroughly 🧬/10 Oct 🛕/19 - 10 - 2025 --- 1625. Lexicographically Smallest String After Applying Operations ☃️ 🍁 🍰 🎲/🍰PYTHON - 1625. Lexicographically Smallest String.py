#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1625

#? ⌚ Time complexity ➺ O(n^2 d^2) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

import math

class Solution:
      def findLexSmallestString(self, s: str, a: int, b: int) -> str:
            n = len(s)
            res = s                     # Initialize result with original string
            s = s + s                   # Duplicate string to handle rotations easily
            g = math.gcd(b, n)          # Compute gcd of b and n, helps in rotation indexing

            def add(t, start):
                  original = int(t[start])  # Original digit at start index
                  min_val, times = 10, 0    # Variables to track minimum digit and times to add a
                  
                  # Try adding a multiple of 'a' (0 to 9 times) to the digit to minimize it modulo 10
                  for i in range(10):
                        added = (original + i * a) % 10
                        if added < min_val:
                              min_val = added
                              times = i

                  t_list = list(t)        # Convert string to list for mutability

                  # Add 'times * a' modulo 10 to every digit at positions starting at 'start', stepping by 2
                  for i in range(start, n, 2):
                        t_list[i] = str((int(t_list[i]) + times * a) % 10)

                  return "".join(t_list)  # Return new string after additions

            # Iterate over all possible rotations by steps of gcd
            for i in range(0, n, g):
                  t = s[i : i + n]          # Extract substring of length n starting at i
                  t = add(t, 1)             # Perform additions on digits starting at odd indices

                  # If b is odd, also perform addition on digits starting at even indices
                  if b % 2:
                        t = add(t, 0)

                  # Update result if the new string is lex smaller
                  if t < res:
                        res = t

            return res
