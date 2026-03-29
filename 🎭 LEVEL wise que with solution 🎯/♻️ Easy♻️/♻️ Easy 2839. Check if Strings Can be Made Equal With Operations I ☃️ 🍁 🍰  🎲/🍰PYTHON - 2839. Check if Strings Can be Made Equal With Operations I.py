#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2839

#? ⌚ Time complexity ➺ O(1) 👉🏻  fixed 4-character strings, constant comparisons

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def canBeEqual(self, s1: str, s2: str) -> bool:
            # Even-indexed positions (0, 2) can be swapped independently
            even_match = (s1[0] == s2[0] and s1[2] == s2[2]) \
                        or (s1[0] == s2[2] and s1[2] == s2[0])

            # Odd-indexed positions (1, 3) can be swapped independently
            odd_match  = (s1[1] == s2[1] and s1[3] == s2[3]) \
                        or (s1[1] == s2[3] and s1[3] == s2[1])

            return even_match and odd_match