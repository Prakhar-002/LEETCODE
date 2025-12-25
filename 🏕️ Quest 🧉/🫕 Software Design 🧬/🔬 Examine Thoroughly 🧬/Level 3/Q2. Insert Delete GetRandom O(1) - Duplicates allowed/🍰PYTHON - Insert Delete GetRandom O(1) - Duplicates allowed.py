#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest Software Design L3 Q2

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

import random
from collections import defaultdict

class RandomizedCollection:
      def __init__(self):
            """
            Initialize your data structure here.
            """
            # numList: stores all values (including duplicates) for O(1) random access
            self.numList = []
            # idx: maps each value to a set of indices where it appears in numList
            self.idx = defaultdict(set)

      def insert(self, val: int) -> bool:
            """
            Inserts a value to the collection. Returns true if the collection did not already contain the specified element.
            """
            # Add the current index (end of list) to the set of indices for this value
            self.idx[val].add(len(self.numList))
            # Append the value to the list
            self.numList.append(val)
            # Return True if this was the first occurrence of the value (set size is 1)
            return len(self.idx[val]) == 1

      def remove(self, val: int) -> bool:
            """
            Removes a value from the collection. Returns true if the collection contained the specified element.
            """
            # If val is not in the collection, return False
            if not self.idx[val]:
                  return False
            # Get any index where val appears (we remove one occurrence)
            remove = self.idx[val].pop()
            # Get the last value in the list
            last = self.numList[-1]
            # Move the last value to the position of the value being removed
            self.numList[remove] = last
            # Update the index set for the last value:
            #   - Add the index 'remove' to last’s set
            self.idx[last].add(remove)
            #   - Remove the old last index (len(self.numList)-1) from last’s set
            self.idx[last].discard(len(self.numList) - 1)
            # Remove the last element from the list (the value we just moved is now duplicated at the end)
            self.numList.pop()
            return True

      def getRandom(self) -> int:
            """
            Get a random element from the collection.
            """
            # Return a random element from the list
            return random.choice(self.numList)
