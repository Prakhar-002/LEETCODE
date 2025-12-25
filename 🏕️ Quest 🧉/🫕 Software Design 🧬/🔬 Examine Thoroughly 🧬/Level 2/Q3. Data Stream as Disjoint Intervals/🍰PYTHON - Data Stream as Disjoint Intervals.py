#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest Software Design L2 Q3

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from sortedcontainers import SortedDict 

class SummaryRanges:
      def __init__(self):
            # TreeMap to store all added numbers in sorted order
            # SortedDict keeps keys sorted, so we can iterate in increasing order
            self.TreeMap = SortedDict()

      def addNum(self, value: int) -> None: # O(log n)
            # Add the number to the TreeMap (key = value, value = True)
            # This ensures we have all unique numbers in sorted order
            self.TreeMap[value] = True

      def getIntervals(self) -> List[List[int]]: # O(n)
            # List to store the resulting intervals [start, end]
            res = []

            # Iterate over each number in the TreeMap (in sorted order)
            for n in self.TreeMap:
                  # If res is not empty and the current number is consecutive to the last interval
                  if res and res[-1][1] + 1 == n:
                        # Extend the last interval’s end to include this number
                        res[-1][1] = n 
                  else:
                        # Otherwise, start a new interval [n, n]
                        res.append([n, n])

            # Return the list of merged intervals
            return res
