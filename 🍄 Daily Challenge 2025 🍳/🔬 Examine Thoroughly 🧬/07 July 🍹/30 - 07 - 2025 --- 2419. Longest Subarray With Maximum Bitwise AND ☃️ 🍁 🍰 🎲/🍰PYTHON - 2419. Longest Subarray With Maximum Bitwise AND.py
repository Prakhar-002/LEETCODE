#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2419

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      # Intention => taking bitwise AND of two values let say n and max value in arr
      # 1. if n >  max(nums) : n & max(nums) < max(nums)
      # 2. if n == max(nums) : n & max(nums) == max(nums)
      # 3. if n >  max(nums) : n & max(nums) < max(nums)
      # so we just need to find only contiguous sequence of max elements within an array
      def longestSubarray(self, nums: List[int]) -> int:
            # to find maximum number found in the `nums` list
            target = 0
            # iterates through each number in `nums`
            for num in nums:
                  # update `target` with max of `cur num` and `target` itself
                  target = max(target, num)

            # `size` is used to keep track of the current subarray's size
            size = 0
            # `longestSubArray` is used to track the size of the longest subarray found so far
            longestSubArray = 0

            # second `for` loop again iterates through each number in `nums`
            for num in nums:
                  # cur No. `num` is == `target`, the `size` is incremented by `1` lese set to again `0`
                  size = size + 1 if num == target else 0
                  # take max of `cur size` and `longestSubArray`
                  # ensures that `longestSubArray` always holds the length of the longest contiguous subarray of `target`
                  longestSubArray = max(longestSubArray, size)

            # Returning the length of the longest such subarray
            return longestSubArray