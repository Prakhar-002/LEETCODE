#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L7.3 Q1

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n) 

from typing import List

class NumArray:
      def __init__(self, nums: List[int]):
            # Initialize segment tree for range sum queries
            self.n = len(nums)                           # Array length
            self.segmentTree = [0] * (4 * self.n)        # 4n space for tree
            self.buildSegmentTree(0, 0, self.n - 1, nums) # Build from root

      def buildSegmentTree(self, i: int, l: int, r: int, nums: List[int]) -> None:
            """
            Recursively build segment tree.
            i: tree index, l/r: array range covered by node i
            """
            # Leaf node stores single element
            if l == r:
                  self.segmentTree[i] = nums[l]
                  return 

            # Internal node: split range
            mid = l + (r - l) // 2
            self.buildSegmentTree(2*i+1, l, mid, nums)      # Left child
            self.buildSegmentTree(2*i+2, mid + 1, r, nums)  # Right child

            # Parent = sum of children
            self.segmentTree[i] = self.segmentTree[2*i + 1] + self.segmentTree[2*i + 2]

      def updateSegmentTree(self, index: int, val: int, i: int, l: int, r: int) -> None:
            """
            Update leaf at index and propagate up to root.
            """
            # Reached leaf: update value
            if l == r:
                  self.segmentTree[i] = val
                  return

            # Traverse to correct child
            mid = l + (r - l) // 2
            if index <= mid:
                  self.updateSegmentTree(index, val, 2*i + 1, l, mid)     # Left
            else:
                  self.updateSegmentTree(index, val, 2*i + 2, mid + 1, r) # Right

            # Update current node from children
            self.segmentTree[i] = self.segmentTree[2*i + 1] + self.segmentTree[2*i + 2]

      def querySegmentTree(self, start: int, end: int, i: int, l: int, r: int) -> int:
            """
            Range sum query [start,end].
            Returns 0 (neutral) for no overlap.
            """
            # No overlap with query range
            if l > end or r < start:
                  return 0

            # Total overlap: return stored sum
            if l >= start and r <= end:
                  return self.segmentTree[i]

            # Partial overlap: query both children
            mid = l + (r - l) // 2
            left_sum = self.querySegmentTree(start, end, 2*i + 1, l, mid)
            right_sum = self.querySegmentTree(start, end, 2*i + 2, mid + 1, r)
            return left_sum + right_sum

      def update(self, index: int, val: int) -> None:
            # Public update: start from root (i=0, range 0 to n-1)
            self.updateSegmentTree(index, val, 0, 0, self.n - 1)

      def sumRange(self, left: int, right: int) -> int:
            # Public query: sum[left,right] from root
            return self.querySegmentTree(left, right, 0, 0, self.n - 1)
