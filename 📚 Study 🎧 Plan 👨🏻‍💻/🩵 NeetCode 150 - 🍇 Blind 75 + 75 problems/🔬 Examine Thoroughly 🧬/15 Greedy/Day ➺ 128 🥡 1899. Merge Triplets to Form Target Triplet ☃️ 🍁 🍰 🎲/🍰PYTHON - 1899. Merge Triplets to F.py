#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 763

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(1)

from typing import List 

class Solution:
      def partitionLabels(self, s: str) -> List[int]:
            # Step 1: Store the last occurrence index of each character
            lastIdx = [0] * 26  # Array to store the last index of each character (a-z)

            # Iterate over the string to fill lastIdx array
            for i, ch in enumerate(s):
                  lastIdx[ord(ch) - ord("a")] = i  # Store the last index of each character

            # Step 2: Partitioning process
            partition = []  # List to store the size of each partition
            size, end = 0, 0  # Variables to track partition size and partition end index

            for i, ch in enumerate(s):
                  size += 1  # Increase the partition size
                  end = max(end, lastIdx[ord(ch) - ord("a")])  # Update the partition end

                  # If the current index matches the end index of the partition
                  if i == end:
                        partition.append(size)  # Store the partition size
                        size = 0  # Reset size for the next partition

            return partition  # Return the list of partition sizes