#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest Maths L3 Q2

#? ⌚ Time complexity ➺ O(rowIdx * 2) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def getRow(self, rowIndex: int) -> List[int]:
            # Initialize the first row as [1]
            res = [1]

            # Generate rows up to the given rowIndex
            for i in range(rowIndex):
                  # Create a temporary array of length +1, filled with 0
                  next_row = [0] * (len(res) + 1)

                  # Fill the new row using the previous row's values
                  for j in range(len(res)):
                        next_row[j] += res[j]
                        next_row[j + 1] += res[j]

                  # Move to the newly built row
                  res = next_row

            return res