#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest Software Design L5 Q2

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from bisect import bisect_left

class RangeFreqQuery:
      def __init__(self, arr):
            """
            Preprocess: value → sorted list of indices
            Time: O(N), Space: O(N)
            """
            self.map = {}
            for i, val in enumerate(arr):
                  if val not in self.map:
                        self.map[val] = []
                  self.map[val].append(i)

      def query(self, left, right, value):
            """
            Count occurrences of value in arr[left:right+1]
            Time: O(log N) via binary search
            """
            if value not in self.map:
                  return 0
            
            indices = self.map[value]
            # bisect_left: first index >= left
            start = bisect.bisect_left(indices, left)
            # bisect_left: first index >= right+1 (exclusive)
            end = bisect.bisect_left(indices, right + 1)
            return end - start
