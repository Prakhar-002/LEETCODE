#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2134

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      # we have to minimize the swap for grouping all 1
      def minSwaps(self, nums):
            # we will go by calculating number of 1 in nums
            # that will be max window of 1 we can have
            totalOnes = sum(num == 1 for num in nums)

            # find window to length totalOnes and have the max 1 in that
            """
            left -> for the window's left pointer
            windowOne -> for counting current window one
            maxWindowOne -> for max one in all window
            """

            left = 0
            windowOne = 0
            maxWindowOne = 0
            n = len(nums)

            # we traverse twice in our window for maintaining circular array
            for right in range(2 * n):
                  # if we have '1' at 'right' pointer then add in our current windowOne
                  if nums[right % n] == 1:
                        windowOne += 1

                  # if our window exceed the totalOne length then increment the left pointer
                  if (right - left + 1) > totalOnes:
                        # update the windowOne cause we're shrinking our window
                        # cause our 'nums[left]' only contain '1' or '0'
                        # so just subtract the 'nums[left]' from our windowOne
                        windowOne -= nums[left % n]
                        # also increment the left pointer for sliding window
                        left += 1

                  # take the max of this window's one
                  maxWindowOne = max(maxWindowOne, windowOne)

            # we have to swap '0' for binding all 1 together
            # so the number of '0' we will swap will
            # total one - max one in our window
            return totalOnes - maxWindowOne