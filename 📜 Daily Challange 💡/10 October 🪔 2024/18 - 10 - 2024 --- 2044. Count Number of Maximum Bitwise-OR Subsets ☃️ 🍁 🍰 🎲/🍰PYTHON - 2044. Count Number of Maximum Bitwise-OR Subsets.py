#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2044

#? ⌚ Time complexity ➺ O(2^n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def countMaxOrSubsets(self, nums: List[int]) -> int:
            # Variable to store the maximum OR value
            max_or = 0

            # Compute the OR value for the entire array
            for num in nums:
                  max_or |= num

            # Variable to store the count of subsets with OR equal to max_or
            res = 0

            # Depth-first search (DFS) helper function
            def dfs(i, cur_or):
                  nonlocal res, max_or

                  # Base case: if we've considered all elements
                  if i == len(nums):
                        # Increment the result if current OR equals the max OR
                        res += 1 if cur_or == max_or else 0
                        return

                  # Recursively explore two cases: skipping the current element
                  dfs(i + 1, cur_or)

                  # Including the current element in the OR operation
                  dfs(i + 1, cur_or | nums[i])

            # Start the DFS from the 0th index with an OR value of 0
            dfs(0, 0)
            return res

#!-------------------------------------------------------------------------

#? ⌚ Time complexity ➺ O(n * max_or) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n * max_or)

class Solution:
      def countMaxOrSubsets(self, nums: List[int]) -> int:
            # Variable to store the maximum OR value for the entire array
            max_or = 0

            # Compute the OR for all elements in the array
            for num in nums:
                  max_or |= num

            # Initialize a cache to store intermediate results
            # Cache size: len(nums) x (max_or + 1), initialized to -1
            cache = [[-1] * (max_or + 1) for _ in range(len(nums))]

            # Depth-first search (DFS) helper function
            def dfs(i, cur_or):
                  nonlocal max_or

                  # Base case: if all elements are considered
                  if i == len(nums):
                        # Return 1 if the current OR equals max OR, otherwise return 0
                        return 1 if cur_or == max_or else 0

                  # Check if result is already cached
                  if cache[i][cur_or] != -1:
                        return cache[i][cur_or]

                  # Recursively compute two cases:
                  # 1. Skip the current element
                  # 2. Include the current element and update the OR value
                  cache[i][cur_or] = (
                        dfs(i + 1, cur_or)  # Skip current element
                        +
                        dfs(i + 1, cur_or | nums[i])  # Include current element
                  )

                  # Return the cached result for the current state
                  return cache[i][cur_or]

            # Start the DFS from the 0th index with an OR value of 0
            return dfs(0, 0)
