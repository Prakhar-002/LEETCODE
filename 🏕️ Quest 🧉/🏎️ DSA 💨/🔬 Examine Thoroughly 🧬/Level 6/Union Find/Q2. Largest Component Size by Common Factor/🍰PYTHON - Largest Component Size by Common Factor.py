#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L6.1 Q2

#? ⌚ Time complexity ➺ O(N × √M × α(M) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(m)  -> M = max(nums), α = union func

from typing import List
from math import sqrt, floor
from collections import defaultdict

class Solution:
      def find(self, x, parent):
            # Path compression in Union-Find: find root parent of x
            if parent[x] == -1:
                  return x  # x is root
            parent[x] = self.find(parent[x], parent)  # Compress path
            return parent[x]

      def union(self, x, y, parent):
            # Union by arbitrary linking (simple version)
            xp = self.find(x, parent)  # Find root of x
            yp = self.find(y, parent)  # Find root of y
            if xp != yp:
                  parent[yp] = xp  # Link y's root to x's root

      def largestComponentSize(self, nums: List[int]) -> int:
            max_num = max(nums)  # Maximum value in nums
            parent = [-1] * (max_num + 1)  # Parent array for Union-Find

            # Step 1: Connect numbers that share common factors
            for num in nums:
                  # Connect num to all its factors
                  for k in range(2, floor(sqrt(num)) + 1):
                        if num % k == 0:
                              # Union with divisor k and quotient num//k
                              self.union(num, k, parent)
                              self.union(num, num // k, parent)

            # Step 2: Count size of each connected component
            map = defaultdict(int)  # root → component size
            count = 0

            for num in nums:
                  p = self.find(num, parent)  # Find root of each num
                  map[p] += 1            # Increment component size
                  count = max(count, map[p])  # Track maximum

            return count
