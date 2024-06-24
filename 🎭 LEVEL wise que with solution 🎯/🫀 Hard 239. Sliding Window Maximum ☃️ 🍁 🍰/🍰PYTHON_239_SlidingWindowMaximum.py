# ! https:#github.com/Prakhar-002/LEETCODE

from collections import deque

class Solution:
      def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
            left = 0
            # A deque that stores the index of nums
            decDeq = deque() 
            maxWindow = []

            # Traverse the whole list 
            for right in range(len(nums)):
                  # Whenever we get a big value well pop smaller value from our queue
                  while decDeq and nums[decDeq[-1]] < nums[right]:
                        decDeq.pop()

                  # append the value if we get a small value cause we've to maintain the decreasing queue
                  decDeq.append(right)

                  # if our window get bigger than k 
                  # cause we are storing index so our left pointer will be out of bound from our window
                  if left > decDeq[0]:
                        # so we'll pop from left
                        decDeq.popleft()

                  # size should at least k so size will (right pointer + 1)
                  if (right + 1) >= k:
                        # we'll store the value that is most left to our q in our array
                        maxWindow.append(nums[decDeq[0]])
                        # once we take one window we'll update our window by left++
                        left += 1

            return maxWindow