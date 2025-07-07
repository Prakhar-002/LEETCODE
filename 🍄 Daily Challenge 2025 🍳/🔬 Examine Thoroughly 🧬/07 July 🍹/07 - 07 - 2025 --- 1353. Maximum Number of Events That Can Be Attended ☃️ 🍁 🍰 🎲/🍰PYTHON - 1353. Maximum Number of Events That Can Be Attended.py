#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1353

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

import heapq  # For using min-heap
from typing import List

class Solution:
      def maxEvents(self, events: List[List[int]]) -> int:
            # Step 1: Sort all events based on their start day
            events.sort()

            min_heap = []        # Min-heap to store the end days of active events
            n = len(events)      # Total number of events
            curDay = 1           # Current day we are considering
            i = 0                # Pointer to track the current event from the sorted list
            ans = 0              # To count the number of events attended

            # Step 2: Continue processing while there are unprocessed events or active events in the heap
            while i < n or min_heap:

                  # Fetch the current event's start and end day if we haven't processed all events
                  if i < n:
                        start = events[i][0]
                        end = events[i][1]

                  # If there are no active events in the heap and the next event starts in the future,
                  # fast forward to that future day
                  if not min_heap and start > curDay:
                        curDay = start

                  # Step 3: Add all events that start on or before the current day to the min-heap
                  while i < n and events[i][0] <= curDay:
                        # We only store the end day because we use the heap to prioritize earliest end day
                        heapq.heappush(min_heap, events[i][1])
                        i += 1

                  # Step 4: Remove all events from the heap that have already expired (end before today)
                  while min_heap and min_heap[0] < curDay:
                        heapq.heappop(min_heap)

                  # Step 5: Attend one event (the one with the earliest end day), if available
                  if min_heap:
                        heapq.heappop(min_heap)  # Attend this event
                        ans += 1                 # Increment attended event count
                        curDay += 1              # Move to the next day

            # Step 6: Return the total number of events we could attend
            return ans
