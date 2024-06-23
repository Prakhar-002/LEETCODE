#! https://github.com/Prakhar-002/LEETCODE

class Solution:
      def minIncrementForUnique(self, nums: List[int]) -> int:
            #  Make a array of length = length of nums and the max value present in nums array
            freq_count = [0] * (len(nums) + max(nums))

            increment = 0 

            for n in nums:
                  # Count freq of each element
                  freq_count[n] += 1

            for i in range(len(freq_count)):
                  # Check if freq of elem is > 1 
                  if freq_count[i] > 1:
                        # Assign freq = 1 and take out the extra one
                        extra = freq_count[i] - 1
                        # add extra freq to next index (for making array unique)
                        freq_count[i + 1] += extra
                        # add extra to our increment
                        increment += extra

            return increment
