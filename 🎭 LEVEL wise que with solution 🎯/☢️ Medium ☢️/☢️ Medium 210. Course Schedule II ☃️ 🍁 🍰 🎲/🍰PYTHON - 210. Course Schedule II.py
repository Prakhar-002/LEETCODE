#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 210

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(numCourses)

#? 🧺 Space complexity ➺ O(n)

from typing import List
from collections import defaultdict 

class Solution:
      def findOrder(self, numCourses: int, prerequisites: List[List[int]]) -> List[int]:
            # ----------------------------------------------------------
            # Step 1: Build adjacency list (course → list of prerequisites)
            # ----------------------------------------------------------
            preReq = defaultdict(list)
            for crs, pre in prerequisites:
                  preReq[crs].append(pre)

            output = []    # Stores the topological order
            visit = set()  # Courses already fully visited (safe)
            cycle = set()  # Courses in the current DFS path (used for cycle detection)

            # ----------------------------------------------------------
            # Step 2: DFS function to detect cycles and build order
            # ----------------------------------------------------------
            def dfs(crs):
                  # If course is in current DFS path → cycle detected
                  if crs in cycle:
                        return False
                  # If course already processed and marked safe → skip
                  if crs in visit:
                        return True

                  # Mark this course in the current DFS path
                  cycle.add(crs)

                  # Visit all prerequisites first
                  for pre in preReq[crs]:
                        if not dfs(pre):
                              return False

                  # Finished exploring prerequisites → remove from path
                  cycle.remove(crs)
                  # Mark as fully visited (safe to take)
                  visit.add(crs)
                  # Append to output (postorder for correct topological order)
                  output.append(crs)

                  return True

            # ----------------------------------------------------------
            # Step 3: Run DFS from each course
            # ----------------------------------------------------------
            for crs in range(numCourses):
                  if not dfs(crs):
                        # Cycle found → not possible to finish all
                        return []

            return output
