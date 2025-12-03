#! https://github.com/Prakhar-002/LEETCODE

class Solution:
      def firstMissingPositive(self, nums: List[int]) -> int:
            n = len(nums)
            for i in range(n):
                  if nums[i] < 0:
                        # If number is -ve make it 0
                        nums[i] = 0 

            for i in range(n):
                  # Take the abs value of every elem of nums
                  abs_val = abs(nums[i])
                  # If it is btw 1 to len(nums) means in range of possible solution 
                  if 1 <= abs_val <= n:
                        # Make the number -ve present at val's original position 
                        # Ex- [1, 2, 3]  => actual position is at index val - 1 => 1 : 0, 2 : 1, 3 : 2
                        # We will make the value -ve for ensuring value present in our array
                        if nums[abs_val - 1] > 0:
                              nums[abs_val - 1] *= -1
                        # If it's 0 then assign it with -(len(nums) + 1)
                        elif nums[abs_val - 1] == 0:
                              nums[abs_val - 1] = -1 * (n + 1)

            for i in range(1, n + 1):
                  # check if number is not exist in array
                  if nums[i - 1] >= 0:
                        return i

            return n + 1