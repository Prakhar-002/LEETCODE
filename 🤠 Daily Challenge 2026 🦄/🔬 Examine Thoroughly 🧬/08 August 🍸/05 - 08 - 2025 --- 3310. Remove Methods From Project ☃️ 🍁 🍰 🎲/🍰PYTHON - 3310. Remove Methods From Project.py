#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3310

#? ⌚ Time complexity ➺ O(V + E) 

#? 🧺 Space complexity ➺ O(V + E) 

# BFS from k to mark all suspicious methods, then check if any have outside callers
from typing import List
from collections import deque  

class Solution:
      def remainingMethods(self, n: int, k: int, invocations: List[List[int]]) -> List[int]:

            # Build adjacency list and track in-degrees
            adj      = [[] for _ in range(n)]
            inDegree = [0] * n

            for u, v in invocations:
                  adj[u].append(v)
                  inDegree[v] += 1

            # BFS from k to mark all methods reachable from k as suspicious
            suspicious    = [False] * n
            suspicious[k] = True
            que           = deque([k])

            while que:
                  curr = que.popleft()
                  for ngbr in adj[curr]:
                        inDegree[ngbr] -= 1
                        if not suspicious[ngbr]:
                              suspicious[ngbr] = True
                              que.append(ngbr)

            # If any suspicious method is still called by a non-suspicious method,
            # we cannot safely remove the suspicious group
            cannot_remove = any(suspicious[i] and inDegree[i] > 0 for i in range(n))

            if cannot_remove:
                  # Return all methods unchanged
                  return list(range(n))

            # Return only non-suspicious methods
            return [i for i in range(n) if not suspicious[i]]