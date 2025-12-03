#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1590

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def minSubarray(self, nums: List[int], p: int) -> int:
            # Calculates the total sum of elements in the `nums` list
            total = sum(nums)
            # remainder when `total` is divided by `p`
            remain = total % p

            # If `remain` is `0`, sum is already divisible by `p`
            if remain == 0:
                  # no elements need to be removed 
                  return 0

            # keep track of the minimum subarray length found
            subArrLen = len(nums)
            # used in calculating the dynamic prefix sums
            cur_sum = 0

            # dictionary to map remainders of prefix sums to their corresponding indices
            # `{0: -1}` to handle cases where a prefix sum is exactly divisible by `p`
            remainToIdx = { 0: -1 }

            for i, num in enumerate(nums):
                  # Updated with the addition of the current number, `% p`
                  cur_sum = (cur_sum + num) % p
                  # Calculates a modified prefix sum needed to find 
                  # a matching subarray whose sum's remainder is `remain`
                  prefix = (cur_sum - remain + p) % p

                  # Checks if `prefix` is in `remainToIdx`. If it is
                  if prefix in remainToIdx:
                        # Calculates length of current subarray that ends at current index
                        # and whose sum's remainder equals to what's required (`remain`)
                        length = i - remainToIdx[prefix]
                        # Updates the (`subArrLen`) if a shorter valid subarray is found
                        subArrLen = min(subArrLen, length)

                  # The current `cur_sum` is mapped to the current index in `remainToIdx`
                  remainToIdx[cur_sum] = i

            # if `subArrLen` remains equal to the length of `nums`, 
            # it means no valid subarray was found, and thus `-1`
            # Otherwise, it returns the length of the minimum subarray found
            return -1 if subArrLen == len(nums) else subArrLen