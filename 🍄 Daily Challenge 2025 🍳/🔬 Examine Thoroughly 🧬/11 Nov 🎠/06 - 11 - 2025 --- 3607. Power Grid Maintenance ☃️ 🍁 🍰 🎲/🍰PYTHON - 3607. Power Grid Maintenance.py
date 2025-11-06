#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3607

#? ⌚ Time complexity ➺ O(c + E + q + c log c) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(c)

from collections import defaultdict
from heapq import heappush, heappop
from typing import List

class Solution:
      def processQueries(self, c: int, connections: List[List[int]], queries: List[List[int]]) -> List[int]:
            # Build adjacency list to represent the station connections as an undirected graph
            adj = defaultdict(list)
            for u, v in connections:
                  adj[u].append(v)
                  adj[v].append(u)

            # Set to track which stations are currently online
            online = set()
            # Dictionary mapping each station to its group ID (connected component identifier)
            station_group = {}
            # Dictionary mapping each group ID to a min-heap of station numbers in that group
            min_heaps = defaultdict(list)

            # Depth-First Search to label all stations in a component and build min-heaps
            def dfs(station, group_id):
                  # Skip already visited stations (already marked as online)
                  if station in online:
                        return 
                  online.add(station)
                  # Assign group ID to the station
                  station_group[station] = group_id
                  # Add station to the group min-heap
                  heappush(min_heaps[group_id], station)

                  # Explore all connected neighbors
                  for nei in adj[station]:
                        dfs(nei, group_id)

            # Identify and label all connected components (1-indexed stations)
            for s in range(1, c + 1):
                  dfs(s, s)

            # List to store results for each query
            res = []

            # Process each query according to its type
            for q_type, q_station in queries:
                  if q_type == 1:
                        # Query: Find online station in the same group as q_station
                        if q_station in online:
                              res.append(q_station)
                              continue
                        group_id = station_group[q_station]
                        min_heap = min_heaps[group_id]
                        # Remove stations from heap that are not online
                        while min_heap and min_heap[0] not in online:
                              heappop(min_heap)
                        # If there is an online station in this group, return the smallest-numbered one
                        if min_heap:
                              res.append(min_heap[0])
                        else:
                              res.append(-1)
                  else:
                        # Query: Take station q_station offline
                        online.discard(q_station)

            return res
