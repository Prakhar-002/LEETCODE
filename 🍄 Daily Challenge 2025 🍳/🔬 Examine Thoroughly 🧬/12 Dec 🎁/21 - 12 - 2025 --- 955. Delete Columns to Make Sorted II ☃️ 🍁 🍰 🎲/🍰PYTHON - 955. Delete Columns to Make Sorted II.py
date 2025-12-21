#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 955

#? ⌚ Time complexity ➺ O(n * w) 👉🏻  n = len(A)

#? 🧺 Space complexity ➺ O(n)      ->  m = len(A[0])

class Solution(object):
      def minDeletionSize(self, A):
            # If there is only one row, no deletion is needed
            if len(A) <= 1:
                  return 0

            # cuts[i] is True if the i-th row is already strictly less than the (i+1)-th row
            # i.e., we don't need to check col[i] <= col[i+1] in future columns
            cuts = [False] * (len(A) - 1)

            ans = 0  # number of columns we need to delete

            # Iterate over each column (col is a tuple of characters from that column)
            for col in zip(*A):
                  # Check if this column can be kept (i.e., it doesn't break the order)
                  # For each adjacent row pair i, either:
                  #   - cuts[i] is True (rows i and i+1 are already strictly increasing), OR
                  #   - col[i] <= col[i+1] (this column maintains non-decreasing order)
                  if all(cuts[i] or col[i] <= col[i+1] for i in range(len(col) - 1)):
                        # This column can be kept; update cuts where we see strict increase
                        for i in range(len(col) - 1):
                              if col[i] < col[i+1]:
                                    cuts[i] = True
                  else:
                        # This column breaks the order; we must delete it
                        ans += 1

            return ans
