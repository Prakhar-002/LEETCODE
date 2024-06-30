
#! https://github.com/Prakhar-002/LEETCODE


# Todo 📌 QUESTION NUMBER 1579

#? ⌚ Time complexity -> O(n) 👉 given 

#? 🧺 Space complexity -> O(n) 👉 for using array of n length

class UnionFind:
      def __init__(self, n):
            self.n = n
            self.parent = [i for i in range(n + 1)]
            self.rank = [1] * (n + 1)

      def find(self, p):
            # while node is not to parent it self
            while p != self.parent[p]:
                  # we'll update our parent of array value tp parent of parent of p 
                  self.parent[p] = self.parent[self.parent[p]]
                  # than check for new parent
                  p = self.parent[p]
            return p

      def union(self, firstNode, secNode) :
            # find parent of first node
            firstNodeParent = self.find(firstNode)
            # find parent of second node
            secNodeParent = self.find(secNode)

            # if they both have same parent so making an ege will give us a cycle
            if firstNodeParent == secNodeParent:
                  # so in that case we return false and this will be our ans too
                  return 0

            # if rank of first parent is greater than other 
            if self.rank[firstNodeParent] > self.rank[secNodeParent]:
                  # then our parent node will be first one
                  # and we'll update the parent of sec node to first node parent
                  self.parent[secNodeParent] = firstNodeParent
                  # and node then rank of ultimate parent of first node...
                  # ...will be inc by rank of ultimate parent of second node
                  self.rank[firstNodeParent] += self.rank[secNodeParent]

            else:
                  # vice-versa
                  self.parent[firstNodeParent] = secNodeParent
                  self.rank[secNodeParent] += self.rank[firstNodeParent]

            return 1

      # tells us is our graph is connected or not 
      def isConnected(self):
            return self.n <= 1

class Solution:
      def maxNumEdgesToRemove(self, n: int, edges: List[List[int]]) -> int:
            alice, bob = UnionFind(n), UnionFind(n)
            # num of edges we gonna keep
            count = 0 

            for edge in edges:
                  t = edge[0]
                  src = edge[1]
                  dest = edge[2]

                  if t == 3:
                        count += (alice.union(src, dest) | bob.union(src, dest))

            for edge in edges:
                  t = edge[0]
                  src = edge[1]
                  dest = edge[2]

                  if t == 1:
                        count += alice.union(src, dest)
                  elif t == 2:
                        count += bob.union(src, dest)

            if bob.isConnected() and alice.isConnected():
                  return len(edges) - count

            return -1