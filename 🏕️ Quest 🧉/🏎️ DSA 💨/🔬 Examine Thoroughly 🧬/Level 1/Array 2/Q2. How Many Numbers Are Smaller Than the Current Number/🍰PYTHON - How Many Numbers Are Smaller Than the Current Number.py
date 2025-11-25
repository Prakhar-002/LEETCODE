#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L1.2 Q2

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
            # Create a sorted copy of nums
            sorted_nums = sorted(nums)
            # Dictionary to store the rank (count of smaller numbers) of each unique number
            rank = {}

            # Assign rank to each number if not already assigned
            for i, num in enumerate(sorted_nums):
                  if num not in rank:
                        rank[num] = i

            # Build the result list by mapping each number in nums to its rank
            return [rank[num] for num in nums]

#!---------------------------------------------------------------------------- 

from collections import defaultdict

class Solution:
      def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
            num_i = defaultdict(list)

            for i, n in enumerate(nums):
                  num_i[n].append(i)

            print(num_i)

            res = [0] * len(nums)

            nums.sort()

            i = 0

            while i < len(nums):
                  n = nums[i]
                  for val in num_i[n]:
                        res[val] = i 

                  while nums[i] == n:
                        i += 1

            return res