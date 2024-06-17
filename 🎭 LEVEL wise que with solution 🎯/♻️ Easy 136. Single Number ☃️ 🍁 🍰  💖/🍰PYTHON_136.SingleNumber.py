class Solution:
      def singleNumber(self, nums: List[int]) -> int:
            xorNum = 0

            for n in nums:
                  xorNum ^= n

            return xorNum 