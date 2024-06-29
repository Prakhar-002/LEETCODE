#! https://github.com/Prakhar-002/LEETCODE


# Todo 📌 QUESTION NUMBER 2192

#? ⌚ Time complexity -> O(n^2) 👉 given

#? 🧺 Space complexity -> O(n) 👉 given

class Solution:

      def dfs(self, graph, i, j, ancestors):
            for g in graph[j]:
                  # checking if already added and last elem is not same elem means 0 is not the ancestor of 0
                  if not ancestors[g] or ancestors[g][-1] != i:
                        # push back into our array
                        ancestors[g].append(i)
                        # call for next element
                        self.dfs(graph, i, g, ancestors)

      def getAncestors(self, n: int, edges: List[List[int]]) -> List[List[int]]:
            ancestors = [[] for _ in range(n)]
            graph = [[] for _ in range(n)]

            # edgeList = [[0,3],[0,4],[1,3],[2,4],[2,7],[3,5],[3,6],[3,7],[4,6]]

            for edge in edges:
                  graph[edge[0]].append(edge[1])

            #* graph = [[3, 4], [3], [4, 7], [5, 6, 7], [6]]

            # We call our function for every index o to N
            # call with our graph and index and index of list of ancestor
            # and our ans ancestors
            for i in range(n):
                  self.dfs(graph, i, i, ancestors)

            return ancestors