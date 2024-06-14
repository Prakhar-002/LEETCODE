class Solution:
      def minIncrementForUnique(self, nums: List[int]) -> int:
            freqCount = Counter(nums)

            increment = 0

            for i in range (len(nums) + max(nums)):
                  if freqCount[i] > 1:
                        extra = freqCount[i] - 1
                        freqCount[i + 1] += extra
                        increment += extra

            return increment