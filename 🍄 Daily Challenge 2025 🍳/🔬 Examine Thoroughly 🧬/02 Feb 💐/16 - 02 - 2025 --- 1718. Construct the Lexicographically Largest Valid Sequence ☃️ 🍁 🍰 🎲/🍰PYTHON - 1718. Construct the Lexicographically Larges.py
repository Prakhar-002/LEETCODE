#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1718

# ? ⌚ Time complexity ➺ O(n) 

# ? 🧺 Space complexity ➺ O(n)

from typing import List

class Solution:
      def constructDistancedSequence(self, n: int) -> List[int]:
            # Initialize the result sequence with size (2 * n - 1), filled with 0s
            res_seq = [0] * (n * 2 - 1)

            # Boolean array to track used numbers (1 to n)
            is_number_used = [False] * (n + 1)  

            def backtracking(i):
                  # If we have successfully filled all positions, return True
                  if i == len(res_seq):
                        return True

                  # Try placing numbers from n down to 1 for lexicographically largest sequence
                  for num in range(n, 0, -1):
                        # Skip if the number is already used
                        if is_number_used[num]:
                              continue

                        # If num > 1, ensure it can be placed at both required positions
                        if num > 1 and (i + num >= len(res_seq) or res_seq[i + num] > 0):
                              continue

                        # Mark the number as used and place it at index i
                        is_number_used[num] = True
                        res_seq[i] = num

                        # If num > 1, also place it at (i + num) index
                        if num > 1:
                              res_seq[i + num] = num

                        # Find the next empty position to continue placement
                        j = i + 1
                        while j < len(res_seq) and res_seq[j] > 0:
                              j += 1

                        # Recursively attempt to construct the remaining sequence
                        if backtracking(j):
                              return True

                        # Undo placement (backtrack)
                        is_number_used[num] = False
                        res_seq[i] = 0

                        if num > 1:
                              res_seq[i + num] = 0

                  # If no valid placement is found, return False
                  return False

            # Start backtracking from index 0
            backtracking(0)
            return res_seq
