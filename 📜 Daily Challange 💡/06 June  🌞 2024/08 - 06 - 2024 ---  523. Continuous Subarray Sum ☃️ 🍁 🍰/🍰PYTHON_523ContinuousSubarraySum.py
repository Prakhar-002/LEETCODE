# //! https://github.com/Prakhar-002/LEETCODE


#Todo 📌 QUESTION NUMBER 523 

class Solution:
      def checkSubarraySum(self, nums: List[int], k: int) -> bool:
            # Initialize Map with 0 to -1
            reminder = {0: -1}

            total = 0

            # Iterate whole array
            for idx, num in enumerate(nums):
                  # Take total sum of el
                  total += num 

                  # FInd rem 
                  rem = total % k

                  # If our rem not exist in map assign it with index
                  if rem not in reminder:
                        reminder[rem] = idx

                  # if our index - value of rem is greater than 1 means >= 2 return true
                  elif idx - reminder[rem] > 1:
                        return True

            return False
