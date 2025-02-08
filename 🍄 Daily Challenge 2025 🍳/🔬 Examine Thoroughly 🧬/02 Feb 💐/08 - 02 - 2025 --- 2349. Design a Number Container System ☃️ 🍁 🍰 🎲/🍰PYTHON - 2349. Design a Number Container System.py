#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2349

#? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(unique Index)

#? 🧺 Space complexity ➺ O(n)

from collections import defaultdict
from sortedcontainers import SortedSet

class NumberContainers:
      def __init__(self):
            # Dictionary mapping numbers to sorted sets of indices
            self.num_idx_set = defaultdict(SortedSet)
            # Dictionary mapping indices to numbers
            self.idx_num = {}

      def change(self, index: int, number: int) -> None:
            # If the index already has a number, remove it from the previous number's set
            if index in self.idx_num:
                  prev_num = self.idx_num[index]
                  self.num_idx_set[prev_num].discard(index)

                  # Remove the number entry if there are no indices left
                  if not self.num_idx_set[prev_num]:
                        del self.num_idx_set[prev_num]

            # Update index mapping and add it to the new number's set
            self.idx_num[index] = number
            self.num_idx_set[number].add(index)

      def find(self, number: int) -> int:
            # If the number exists and has indices, return the smallest one
            if number in self.num_idx_set and self.num_idx_set[number]:
                  return self.num_idx_set[number][0]
            return -1
