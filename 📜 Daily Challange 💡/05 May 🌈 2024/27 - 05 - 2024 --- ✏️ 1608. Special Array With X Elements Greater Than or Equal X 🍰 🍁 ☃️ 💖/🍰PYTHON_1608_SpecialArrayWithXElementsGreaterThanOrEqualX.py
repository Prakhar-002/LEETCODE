#! https://github.com/Prakhar-002/LEETCODE


#Todo 📌 QUESTION NUMBER 1608 

class Solution:
      def specialArray(self, nums: List[int]) -> int:
            countNo = [0] * (len(nums) + 1)

            for el in nums:
                  countNo[min(el, len(nums))] += 1;

            total_right = 0

            for i in reversed(range(len(nums) + 1)):
                  total_right += countNo[i]

                  if i == total_right:
                        return total_right
                  
            return -1