#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1462

#? ⌚ Time complexity ➺ O(V+E+Q) 

#* 👉🏻  V is the number of courses.
#* 👉🏻 E is the number of prerequisites.
#* 👉🏻 Q is the number of queries.

#? 🧺 Space complexity ➺ O(V^2 + E)

from collections import defaultdict

class Solution:
      # Function to check if a course is a prerequisite for another
      def checkIfPrerequisite(self, numCourses: int, prerequisites: List[List[int]], queries: List[List[int]]) -> List[bool]:
            # Adjacency list to represent prerequisites for each course
            adj = defaultdict(list)

            # Build the adjacency list from the prerequisites
            for preReq, crs in prerequisites:
                  adj[crs].append(preReq)

            # Dictionary to store the set of prerequisites for each course
            preReqMap = {}  # map course -> hashSet of indirect prerequisites

            # Depth First Search function to find all prerequisites of a course
            def dfs(crs):
                  # If the course prerequisites are not yet calculated
                  if crs not in preReqMap:
                        preReqMap[crs] = set()  # Initialize an empty set

                        # Recursively add prerequisites from the adjacency list
                        for preReq in adj[crs]:
                              preReqMap[crs] |= dfs(preReq)

                        # Include the course itself in its prerequisite set
                        preReqMap[crs].add(crs)

                  return preReqMap[crs]

            # Compute the prerequisite sets for all courses
            for crs in range(numCourses):
                  dfs(crs)

            # Answer list to store the result for each query
            answer = []

            # Check each query to see if the prerequisite relationship exists
            for u, v in queries:
                  answer.append(u in preReqMap[v])

            return answer
