#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 2392

#? ⌚ Time complexity -> O(K ^ 2) 👉 Given 

#? 🧺 Space complexity -> O(K ^ 2) 👉 Making output Matrix

# https://github.com/Prakhar-002/LEETCODE

# ⌚ Time complexity ->  O(K ^ 2) -> Given 

#  Space complexity -> O(K ^ 2) -> Making output Matrix

from collections import defaultdict

class Solution:
      def buildMatrix(self, k: int, rowConditions: List[List[int]], colConditions: List[List[int]]) -> List[List[int]]:

            # for detecting the cycle and finding the order
            def dfs(src, adjacency, visit, path, order):
                  # if src is already in our path return false
                  # cause this will ake cycle on our graph
                  if src in path:
                        return False

                  # if we already visited our src return false
                  if src in visit:
                        return True

                  # we did not visit our src till now 
                  # add to visit and path 
                  visit.add(src)
                  path.add(src)

                  # call dfs for every Neighbor of our source node
                  for neighbor in adjacency[src]: 
                        # calling dfs and if we got false somewhere return false
                        if not dfs(neighbor, adjacency, visit, path, order):
                              return False

                  # remove src from path cause we backward now
                  path.remove(src)
                  # append in our order
                  order.append(src)

                  return True

            # topological sort 
            def topological_sort(edges):
                  # first make adjacency list for edges
                  adjacency = defaultdict(list)
                  for src, dest in edges:
                        # in the src append the dest 
                        # make a hashmap for src : every dest(all Neighbor of src)
                        adjacency[src].append(dest)

                  # make two HashSet
                  visit, path = set(), set()

                  # array that will tells us the actual position
                  # where we cam put our k elem in rowWise and colWise
                  order = []

                  # we will run dfs for every src(for whole graph) we have
                  for src in range(1, k + 1):
                        # run dfs for every val 1 to k
                        # if we got invalid condition like cycle 
                        # we will return empty list as per que description
                        if not dfs(src, adjacency, visit, path, order):
                              return []

                  # if every this is okay then return the rev of our order
                  return order[ : : -1]

            # get the actual order of row and column for value 1 to k
            row_order = topological_sort(rowConditions)
            col_order = topological_sort(colConditions)

            # if we got an empty order then we got a cycle
            if not row_order or not col_order:
                  # so return empty array as per que
                  return []

            # make the hashMap for row order and column order
            # for less complexity to find the exact position
            # map number to it's index
            row_order_map = { n : i for i, n in enumerate(row_order)}
            col_order_map = { n : i for i, n in enumerate(col_order)}

            matrix = [[0] * k for _ in range(k)]

            for num in range(1, k + 1):
                  # find the exact position of our number 
                  row, col = row_order_map[num], col_order_map[num]
                  # assign it in our matrix
                  matrix[row][col] = num

            return matrix