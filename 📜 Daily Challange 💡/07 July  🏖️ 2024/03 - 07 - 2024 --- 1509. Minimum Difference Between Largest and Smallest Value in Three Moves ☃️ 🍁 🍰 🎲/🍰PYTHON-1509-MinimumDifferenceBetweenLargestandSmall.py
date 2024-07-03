#! https://github.com/Prakhar-002/LEETCODE


# Todo 📌 QUESTION NUMBER 1509

#? ⌚ Time complexity -> O(NLogN) 👉 For sorting

#? 🧺 Space complexity -> O(1) 

import heapq

class Solution:
      def minDifference(self, nums: List[int]) -> int:
            # if length is <= 4 return 0
            # cause after removing 3 elem from our array then will be max 1 value left
            # and diff of that value tp itself is 0
            if(len(nums) <= 4): 
                  return 0

            res = float("inf")

            # sort first 
            nums.sort()

            # There will be only 4 case by which we can remove 3 elem from our array
            # we will check every case for min res
            # case are -> remove from left and right
            # left 0   right 3
            # left 1   right 2
            # left 2   right 1
            # left 3   right 0
            for left in range(4):
                  right = len(nums) - 4 + left

                  res = min(res, nums[right] - nums[left])

            return res

#----------------------------------------------------------------------------

#? ⌚ Time complexity -> O(n) 👉 Creating a heap

#? 🧺 Space complexity -> O(n) 👉 Creating a heap

class Solution:
      def minDifference(self, nums: List[int]) -> int:
            # if length is <= 4 return 0
            # cause after removing 3 elem from our array then will be max 1 value left
            # and diff of that value tp itself is 0
            if(len(nums) <= 4): 
                  return 0

            res = float("inf")

            # extract the min four from array int sorted from
            min_four = sorted(heapq.nsmallest(4, nums))
            # extract the max four from array int sorted from
            max_four = sorted(heapq.nlargest(4, nums))

            for i in range(4):
                  res = min(res, max_four[i] - min_four[i])

            return res