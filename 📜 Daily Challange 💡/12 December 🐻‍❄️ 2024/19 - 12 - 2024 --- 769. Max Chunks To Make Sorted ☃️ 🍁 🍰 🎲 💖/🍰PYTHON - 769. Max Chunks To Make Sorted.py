#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 769

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(arr)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def maxChunksToSorted(self, arr):
            n = len(arr)
            chunks = 0
            max_element = 0

            # Iterate over the array
            for i in range(n):
                  # Update max_element
                  max_element = max(max_element, arr[i])

                  if max_element == i:
                        # All values in range [0, i] belong to the prefix arr[0:i]; a new chunk can be formed
                        chunks += 1

            return chunks
