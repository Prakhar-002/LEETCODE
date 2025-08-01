#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2293

#? ⌚ Time complexity ➺ O(n * 2) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def minMaxGame(self, nums: List[int]) -> int:
            # Keep reducing the array until only one element is left
            while len(nums) > 1:
                  # Create a new array to store half-sized results
                  newNums = [0] * (len(nums) // 2)

                  # Iterate through each pair in nums
                  for i in range(len(nums) // 2):
                        if i % 2 == 0:
                              # If index is even, take min of the pair
                              newNums[i] = min(nums[2*i], nums[2*i + 1])
                        else:
                              # If index is odd, take max of the pair
                              newNums[i] = max(nums[2*i], nums[2*i + 1])

                  # Update nums to the reduced array
                  nums = newNums

            # The remaining element is the answer
            return nums[0]
