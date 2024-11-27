#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3243

#? ⌚ Time complexity ➺ O(n + q ⋅ (n + m))

#? 🧺 Space complexity ➺ O(n + m + q)

from collections import deque
from typing import List

class Solution:
      def shortestDistanceAfterQueries(self, n: int, queries: List[List[int]]) -> List[int]:
            # Step 1: Initialize the adjacency list for the graph
            # Each node initially has an edge pointing to the next node (i+1)
            adjacency_list = [[i + 1] for i in range(n)]

            def compute_shortest_path():
                  queue = deque()
                  # Start BFS from node 0 with an initial distance of 0
                  queue.append((0, 0))  # (current node, distance so far)
                  visited = set()
                  visited.add(0)  # Mark node 0 as visited

                  while queue:
                        # Get the next node and the current distance from the queue
                        current_node, current_distance = queue.popleft()

                        # If we reach the last node (n-1), return the current distance
                        if current_node == n - 1:
                              return current_distance

                        # Explore all neighbors of the current node
                        for neighbor in adjacency_list[current_node]:
                              # If the neighbor is not visited, add it to the queue
                              if neighbor not in visited:
                                    queue.append((neighbor, current_distance + 1))
                                    visited.add(neighbor)  # Mark the neighbor as visited

                  # If node n-1 is not reachable, return None
                  return None

            # Step 2: Process each query and calculate the shortest path
            results = []
            for src, dst in queries:
                  # Add the directed edge (src -> dst) to the adjacency list
                  adjacency_list[src].append(dst)

                  # Compute the shortest path from node 0 to node n-1 after adding this edge
                  shortest_path_distance = compute_shortest_path()

                  # Append the result to the list
                  results.append(shortest_path_distance)

            # Step 3: Return the results for all queries
            return results
