class Solution:
      def minIncrementForUnique(self, nums: List[int]) -> int:
            nums.sort()

            increment = 0

            for i in range(1, len(nums)):
                  if nums[i - 1] >= nums[i]:
                        # inc by 1 and the diff of adjacent value 
                        increment += 1 + nums[i - 1] - nums[i]
                        # make right value = left + 1
                        nums[i] = nums[i - 1] + 1

            return increment