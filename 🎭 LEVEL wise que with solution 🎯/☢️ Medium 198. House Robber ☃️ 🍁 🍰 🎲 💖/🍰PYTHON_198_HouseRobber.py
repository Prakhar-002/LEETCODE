class Solution:
      def rob(self, nums: List[int]) -> int:
            robOne, roBTwo = 0, 0

            # ? [firstSum, secSum, n, n + 1 ...] 
            for n in nums:
                  robOne, roBTwo = roBTwo, max(roBTwo, n + robOne)

            return max(robOne, roBTwo)