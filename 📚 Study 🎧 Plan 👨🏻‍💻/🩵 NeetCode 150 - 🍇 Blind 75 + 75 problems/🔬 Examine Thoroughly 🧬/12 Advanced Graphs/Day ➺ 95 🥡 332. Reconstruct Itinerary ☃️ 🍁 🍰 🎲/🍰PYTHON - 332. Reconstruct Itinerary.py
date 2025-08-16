#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 332

#? ⌚ Time complexity ➺ O(E log E) 👉🏻  E = Edges

#? 🧺 Space complexity ➺ O(E)

from collections import defaultdict
from typing import List

class Solution:
      def findItinerary(self, tickets: List[List[str]]) -> List[str]:
            # ----------------------------------------------------------
            # Step 1: Build the Adjacency List (Graph Representation)
            # ----------------------------------------------------------
            # `adj` is an adjacency list where keys are departure airports
            # and values are lists of destination airports.
            # `defaultdict(list)` handles creation of empty lists for new keys.
            adj = defaultdict(list)

            # Sort tickets in reverse lexical order for destinations from the same source.
            # This is key for the DFS to pick the lexicographically smallest path first
            # when `pop()` is used later.
            for src, dst in sorted(tickets)[::-1]:
                  adj[src].append(dst)

            # `res` will store the itinerary in reverse order.
            res = []

            # ----------------------------------------------------------
            # Step 2: Implement Hierholzer's Algorithm (DFS for Eulerian Path)
            # ----------------------------------------------------------
            # `dfs` recursively traverses the graph to find the Eulerian path.
            def dfs(src):
                  # While there are still outgoing edges from the current airport,
                  # continue traversing them.
                  while adj[src]:
                        # Pop the last destination. Due to initial sorting, this is
                        # the next lexicographically smallest destination.
                        dst = adj[src].pop()
                        # Recursively call DFS on the destination.
                        dfs(dst)
                  # After exhausting all outgoing edges from `src`, add `src` to the result.
                  # This builds the itinerary in reverse order.
                  res.append(src)

            # ----------------------------------------------------------
            # Step 3: Execute DFS and Return Result
            # ----------------------------------------------------------
            # Start the DFS from 'JFK', the specified starting point.
            dfs('JFK')

            # The `res` list is built in reverse order, so reverse it to get
            # the correct chronological itinerary and return.
            return res[::-1]

