#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3495

#? ⌚ Time complexity ➺ O(n log R)  👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      # Get the sum for numbers from 1 to num, based on grouping logic
      def get(self, num: int) -> int:
            i = 1
            base = 1
            cnt = 0
            # ------ Loop over groups of range powers of 2 (base, base*2-1)
            while base <= num:
                  # ------ For each group, add (i+1)//2 * (number of elements in group up to 'num')
                  cnt += ((i + 1) // 2) * (min(base * 2 - 1, num) - base + 1)
                  i += 1
                  base *= 2

            return cnt

      # Apply multiple queries: Sum half the difference of get results in each query range
      def minOperations(self, queries: List[List[int]]) -> int:
            res = 0
            # ------ For each query, use the custom prefix sum logic
            for q in queries:
                  res += (self.get(q[1]) - self.get(q[0] - 1) + 1) // 2

            return res
