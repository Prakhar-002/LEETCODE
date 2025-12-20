#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2092

#? ⌚ Time complexity ➺ O(m log m + m α(n)) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n + m)

class UnionFind:
      def __init__(self, nodes: int):
            # Initialize parent and rank arrays
            self.parent = [i for i in range(nodes)]
            self.rank = [0] * nodes

      def find(self, x: int) -> int:
            # Find the parent of node x. Use Path Compression
            if self.parent[x] != x:
                  self.parent[x] = self.find(self.parent[x])
            return self.parent[x]

      def unite(self, x: int, y: int) -> None:
            # Unite two nodes x and y, if they are not already united
            px = self.find(x)
            py = self.find(y)
            if px != py:
                  # Union by Rank Heuristic
                  if self.rank[px] > self.rank[py]:
                        self.parent[py] = px
                  elif self.rank[px] < self.rank[py]:
                        self.parent[px] = py
                  else:
                        self.parent[py] = px
                        self.rank[px] += 1

      def connected(self, x: int, y: int) -> bool:
            # Check if two nodes x and y are connected or not
            return self.find(x) == self.find(y)

      def reset(self, x: int) -> None:
            # Reset the initial properties of node x
            self.parent[x] = x
            self.rank[x] = 0

class Solution:
      def findAllPeople(
            self, n: int, meetings: List[List[int]], firstPerson: int
      ) -> List[int]:
            """
            Find all people who eventually know the secret.
            Meetings happen at different times; secret spreads only if at least one person in a meeting already knows it.
            """
            # Sort meetings by time (increasing order)
            meetings.sort(key=lambda x: x[2])

            # Group meetings by time: time → [(x,y), ...]
            same_time_meetings = defaultdict(list)
            for x, y, t in meetings:
                  same_time_meetings[t].append((x, y))

            # Union-Find to track who knows the secret (connected to 0)
            graph = UnionFind(n)
            # Initially, person 0 and firstPerson know the secret
            graph.unite(firstPerson, 0)

            # Process meetings in increasing order of time
            for t in same_time_meetings:
                  # Step 1: Unite all pairs in meetings at time t
                  for x, y in same_time_meetings[t]:
                        graph.unite(x, y)

                  # Step 2: For each meeting at time t, if no one knows the secret, reset the connection
                  for x, y in same_time_meetings[t]:
                        # If x is not connected to 0, then y is also not connected (since they are united)
                        if not graph.connected(x, 0):
                              # Reset x and y so they don’t carry the secret forward
                              graph.reset(x)
                              graph.reset(y)

            # All people connected to 0 know the secret
            return [i for i in range(n) if graph.connected(i, 0)]
