#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L6.4 Q4

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n) 

from collections import deque, defaultdict
from typing import List

class Solution:
      def numBusesToDestination(self, routes: List[List[int]], source: int, target: int) -> int:
            """
            Find minimum number of buses needed to go from source to target stop.
            Each bus route is a list of stops it visits.
            """
            if source == target:
                  return 0  # Already at destination

            # adj[stop] = list of bus routes that visit this stop
            adj = defaultdict(list)

            # Build adjacency list: map each stop to bus routes passing through it
            for i, route in enumerate(routes):
                  for stop in route:
                        adj[stop].append(i)  # Bus i stops at this stop

            # BFS queue will contain bus route indices
            q = deque()

            # Track visited bus routes (not stops)
            visited = set()

            # Start BFS from all buses that pass through source stop
            for route in adj[source]:
                  q.append(route)
                  visited.add(route)  # Mark bus as visited

            busCount = 1  # Number of bus changes (1 means took 1 bus)

            while q:
                  size = len(q)  # Process current level (same bus count)

                  while size > 0:
                        size -= 1
                        idx = q.popleft()  # Current bus route

                        # Check all stops on current bus
                        for stop in routes[idx]:
                              if stop == target:
                                    return busCount  # Found target stop!

                              # From this stop, try all other buses that haven't been visited
                              for nextRoute in adj[stop]:
                                    if nextRoute not in visited:
                                          visited.add(nextRoute)
                                          q.append(nextRoute)  # Transfer to next bus

                  busCount += 1  # Move to next level (one more bus change)

            return -1  # No route found
