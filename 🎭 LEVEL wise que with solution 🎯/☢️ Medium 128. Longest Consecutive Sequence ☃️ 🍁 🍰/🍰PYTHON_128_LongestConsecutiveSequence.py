
#! https://github.com/Prakhar-002/LEETCODE


# Todo 📌 QUESTION NUMBER 128

#? ⌚ Time complexity -> O(n) 👉 length of nums 

#? 🧺 Space complexity -> O(n) 👉 using a set of length n

class Solution:
      def longestConsecutive(self, nums: List[int]) -> int:
            numsSet = set(nums)

            longestConsecutive = 0

            for n in nums:
                  # check if our sequence is starting from n 
                  if (n - 1) not in numsSet:
                        length = 0
                        # we'll check our sequence staring from n 
                        while (n + length) in numsSet:
                              # check the sequence
                              length += 1

                        longestConsecutive = max(longestConsecutive, length)

            return longestConsecutive

# ------------------------------------------------------------

# * This is wrong ans but better runTime cause we used sorting in our method which take NLogN

#? ⌚ Time complexity -> O(NLogN) 👉 length of nums 

#? 🧺 Space complexity -> O(1) 

class Solution:
      def longestConsecutive(self, nums: List[int]) -> int:
            n = len(nums)

            if n == 0 or n == 1:
                  return n

            #  sort first
            nums.sort()
            i, count, longestConsecutive = 1, 0, 0

            while(i < n):
                  #  for [0, 1, 1, 2] ans is 3
                  if nums[i] - nums[i - 1] <= 0:
                        # increase our count by difference so it can be 0 or 1
                        count += nums[i] - nums[i - 1]
                  else :
                        # take the max
                        longestConsecutive = max(longestConsecutive, count)
                        count = 0
                  i += 1 

            return max(longestConsecutive, count) + 1
