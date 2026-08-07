#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3731

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def findMissingElements(self, nums: List[int]) -> List[int]:
            # Sort the array so that consecutive numbers become adjacent
            nums.sort()

            # This list will store all missing numbers
            res = []

            # Traverse every adjacent pair
            for i in range(len(nums) - 1): 

                  # Current number
                  cur = nums[i]

                  # Next number
                  nxt = nums[i + 1]

                  # If there is a gap between cur and nxt,
                  # add every missing number into the result
                  while cur + 1 != nxt:
                        res.append(cur + 1)
                        cur += 1

            # Return all missing numbers
            return res