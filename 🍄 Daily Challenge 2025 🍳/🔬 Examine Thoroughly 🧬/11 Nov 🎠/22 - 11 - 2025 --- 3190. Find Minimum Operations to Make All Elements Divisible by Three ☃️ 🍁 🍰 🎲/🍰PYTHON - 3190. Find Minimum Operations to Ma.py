#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3190

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def minimumOperations(self, nums: List[int]) -> int:
            # Initialize count of numbers not divisible by 3
            count = 0

            # Iterate over each number in the list
            for n in nums:
                  # Check if the number is NOT divisible by 3
                  if n % 3 != 0:
                        # Increment count if condition is met
                        count += 1

            # Return the total count of numbers not divisible by 3
            return count
