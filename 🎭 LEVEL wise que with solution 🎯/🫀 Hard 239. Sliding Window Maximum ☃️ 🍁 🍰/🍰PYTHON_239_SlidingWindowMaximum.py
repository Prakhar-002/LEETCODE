# ! https://github.com/Prakhar-002/LEETCODE

from collections import deque

class Solution:
      def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
            left = right = 0
            decDeq = deque()
            maxWindow = []

            while right < len(nums):
                  while decDeq and nums[decDeq[-1]] < nums[right]:
                        decDeq.pop()

                  decDeq.append(right)

                  if left > decDeq[0]:
                        decDeq.popleft()

                  if (right + left) >= k:
                        maxWindow.append(nums[decDeq[0]])
                        left += 1

                  right += 1

            return maxWindow