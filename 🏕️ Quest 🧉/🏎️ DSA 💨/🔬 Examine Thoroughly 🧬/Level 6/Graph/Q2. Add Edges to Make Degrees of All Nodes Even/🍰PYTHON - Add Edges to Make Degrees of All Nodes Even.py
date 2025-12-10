#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L6.2 Q2

#? ⌚ Time complexity ➺ O(E * V) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(E * V) 

from collections import defaultdict          # For efficient adjacency sets
from typing import List                      # For type hints

class Solution:
      def isPossible(self, n: int, edges: List[List[int]]) -> bool:
            # adj[i] = set of neighbors of node i (undirected graph)
            # Using set for O(1) edge existence checks
            adj = defaultdict(set)

            # Build undirected adjacency list from directed edges
            for src, dest in edges:
                  adj[src].add(dest)         # src ↔ dest
                  adj[dest].add(src)         # Undirected: both directions

            # Collect nodes with odd degree (len(adj[i]) = degree)
            odds = []

            for i in range(1, n + 1):
                  if len(adj[i]) % 2:        # Odd degree
                        odds.append(i)

            # Handshaking lemma: Eulerian path requires exactly 0 or 2 odd-degree nodes
            # Here we can add ≤2 edges to fix up to 4 odd-degree nodes
            # Impossible if: odd count OR more than 4 odds
            if len(odds) % 2 == 1 or len(odds) > 4:
                  return False

            # Case 0: Already Eulerian (all even degrees)
            if len(odds) == 0:
                  return True

            # Case 2: Exactly 2 odd-degree nodes [a,b]
            if len(odds) == 2:
                  a, b = odds
                  # Option 1: Add direct edge a-b (if doesn't exist)
                  if b not in adj[a]:
                        return True
                  # Option 2: Add edges a-x and b-x via some intermediate x
                  for x in range(1, n + 1):
                        if (x != a and x != b and 
                              x not in adj[a] and 
                              x not in adj[b]):
                              return True
                  return False

            # Case 4: Exactly 4 odd-degree nodes [a,b,c,d]
            # Need to add 2 edges forming perfect matching
            a, b, c, d = odds

            def can_add(u: int, v: int) -> bool:
                  # Can add edge u-v if it doesn't already exist
                  return v not in adj[u]

            # Try all 3 possible perfect matchings for 4 nodes:
            # 1) Connect a-b AND c-d
            if can_add(a, b) and can_add(c, d):
                  return True
            # 2) Connect a-c AND b-d
            if can_add(a, c) and can_add(b, d):
                  return True
            # 3) Connect a-d AND b-c
            if can_add(a, d) and can_add(b, c):
                  return True

            return False                        # No valid pairing found
