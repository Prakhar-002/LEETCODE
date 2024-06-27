# //! https://github.com/Prakhar-002/LEETCODE


# Todo 📌 QUESTION NUMBER 330 

class Solution:
      def minPatches(self, nums: List[int], n: int) -> int:
            #  REACH is number up to which we can add our number and got value
            reach = 1
            i = 0
            patches = 0 

            # we have to go up to given n so we'll loop for reach until it reaches n  
            while reach <= n: 
                  # if we exceed the value present in array 
                  if i < len(nums) and nums[i] <= reach:
                        # we'll add our array value 
                        reach += nums[i]
                        i += 1
                  else:
                        # else we'll keep adding ourself to reach (N)
                        reach += reach
                        # f we add ourself mean we added a number to array hence we inc our patches count
                        patches += 1

            return patches