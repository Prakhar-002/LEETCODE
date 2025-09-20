#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3508

#? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(memoryLimit)

#? 🧺 Space complexity ➺ O(n)

from collections import deque, defaultdict
import bisect

class Router: 

      # O(1)
      def __init__(self, memoryLimit: int):
            self.seen = set()                         # Tracks packets seen (source, dest, timestamp)
            self.memoryLimit = memoryLimit            # Maximum number of packets the router stores
            self.router = deque()                      # Queue to maintain order of packets
            self.destStamps = defaultdict(list)       # Maps destination to list of timestamps (in sorted order)
            self.forIdx = defaultdict(int)            # Counts how many packets have been forwarded per destination

      # O(1)
      def addPacket(self, source: int, destination: int, timestamp: int) -> bool:
            if (source, destination, timestamp) in self.seen:
                  return False                         # Packet already present; do not add

            # Evict oldest packet if memory limit reached
            if len(self.router) == self.memoryLimit:
                  s, d, t = self.router.popleft()
                  self.seen.remove((s, d, t))
                  self.forIdx[d] += 1                 # Increment forwarded packet count for evicted destination

            # Add new packet
            self.router.append([source, destination, timestamp])
            self.seen.add((source, destination, timestamp))
            self.destStamps[destination].append(timestamp)

            return True

      # O(1)
      def forwardPacket(self):
            if not self.router:
                  return []                          # Return empty if no packets

            s, d, t = self.router.popleft()
            self.seen.remove((s, d, t))
            self.forIdx[d] += 1                     # Mark this destination packet as forwarded

            return [s, d, t]

      # O(log n)
      def getCount(self, destination: int, startTime: int, endTime: int) -> int:
            if destination not in self.destStamps:
                  return 0                          # No packets for destination

            timestamps = self.destStamps[destination]
            start_idx = self.forIdx[destination]    # Skip forwarded packets

            # Use binary search to find relevant time boundaries
            left = bisect.bisect_left(timestamps, startTime, start_idx)
            right = bisect.bisect_right(timestamps, endTime, start_idx)

            return right - left                      # Count of matching packets
