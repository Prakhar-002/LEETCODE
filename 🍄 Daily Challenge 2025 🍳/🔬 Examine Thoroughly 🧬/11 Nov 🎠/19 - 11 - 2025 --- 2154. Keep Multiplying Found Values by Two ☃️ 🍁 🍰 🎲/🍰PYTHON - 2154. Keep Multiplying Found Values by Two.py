#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2154

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def findFinalValue(self, nums: List[int], original: int) -> int:
            # Sort the array to process in ascending order
            nums.sort()

            # Iterate through each number in the sorted array
            for n in nums:
                  # If the current number matches the 'original' value,
                  # multiply 'original' by 2 and continue checking with new value
                  if original == n:
                        original *= 2

            # Return the final value of 'original' after all possible doublings
            return original
