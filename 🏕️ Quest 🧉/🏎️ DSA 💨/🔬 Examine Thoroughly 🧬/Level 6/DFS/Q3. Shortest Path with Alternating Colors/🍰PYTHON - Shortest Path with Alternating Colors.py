#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L6.4 Q3

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from collections import deque, defaultdict
from typing import List

class Solution:
      def shortestAlternatingPaths(self, n: int, redEdges: List[List[int]], 
                                    blueEdges: List[List[int]]) -> List[int]:
            """
            Find shortest alternating path lengths from node 0 to all other nodes.
            Alternating means red edge, then blue edge, then red, etc.
            """
            # Separate adjacency lists for red and blue edges
            red = defaultdict(list)   # red[u] = list of nodes reachable via red edge
            blue = defaultdict(list)  # blue[u] = list of nodes reachable via blue edge

            # Build red graph
            for src, dest in redEdges:
                  red[src].append(dest)

            # Build blue graph  
            for src, dest in blueEdges:
                  blue[src].append(dest)

            # answer[i] = shortest alternating path length to node i from 0
            answer = [-1] * n 

            # BFS queue: [node, length, prev_edge_colour]
            # prev_edge_colour = None at start, "RED", or "BLUE"
            q = deque()
            q.append([0, 0, None])  # Start from node 0, length 0, no previous edge

            # visited[(node, prev_edge_colour)] prevents revisiting same state
            visit = set()
            visit.add((0, None))

            while q:
                  node, length, edgeColour = q.popleft()

                  # First time reaching this node, record the distance
                  if answer[node] == -1:
                        answer[node] = length

                  # Next edge must be RED (if previous wasn't RED)
                  if edgeColour != "RED":
                        for nei in red[node]:
                              if (nei, "RED") not in visit:
                                    visit.add((nei, "RED"))
                                    q.append([nei, length + 1, "RED"])

                  # Next edge must be BLUE (if previous wasn't BLUE)
                  if edgeColour != "BLUE":
                        for nei in blue[node]:
                              if (nei, "BLUE") not in visit:
                                    visit.add((nei, "BLUE"))
                                    q.append([nei, length + 1, "BLUE"])

            return answer
