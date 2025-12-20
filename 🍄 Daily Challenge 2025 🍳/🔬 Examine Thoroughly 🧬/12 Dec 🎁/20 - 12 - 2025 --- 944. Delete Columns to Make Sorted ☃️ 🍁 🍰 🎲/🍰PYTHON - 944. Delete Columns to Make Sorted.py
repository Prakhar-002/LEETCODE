#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 944

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(strs)

#? 🧺 Space complexity ➺ O(strs[0])

class Solution:
      def minDeletionSize(self, strs: List[str]) -> int:
            # Edge case: if there are no strings or the first string is empty
            if not strs or not strs[0]:
                  return 0

            # Number of columns = length of each string (all strings have same length)
            num_cols = len(strs[0])
            # Set to keep track of columns that are not sorted (need to be deleted)
            bad_cols = set()

            # Traverse each adjacent pair of rows (strs[i] and strs[i+1])
            for i in range(len(strs) - 1):
                  # Compare each column j in strs[i] and strs[i+1]
                  for j in range(num_cols):
                        # If this column is already marked as bad, skip it
                        if j not in bad_cols and strs[i][j] > strs[i+1][j]:
                              # In this column, current row has a char > next row → not sorted
                              bad_cols.add(j)

            # The answer is the number of columns that are not sorted
            return len(bad_cols)
