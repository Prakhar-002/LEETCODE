#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2683

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(derived)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def doesValidArrayExist(self, derived):
            # XOR all elements in the array
            res = 0
            for x in derived:
                  res ^= x

            # A valid array exists if the XOR result is 0
            return res == 0

#!--------------------------------------------------------------------- 

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(derived)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def doesValidArrayExist(self, derived: List[int]) -> bool:
            # Initialize variables to represent the first and last elements of the array.
            first_elem = 0
            last_elem = 0

            # Iterate through the derived array to compute the value of last_elem
            # based on XOR logic (represented here with ~last_elem for binary flipping).
            for bit in derived:
                  if bit:  # If the current bit is 1, toggle last_elem
                        last_elem = ~last_elem

            # Check if the first and last elements are equal, indicating validity.
            return first_elem == last_elem
