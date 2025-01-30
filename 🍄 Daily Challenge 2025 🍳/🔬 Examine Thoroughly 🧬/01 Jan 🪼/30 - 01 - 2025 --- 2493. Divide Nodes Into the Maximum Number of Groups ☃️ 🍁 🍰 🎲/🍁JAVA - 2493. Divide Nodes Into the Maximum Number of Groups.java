//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2493

//? ⌚ Time complexity ➺ O(V + E)  👉🏻  V = No. of Vertex

//? 🧺 Space complexity ➺ O(V + E) 👉🏻  E = No. of Edges

import java.util.*;

class Solution {

      // Function to build the adjacency list for the graph
      private Map<Integer, List<Integer>> buildAdjacencyList(int n, int[][] edges) {
            Map<Integer, List<Integer>> adj = new HashMap<>();

            // Initialize adjacency list
            for (int i = 1; i <= n; i++) {
                  adj.put(i, new ArrayList<>());
            }

            // Populate adjacency list with edges
            for (int[] edge : edges) {
                  int node1 = edge[0], node2 = edge[1];
                  adj.get(node1).add(node2); // Add edge from node1 to node2
                  adj.get(node2).add(node1); // Add edge from node2 to node1
            }

            return adj;
      }

      // Function to get the connected component using BFS
      private Set<Integer> getConnectedComponent(int src, Map<Integer, List<Integer>> adj, Set<Integer> visited) {
            Queue<Integer> queue = new LinkedList<>();
            Set<Integer> component = new HashSet<>();

            queue.add(src);
            component.add(src);
            visited.add(src);

            while (!queue.isEmpty()) {
                  int node = queue.poll();

                  for (int neighbor : adj.get(node)) {
                        if (component.contains(neighbor))
                              continue; // Skip already visited nodes
                        queue.add(neighbor);
                        component.add(neighbor);
                        visited.add(neighbor);
                  }
            }

            return component;
      }

      // Function to find the longest path using BFS
      private int longestPath(int src, Map<Integer, List<Integer>> adj) {
            Queue<int[]> queue = new LinkedList<>(); // (node, group number)
            Map<Integer, Integer> dist = new HashMap<>(); // Distance map

            queue.add(new int[] { src, 1 });
            dist.put(src, 1);

            int maxLength = 0; // Variable to track the longest path

            while (!queue.isEmpty()) {
                  int[] current = queue.poll();
                  int node = current[0], length = current[1];

                  for (int neighbor : adj.get(node)) {
                        if (dist.containsKey(neighbor)) {
                              // If the neighbor is in the same group, return -1 (not bipartite)
                              if (dist.get(neighbor) == length)
                                    return -1;
                              continue;
                        }
                        queue.add(new int[] { neighbor, length + 1 });
                        dist.put(neighbor, length + 1);
                  }

                  maxLength = Math.max(maxLength, length);
            }

            return maxLength;
      }

      public int magnificentSets(int n, int[][] edges) {
            Map<Integer, List<Integer>> adj = buildAdjacencyList(n, edges); // Build adjacency list
            Set<Integer> visited = new HashSet<>();
            int totalGroups = 0; // Variable to track total groups

            // Iterate through all nodes
            for (int i = 1; i <= n; i++) {
                  if (visited.contains(i))
                        continue;

                  // Get the connected component
                  Set<Integer> component = getConnectedComponent(i, adj, visited);

                  int maxCount = 0; // Maximum group count in the component

                  // For each node in the component, find the longest path
                  for (int node : component) {
                        int length = longestPath(node, adj);
                        if (length == -1)
                              return -1; // Return -1 if the graph is not bipartite
                        maxCount = Math.max(maxCount, length);
                  }

                  totalGroups += maxCount; // Add the maximum count to the total
            }

            return totalGroups; // Return the total number of groups
      }
}
