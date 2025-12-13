#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 743

#? ⌚ Time complexity ➺ O(E * log V) 

#? 🧺 Space complexity ➺ O(E + V)

from typing import List
import heapq
from collections import defaultdict 

class Solution:
      def networkDelayTime(self, times: List[List[int]], n: int, k: int) -> int:
            # ----------------------------------------------------------
            # Step 1: Build adjacency list
            # adj[u] will contain a list of (v, w) where v is neighbor and w is weight
            # ----------------------------------------------------------
            adj = defaultdict(list)
            for u, v, w in times:
                  adj[u].append((v, w))

            # Min-heap: stores (current_distance, node).
            # Initialize with starting node k and distance 0.
            minHeap = [(0, k)] # (distance_from_source, node)

            # Set to keep track of visited nodes to avoid reprocessing
            visit = set()

            # `max_time` will store the maximum time taken for a signal to reach any node.
            # This implicitly represents the time the last signal arrives.
            max_time = 0

            # ----------------------------------------------------------
            # Step 2: Dijkstra's Algorithm
            # ----------------------------------------------------------
            while minHeap:
                  # Pop the node with the smallest distance from the source
                  t, node = heapq.heappop(minHeap)

                  # If this node has already been visited with a shorter path, skip
                  if node in visit:
                        continue

                  # Mark node as visited
                  visit.add(node)

                  # Update max_time if the current distance is greater
                  max_time = max(max_time, t)

                  # If all 'n' nodes have been visited, we have found the answer
                  if len(visit) == n:
                        return max_time

                  # Explore neighbors
                  for nei, weight in adj[node]:
                        # If neighbor has not been visited
                        if nei not in visit:
                              # Push neighbor to heap with updated distance
                              heapq.heappush(minHeap, (t + weight, nei))

            # ----------------------------------------------------------
            # Step 3: Check if all nodes were reachable
            # ----------------------------------------------------------
            # If after processing the heap, not all 'n' nodes were visited,
            # it means some nodes are unreachable.
            return max_time if len(visit) == n else -1
