#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2493

#? ⌚ Time complexity ➺ O(V + E)  👉🏻  V = No. of Vertex

#? 🧺 Space complexity ➺ O(V + E) 👉🏻  E = No. of Edges

from typing import List
from collections import defaultdict, deque

class Solution:
      def magnificentSets(self, n: int, edges: List[List[int]]) -> int:
            # Step 1: Build the adjacency list for the graph
            adj = defaultdict(list)
            for n1, n2 in edges:
                  adj[n1].append(n2)
                  adj[n2].append(n1)

            # Helper function to find all nodes in the connected component of a given node
            def get_connected_component(src):
                  q = deque([src])  # Queue for BFS
                  component = set([src])  # Set to store nodes in the connected component

                  while q:
                        node = q.popleft()
                        for nei in adj[node]:
                              if nei in component:  # Skip already visited nodes
                                    continue
                              q.append(nei)
                              component.add(nei)
                              visit.add(nei)

                  return component

            # Helper function to find the longest path using BFS
            def longest_path(src):
                  q = deque([(src, 1)])  # Queue stores (node, group number)
                  dist = {src: 1}  # Dictionary to store group numbers (distances)

                  while q:
                        node, length = q.popleft()
                        for nei in adj[node]:
                              if nei in dist:
                                    # If a node belongs to the same group, return -1 (not bipartite)
                                    if dist[nei] == length:
                                          return -1
                                    continue
                              q.append((nei, length + 1))
                              dist[nei] = length + 1

                  return max(dist.values())  # Return the longest path in the component

            visit = set()  # Set to track visited nodes
            total_groups = 0  # Total count of groups

            # Step 2: Iterate through all nodes and find connected components
            for i in range(1, n + 1):
                  if i in visit:
                        continue

                  visit.add(i)
                  component = get_connected_component(i)  # Get the connected component

                  max_count = 0  # Variable to store the maximum group count in the component

                  # Step 3: For each node in the component, find the longest path
                  for src in component:
                        length = longest_path(src)
                        if length == -1:  # If the graph is not bipartite, return -1
                              return -1
                        max_count = max(max_count, length)

                  total_groups += max_count  # Add the maximum group count to the total

            return total_groups  # Return the total number of groups
