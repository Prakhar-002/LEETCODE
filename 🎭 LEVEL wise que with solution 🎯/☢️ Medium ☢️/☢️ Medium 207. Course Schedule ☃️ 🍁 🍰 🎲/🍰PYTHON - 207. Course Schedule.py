#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 207

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from typing import List
from collections import defaultdict 

class Solution:
      def canFinish(self, numCourses: int, prerequisites: List[List[int]]) -> bool:
            # ----------------------------------------------------------
            # Step 1: Build adjacency list (course → list of prerequisites)
            # ----------------------------------------------------------
            preMap = defaultdict(list)
            for crs, pre in prerequisites:
                  preMap[crs].append(pre)

            # Set to track nodes in the current recursion stack
            visitSet = set()

            # ----------------------------------------------------------
            # Step 2: DFS function to detect cycles
            # ----------------------------------------------------------
            def dfs(crs):
                  # If course already in recursion stack → cycle found
                  if crs in visitSet:
                        return False

                  # If course has no prerequisites → no cycle from here
                  if preMap[crs] == []:
                        return True

                  # Mark course as visited in the current path
                  visitSet.add(crs)

                  # Recursively check all prerequisites
                  for pre in preMap[crs]:
                        if not dfs(pre):
                              return False

                  # Unmark course from recursion stack
                  visitSet.remove(crs)
                  # Clear prerequisites list to memoize result
                  preMap[crs] = []

                  return True

            # ----------------------------------------------------------
            # Step 3: Run DFS from each course
            # ----------------------------------------------------------
            for num in range(numCourses):
                  if not dfs(num):
                        return False

            return True
