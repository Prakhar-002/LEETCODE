#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest Software Design L3 Q1

#? ⌚ Time complexity ➺ O(1)

#? 🧺 Space complexity ➺ O(1)

import random

class RandomizedSet:
      def __init__(self):
            # numMap: maps value to its index in numList
            self.numMap = {}
            # numList: stores all values in a list for O(1) random access
            self.numList = []

      def insert(self, val: int) -> bool:
            # Check if val is already present
            res = val not in self.numMap
            if res:
                  # Add val to the map with its index (current end of list)
                  self.numMap[val] = len(self.numList)
                  # Append val to the list
                  self.numList.append(val)
            return res

      def remove(self, val: int) -> bool:
            # Check if val is present
            res = val in self.numMap
            if res:
                  # Get index of val in the list
                  idx = self.numMap[val]
                  # Get the last value in the list
                  lastVal = self.numList[-1]
                  # Move lastVal to the position of val
                  self.numList[idx] = lastVal
                  # Remove the last element (val is now overwritten)
                  self.numList.pop()
                  # Update the map: lastVal is now at index idx
                  self.numMap[lastVal] = idx
                  # Remove val from the map
                  del self.numMap[val]
            return res

      def getRandom(self) -> int:
            # Return a random element from the list
            return random.choice(self.numList)
