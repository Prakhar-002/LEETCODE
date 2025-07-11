#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2402

#? ⌚ Time complexity ➺ O(m * log m + m log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from heapq import heapify, heappop, heappush

class Solution:
      def mostBooked(self, n: int, meetings: list[list[int]]) -> int:
            # Min-heap for available room numbers
            available = list(range(n))
            heapify(available)

            # Min-heap of [end_time, room_number] for currently used rooms
            in_use = []

            # Count of how many meetings each room hosted
            count = [0] * n

            # Process meetings in order of start time
            for start, end in sorted(meetings):
                  # Free up rooms that are done before current meeting starts
                  while in_use and in_use[0][0] <= start:
                        _, room = heappop(in_use)
                        heappush(available, room)

                  if available:
                        # If any room is available, assign the one with smallest index
                        room = heappop(available)
                        heappush(in_use, [end, room])
                  else:
                        # All rooms are busy, delay meeting to earliest available time
                        ready_time, room = heappop(in_use)
                        new_end = ready_time + (end - start)
                        heappush(in_use, [new_end, room])

                  # Increment the usage count for this room
                  count[room] += 1

            # Return the room that handled the most meetings
            return count.index(max(count))
