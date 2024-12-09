#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3125

#? ⌚ Time complexity ➺ O(n + q) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)  👉🏻 q = len(queries)

from typing import List

class Solution:
      def isArraySpecial(self, nums: List[int], queries: List[List[int]]) -> List[bool]:
            n = len(nums)  # Length of the array
            prev_parity = nums[0] & 1  # Parity of the first element
            consecutive_same_parity = [0] * n  # Tracks consecutive elements with the same parity
            consecutive_count = 0  # Counter for consecutive elements with the same parity

            # Step 1: Precompute consecutive parity information
            for i in range(n):
                  current_parity = nums[i] & 1
                  if current_parity == prev_parity:
                        consecutive_count += 1
                  consecutive_same_parity[i] = consecutive_count
                  prev_parity = current_parity

            # Step 2: Process each query
            num_queries = len(queries)  # Number of queries
            results = [False] * num_queries  # Initialize results for each query

            for i, (start_index, end_index) in enumerate(queries):
                  results[i] = (consecutive_same_parity[start_index] == consecutive_same_parity[end_index])

            return results  # Return the results for all queries
