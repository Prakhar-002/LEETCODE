#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L6.1 Q3

#? ⌚ Time complexity ➺ O(Q × R × α(N))) 👉🏻  Q = len(Request)

#? 🧺 Space complexity ➺ O(1)  -> R = len(restrictions)

class Solution:
      def friendRequests(self, n: int, restrictions: List[List[int]], requests: List[List[int]]) -> List[bool]:
            # parent[i] = parent of node i, initially each node is its own parent
            parent = list(range(n + 1))
            
            def find(x):
                  # Path compression: find root with path compression
                  if parent[x] != x:
                        parent[x] = find(parent[x])
                  return parent[x]
            
            def union(x, y):
                  # Union by linking roots
                  rootX = find(x)
                  rootY = find(y)
                  if rootX != rootY:
                        parent[rootY] = rootX
            
            result = []
            
            for u, v in requests:
                  rootU = find(u)
                  rootV = find(v)
                  
                  canBeFriends = True
                  
                  # If u and v already in same component, always allow
                  if rootU != rootV:
                        # Check all restrictions
                        for x, y in restrictions:
                              rootX = find(x)
                              rootY = find(y)
                              # If connecting u-v would connect a forbidden pair
                              if (rootX == rootU and rootY == rootV) or \
                                    (rootX == rootV and rootY == rootU):
                                    canBeFriends = False
                                    break

                  if canBeFriends:
                        union(u, v)
                        result.append(True)
                  else:
                        result.append(False)
            
            return result
