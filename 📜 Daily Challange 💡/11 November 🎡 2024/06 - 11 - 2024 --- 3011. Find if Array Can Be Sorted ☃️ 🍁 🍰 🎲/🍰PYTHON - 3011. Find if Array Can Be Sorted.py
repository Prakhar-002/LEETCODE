#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3011

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def canSortArray(self, nums: List[int]) -> bool:
            # Initialize `cur_min` and `cur_max` as the first element of `nums`
            # `cur_min` and `cur_max` will keep track of the minimum and maximum values in the current "bit count" block
            cur_min, cur_max = nums[0], nums[0]

            # `prev_max` is initialized to negative infinity, which will track the maximum of the previous "bit count" block
            prev_max = float("-inf")

            # Loop through each number `n` in the array `nums`
            for n in nums:
                  # Check if the bit count (number of '1' bits in binary representation) of `n` matches `cur_min`
                  # If so, update `cur_min` and `cur_max` based on the minimum and maximum values within this "bit count" block
                  if n.bit_count() == cur_min.bit_count():
                        cur_min = min(cur_min, n)
                        cur_max = max(cur_max, n)

                  # If the bit count doesn't match, we encounter a new "bit count" block
                  else:
                        # Ensure that the minimum value of the current block is at least as large as the maximum value of the previous block
                        # If not, return False since we can't sort these blocks in ascending order
                        if cur_min < prev_max:
                              return False

                        # Update `prev_max` to the maximum value of the completed block, and reset `cur_min` and `cur_max` for the new block
                        prev_max = cur_max
                        cur_min, cur_max = n, n

            # Final check: Ensure the last block's minimum value is greater than or equal to `prev_max`
            # If so, return True, meaning the array can be "sorted" by grouping based on bit count blocks
            return cur_min >= prev_max
