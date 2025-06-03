#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1298

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

import collections
from typing import List 

class Solution:
      def maxCandies(
            self,
            status: List[int],
            candies: List[int],
            keys: List[List[int]],
            containedBoxes: List[List[int]],
            initialBoxes: List[int],
      ) -> int:
            # Get the number of total boxes
            n = len(status)

            # List to check if a box can currently be opened (i.e., we have its key or it's already open)
            can_open = [status[i] == 1 for i in range(n)]

            # has_box[i] = True if we possess box i
            # used[i] = True if box i has already been opened and processed
            has_box, used = [False] * n, [False] * n

            # Queue for processing boxes we can open
            q = collections.deque()

            # Total candies collected
            ans = 0

            # Initialize the queue with boxes we already possess
            for box in initialBoxes:
                  has_box[box] = True                        # Mark that we possess this box
                  if can_open[box]:                          # If we can open it now
                        q.append(box)                        # Add to the processing queue
                        used[box] = True                     # Mark it as used
                        ans += candies[box]                 # Collect candies from it

            # Process boxes from the queue
            while len(q) > 0:
                  big_box = q.popleft()                      # Get the next box to process

                  # Process all keys found in this box
                  for key in keys[big_box]:
                        can_open[key] = True                # Now we can open the box corresponding to this key
                        if not used[key] and has_box[key]:  # If we have the box and it hasn’t been opened yet
                              q.append(key)                 # Add it to the queue
                              used[key] = True              # Mark it as used
                              ans += candies[key]           # Collect its candies

                  # Process all contained boxes found inside this box
                  for box in containedBoxes[big_box]:
                        has_box[box] = True                 # Mark that we now possess this contained box
                        if not used[box] and can_open[box]: # If it's openable and not used
                              q.append(box)                 # Add it to the queue
                              used[box] = True              # Mark it as used
                              ans += candies[box]           # Collect its candies

            # Return total candies collected after processing all accessible boxes
            return ans
