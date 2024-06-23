# https://github.com/Prakhar-002/LEETCODE

from collections import deque

class Solution:
      def longestSubarray(self, nums: List[int], limit: int) -> int:
            # Increasing deq which will max at first position of an subArray
            incDeq = deque()
            # Decreasing deq which will min at first position of an subArray
            decDeq = deque()
            left = 0
            subArray = 0
            for right in range(len(nums)):
                  # cause we have to make this deq increasing so we'll remove if last elem is
                  # greater than upcoming elem
                  # cause this deq will store max at first position
                  while incDeq and incDeq[-1] > nums[right]:
                        incDeq.pop()
                  # cause we have to make this deq decreasing so we'll remove if last elem is
                  # less than upcoming elem
                  # cause this deq will store min at first position
                  while decDeq and decDeq[-1] < nums[right]:
                        decDeq.pop()

                  # simply add the coming elem in both deq in last of deq
                  incDeq.append(nums[right])
                  decDeq.append(nums[right])

                  # If condition is not true then we'll shift out left pointers
                  while decDeq[0] - incDeq[0] > limit:
                        # if we update our left pointer we have to remove left pointer elem from both
                        # deque
                        # if left pointer value is present in decDeq remove it
                        if decDeq[0] == nums[left]:
                              decDeq.popleft()
                        # if left pointer value is present in incDeq remove it
                        if incDeq[0] == nums[left]:
                              incDeq.popleft()
                        # finally update our left pointer
                        left += 1
                  # Take the max of subArray and (r - l + 1)
                  subArray = max(subArray, right - left + 1)
            return subArray