# https://github.com/Prakhar-002/LEETCODE

#? Time complexity -> O(n)

#? Space complexity -> O(1)

class Solution:
      def minKBitFlips(self, nums: List[int], k: int) -> int:
            # Taking a variable that tell us the window 
            cur_window_flips = 0
            flips = 0

            # Going through array
            for i in range(len(nums)):
                  # Step 2
                  # first condition is that we have a window of k length
                  # 2nd we check if we had flipped our window cause whenever we flip we assign 2 to our array at that index 
                  if i - k >= 0 and nums[i - k] == 2:
                        cur_window_flips -= 1

                  # Step 1
                  # if nums[i] (either 0 or 1) + how many flips we did in our cur window
                  # we mod by to cause the value will either 0 or 1 
                  # odd time flips give opp value
                  # even time flips gives same value
                  if(nums[i] + cur_window_flips) % 2 == 0:
                        # if we do not left with window of length k to flip we'll return -1
                        if i + k > len(nums):
                              return -1

                        # total flip will 1
                        flips += 1
                        # this window will inc by 1 
                        cur_window_flips += 1
                        # we modify our arr cause we have to check for window
                        nums[i] = 2

            return flips

# ---------------------Using queue----------------------------------

#? Time complexity -> O(n)

#? Space complexity -> O(k)

from collections import deque

class Solution:
      def minKBitFlips(self, nums: List[int], k: int) -> int:
            # We will store the index 
            q = deque()
            flips = 0

            for i in range(len(nums)):
                  # Step 2 
                  # q should not empty and length of q should be k 
                  # Ex q = [0, 1, 2, 3]
                  #                  i   -> pointer
                  # so whatever we have at 0 in queue will be the popped  
                  while q and i > q[0] + k - 1:
                        q.popleft()

                  if (nums[i] + len(q)) % 2 == 0:
                        # if we do not left with window of length k to flip we'll return -1
                        if i + k > len(nums):
                              return -1

                        # +1 flips every time we flips
                        flips += 1
                        # In the queue we'll store where we had flipped
                        q.append(i)

            return flips