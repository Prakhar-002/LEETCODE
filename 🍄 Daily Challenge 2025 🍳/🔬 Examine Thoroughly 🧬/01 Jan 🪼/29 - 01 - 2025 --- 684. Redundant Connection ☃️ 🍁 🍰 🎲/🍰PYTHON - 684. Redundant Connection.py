#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 684

#* Union find algorithm

#? ⌚ Time complexity -> O(n) 👉 length of edges array

#? 🧺 Space complexity -> O(n) 👉 using 2 arr of length equal to len of edges

class Solution:
      def findRedundantConnection(self, edges: List[List[int]]) -> List[int]:
            # parent array will store ultimate parent of each node
            parent = [i for i in range(len(edges) + 1)]
            # rank array will give the info about node which one of them will be parent node among all 
            rank = [1] * (len(edges) + 1)

            # finding the parent of our node
            def find(n):
                  # find it in our parent array 
                  p = parent[n]

                  # while node is not to parent it self
                  while p != parent[p]:
                        # we'll update our parent of array value tp parent of parent of p 
                        parent[p] = parent[parent[p]]
                        # than check for new parent
                        p = parent[p]
                  return p

            def union(firstNode, secNode):
                  # find parent of first node
                  firstNodeParent = find(firstNode)
                  # find parent of second node
                  secNodeParent = find(secNode)

                  # if they both have same parent so making an ege will give us a cycle
                  if firstNodeParent == secNodeParent:
                        # so in that case we return false and this will be our ans too
                        return False

                  # if rank of first parent is greater than other 
                  if rank[firstNodeParent] > rank[secNodeParent]:
                        # then our parent node will be first one
                        # and we'll update the parent of sec node to first node parent
                        parent[secNodeParent] = firstNodeParent
                        # and node then rank of ultimate parent of first node...
                        # ...will be inc by rank of ultimate parent of second node
                        rank[firstNodeParent] += rank[secNodeParent]

                  else:
                        # vice-versa
                        parent[firstNodeParent] = secNodeParent
                        rank[secNodeParent] += rank[firstNodeParent]

                  return True

            for edge in edges:
                  firstNode = edge[0]
                  secNode = edge[1]
                  # if we get false any where in whole edges array
                  if not union(firstNode, secNode):
                        # that will be our ans
                        return edge