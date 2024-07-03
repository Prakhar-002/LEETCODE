#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 27

#? ⌚ Time complexity -> O(n) 👉 length of arr

#? 🧺 Space complexity -> O(1) 

class Solution:    
      def removeElement(self, nums: List[int], val: int) -> int:
            index = 0
            for i in range(len(nums)):
                  if nums[i] != val:
                        nums[index] = nums[i]
                        index += 1
            return index