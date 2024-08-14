#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 719

#? ⌚ Time complexity ➺ O(n log n + n log(max(nums))) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from typing import List

class Solution:
      def smallestDistancePair(self, nums: List[int], k: int) -> int:
            # first sort the array
            # it ensures that all pairs will be considered in order 
            # from closest to farthest apart
            nums.sort()

            # This function takes a distance `dist` as input 
            # and counts the total number of pairs 
            # within the sorted array that have a difference 
            # less than or equal to this distance
            def getPairs(dist):
                  # count total num of pairs 
                  # with diff <= dist
                  left = 0
                  pairs = 0
                  for right in range(len(nums)):
                        # ensure we are counting pairs within the specified distance
                        while nums[right] - nums[left] > dist:
                              # and inc the left 
                              left += 1
                        # gives the number of pairs for the current `right` idx
                        pairs += right - left

                  return pairs

            # initialize the binary search 
            # to find the k-th smallest dist

            # two pointers smallest and largest distances in the sorted list
            left, right = 0, nums[len(nums) - 1]
            while left < right:
                  # `mid` is calculated as the avg of `left` and `right`
                  mid = left + ((right - left) // 2)

                  # function to counts how many pairs have a distance <= `mid`
                  pairs = getPairs(mid)

                  # if `pairs` >= `k`
                  if pairs >= k:
                        # it means the k-th smallest distance could be `mid` or smaller
                        # so we adjust `right = mid` to search the lower half
                        right = mid
                  else :
                        # Otherwise, we search the higher half by setting `left = mid + 1`
                        left = mid + 1

            return right