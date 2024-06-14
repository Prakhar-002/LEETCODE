class Solution:
      def minIncrementForUnique(self, nums: List[int]) -> int:
            freq_count = [0] * (len(nums) + max(nums))

            increment = 0

            for n in nums:
                  freq_count[n] += 1

            for i in range(len(freq_count)):
                  if freq_count[i] > 1:
                        extra = freq_count[i] - 1
                        freq_count[i + 1] += extra
                        increment += extra

            return increment
