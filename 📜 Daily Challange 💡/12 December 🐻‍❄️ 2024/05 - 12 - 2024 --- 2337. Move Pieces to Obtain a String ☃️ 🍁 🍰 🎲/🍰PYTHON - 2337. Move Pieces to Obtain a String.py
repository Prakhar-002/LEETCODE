#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2337

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(start)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def canChange(self, start: str, target: str) -> bool:
            i = 0  # Pointer for the start string
            j = 0  # Pointer for the target string
            n = len(start)  # Length of the strings

            while i < n and j < n:
                  # Skip all underscores in the start string
                  while i < n and start[i] == '_':
                        i += 1

                  # Skip all underscores in the target string
                  while j < n and target[j] == '_':
                        j += 1 

                  # Check if both pointers are out of bounds (end of strings)
                  if i == n or j == n:
                        break

                  # Characters at the current positions should match
                  if start[i] != target[j]:
                        return False

                  # 'L' can only move left, so its index in the start should be >= in target
                  if start[i] == 'L' and i < j:
                        return False

                  # 'R' can only move right, so its index in the start should be <= in target
                  if start[i] == 'R' and i > j:
                        return False

                  # Move both pointers forward if the characters match and constraints are satisfied
                  i += 1
                  j += 1

            # After exiting the loop, both strings should only have underscores left
            # Check if remaining characters in both strings are underscores
            while i < n:
                  if start[i] != '_':
                        return False
                  i += 1

            while j < n:
                  if target[j] != '_':
                        return False
                  j += 1

            return True
