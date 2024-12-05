#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 777

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(start)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def canTransform(self, start: str, result: str) -> bool:
            i = 0  # Pointer for the start string
            j = 0  # Pointer for the result string
            n = len(start)  # Length of the strings

            while i < n and j < n:
                  # Skip all 'X' in the start string
                  while i < n and start[i] == 'X':
                        i += 1

                  # Skip all 'X' in the result string
                  while j < n and result[j] == 'X':
                        j += 1

                  # Check if both pointers are out of bounds (end of strings)
                  if i == n or j == n:
                        break

                  # Characters at the current positions should match
                  if start[i] != result[j]:
                        return False

                  # 'L' can only move left, so its index in the start should be >= in result
                  if start[i] == 'L' and i < j:
                        return False

                  # 'R' can only move right, so its index in the start should be <= in result
                  if start[i] == 'R' and i > j:
                        return False

                  # Move both pointers forward if the characters match and constraints are satisfied
                  i += 1
                  j += 1

            # After exiting the loop, both strings should only have 'X' left
            while i < n:
                  if start[i] != 'X':
                        return False
                  i += 1

            while j < n:
                  if result[j] != 'X':
                        return False
                  j += 1

            return True
