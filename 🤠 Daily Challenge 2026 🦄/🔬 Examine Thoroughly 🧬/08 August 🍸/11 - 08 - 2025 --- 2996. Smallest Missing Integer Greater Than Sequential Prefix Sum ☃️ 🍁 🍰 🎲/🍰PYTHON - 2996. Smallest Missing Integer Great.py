#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2996

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n) 

class Solution:
      def missingInteger(self, nums: list[int]) -> int:
            # Create a set of all elements in nums for O(1) lookup time
            nums_set = set(nums)

            # Initialize the sequential sum with the first element
            seq = nums[0]

            # Sum elements in the longest sequential prefix (where nums[j] == nums[j - 1] + 1)
            for j in range(1, len(nums)):
                  if nums[j] == nums[j - 1] + 1:
                        seq += nums[j]
                  else:
                        break

            # Find the smallest integer >= seq that is not in the array
            while seq in nums_set:
                  seq += 1

            return seq