//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3243

//? ⌚ Time complexity ➺ O(n + q ⋅ (n + m))

//? 🧺 Space complexity ➺ O(n + m + q)

import java.util.*;

class Solution {

      // Function to compute the shortest path from node 0 to node n-1 using BFS
      private int computeShortestPath(int n, List<List<Integer>> adjacencyList) {
            Queue<int[]> queue = new LinkedList<>(); // [current_node, current_distance]
            Set<Integer> visited = new HashSet<>();

            // Start BFS from node 0 with distance 0
            queue.add(new int[]{0, 0});
            visited.add(0);

            while (!queue.isEmpty()) {
                  int[] current = queue.poll();
                  int currentNode = current[0];
                  int currentDistance = current[1];

                  // If we reach the last node, return the distance
                  if (currentNode == n - 1) {
                        return currentDistance;
                  }

                  // Explore all neighbors
                  for (int neighbor : adjacencyList.get(currentNode)) {
                        if (!visited.contains(neighbor)) {
                              queue.add(new int[]{neighbor, currentDistance + 1});
                              visited.add(neighbor);
                        }
                  }
            }

            // If node n-1 is not reachable
            return -1;
      }

      public int[] shortestDistanceAfterQueries(int n, int[][] queries) {
            // Step 1: Initialize adjacency list for the graph
            List<List<Integer>> adjacencyList = new ArrayList<>();
            for (int i = 0; i < n; i++) {
                  adjacencyList.add(new ArrayList<>());
                  if (i < n - 1) {
                        adjacencyList.get(i).add(i + 1);
                  }
            }

            // Step 2: Process each query
            int[] results = new int[queries.length];
            for (int i = 0; i < queries.length; i++) {
                  int src = queries[i][0];
                  int dst = queries[i][1];

                  // Add the directed edge (src -> dst) to the adjacency list
                  adjacencyList.get(src).add(dst);

                  // Compute the shortest path after adding the edge
                  results[i] = computeShortestPath(n, adjacencyList);
            }

            return results;
      }
}












