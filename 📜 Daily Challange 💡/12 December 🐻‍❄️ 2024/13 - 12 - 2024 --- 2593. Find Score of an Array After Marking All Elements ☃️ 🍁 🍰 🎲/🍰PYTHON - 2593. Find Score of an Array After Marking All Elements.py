#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2593

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def findScore(self, nums: List[int]) -> int:
            # Create an array to store the number and its index
            numIndexPairs = []

            n = len(nums)

            # Populate the array with pairs of numbers and their indices
            for i, num in enumerate(nums):
                  numIndexPairs.append([num, i])

            # Sort the array based on the numbers in ascending order
            numIndexPairs.sort(key=lambda x: x[0])

            # Create a boolean array to track whether an index is "marked"
            isMarked = [False] * n

            result = 0

            # Iterate over the sorted array
            for i in range(n):
                  num, index = numIndexPairs[i]

                  # If the current index is not marked, process it
                  if not isMarked[index]:
                        # Add the number to the result
                        result += num

                        # Mark the current index
                        isMarked[index] = True

                        # Mark the adjacent indices if they exist
                        if (index - 1) > -1:
                              isMarked[index - 1] = True
                        if (index + 1) < n:
                              isMarked[index + 1] = True

            return result
