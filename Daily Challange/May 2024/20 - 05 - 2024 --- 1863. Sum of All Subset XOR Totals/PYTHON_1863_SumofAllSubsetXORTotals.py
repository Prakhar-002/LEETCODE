class Solution:
      def subsetXORSum(self, nums: List[int]) -> int:
            xor_sum = 0

            for n in nums :
                  xor_sum = xor_sum | n

            return xor_sum * 2 ** (len(nums) - 1) 