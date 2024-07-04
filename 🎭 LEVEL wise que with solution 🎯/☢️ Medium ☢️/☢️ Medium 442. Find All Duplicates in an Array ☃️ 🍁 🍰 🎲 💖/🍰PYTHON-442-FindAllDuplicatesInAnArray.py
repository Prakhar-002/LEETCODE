#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 442

#? ⌚ Time complexity -> O(n) 👉 length of nums

#? 🧺 Space complexity -> O(1) 

class Solution:
      def findDuplicates(self, nums: List[int]) -> List[int]:
            duplicates = []

            for n in nums:
                  # take the abs value 
                  n = abs(n)

                  # it will be -ve if it is allReady present before 
                  if nums[n - 1] < 0:
                        # so append it in our ans
                        duplicates.append(n)

                  # else make it's original position negative
                  # original position will be          [1, 2, 3, . . . . . n] 
                  # index for value n will be n - 1    [0, 1, 2, . . . n - 1]
                  nums[n - 1] = -nums[n - 1]

            return duplicates