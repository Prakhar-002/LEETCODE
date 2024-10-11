#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1942

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(times)

#? 🧺 Space complexity ➺ O(n)

import heapq

class Solution:
      # Function to determine the smallest chair the targetFriend will sit on
      def smallestChair(self, times: List[List[int]], targetFriend: int) -> int:
            # Create a list of tuples where each tuple contains (arrival time, leaving time, index of friend)
            times = [(time[0], time[1], idx) for idx, time in enumerate(times)]

            # Sort the times by arrival time to process the friends in order of arrival
            times.sort()

            # This heap will store the chairs currently in use as (leave time, chair)
            used_chair = []  
            # List of available chairs (sorted by index)
            available_chair = [idx for idx in range(len(times))]  

            for arrivalTime, leavingTime, idx in times:
                  # Release all chairs for friends who have already left before the current friend's arrival
                  while used_chair and used_chair[0][0] <= arrivalTime:
                        # Remove the chair of the friend who left
                        leave, chair = heapq.heappop(used_chair)
                        # Add the chair back to the available chairs heap  
                        heapq.heappush(available_chair, chair)  

                  # Assign the smallest available chair to the current friend
                  chair = heapq.heappop(available_chair)
                  # Push the current chair along with the friend's leaving time into the used_chair heap
                  heapq.heappush(used_chair, (leavingTime, chair))

                  # If the current friend is the targetFriend, return the chair assigned to them
                  if idx == targetFriend:
                        return chair
