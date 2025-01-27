//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1462

//? ⌚ Time complexity ➺ O(V+E+Q) 

//* 👉🏻  V is the number of courses.
//* 👉🏻 E is the number of prerequisites.
//* 👉🏻 Q is the number of queries.

//? 🧺 Space complexity ➺ O(V^2 + E)

import java.util.*;

class Solution {
      public List<Boolean> checkIfPrerequisite(int numCourses, int[][] prerequisites, int[][] queries) {
            // Adjacency list to represent prerequisites for each course
            Map<Integer, List<Integer>> adj = new HashMap<>();

            // Build the adjacency list from prerequisites
            for (int[] pair : prerequisites) {
                  adj.computeIfAbsent(pair[1], k -> new ArrayList<>()).add(pair[0]);
            }

            // Map to store the set of prerequisites for each course
            Map<Integer, Set<Integer>> preReqMap = new HashMap<>();

            // Compute prerequisite sets for all courses
            for (int i = 0; i < numCourses; i++) {
                  dfs(i, adj, preReqMap);
            }

            // Answer list to store the results for each query
            List<Boolean> answer = new ArrayList<>();
            for (int[] query : queries) {
                  answer.add(preReqMap.getOrDefault(query[1], new HashSet<>()).contains(query[0]));
            }

            return answer;
      }

      private Set<Integer> dfs(int course, Map<Integer, List<Integer>> adj, Map<Integer, Set<Integer>> preReqMap) {
            // If prerequisites for this course are already calculated
            if (preReqMap.containsKey(course)) {
                  return preReqMap.get(course);
            }

            // Initialize an empty set for the current course
            Set<Integer> prerequisitesSet = new HashSet<>();

            // Recursively calculate prerequisites from the adjacency list
            for (int preReq : adj.getOrDefault(course, new ArrayList<>())) {
                  prerequisitesSet.addAll(dfs(preReq, adj, preReqMap));
            }

            // Add the course itself to its prerequisite set
            prerequisitesSet.add(course);

            // Store the calculated prerequisites in the map
            preReqMap.put(course, prerequisitesSet);

            return prerequisitesSet;
      }
}
