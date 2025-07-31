#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 898

#? ⌚ Time complexity ➺ O(N log W) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(N log W)

class Solution(object):
      def subarrayBitwiseORs(self, A):
            # Set to store all unique OR results from subarrays
            ans = set()

            # Set to store all OR results ending at the current index
            cur = {0}

            # Iterate through each number in the array
            for x in A:
                  # For each previous OR value, compute OR with current number
                  # Add the current number as a new starting subarray as well
                  cur = {x | y for y in cur} | {x}

                  # Add all current OR results to the answer set
                  ans |= cur

            # The number of unique results is the answer
            return len(ans)
