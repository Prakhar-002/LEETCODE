#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3542

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n) 

class Solution:
      def minOperations(self, nums: List[int]) -> int:
            stack = []   # Initialize an empty stack to track the "active" numbers
            res = 0      # Result variable to count the required number of operations

            # Iterate over each number in the input list
            for n in nums:
                  # Pop elements from stack while top is greater than current number 'n'
                  while stack and stack[-1] > n:
                        stack.pop()    # Remove elements strictly greater than n

                  # If current number is positive and either stack is empty or top differs from n
                  if n > 0 and (not stack or stack[-1] != n):
                        res += 1       # We need an operation to add this new "layer"
                        stack.append(n) # Push the current number onto the stack

            return res   # Return the total count of operations needed
