//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2127

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of nodes

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public int maximumInvitations(int[] favorite) {
            int N = favorite.length; // Total number of employees
            int longestCycle = 0; // Stores the length of the longest cycle
            boolean[] visited = new boolean[N]; // Boolean array to track visited nodes
            List<int[]> length2Cycles = new ArrayList<>(); // Stores all cycles of length 2

            // Detect all cycles in the graph
            for (int i = 0; i < N; i++) {
                  if (visited[i]) continue; // Skip if the node is already visited

                  int start = i, cur = i; // Start traversal from the current node
                  Set<Integer> curSet = new HashSet<>(); // Set to store nodes in the current traversal path

                  // Traverse the graph until a cycle is detected or path ends
                  while (!visited[cur]) {
                        visited[cur] = true; // Mark the current node as visited
                        curSet.add(cur); // Add the current node to the path
                        cur = favorite[cur]; // Move to the next node
                  }

                  // Check if the current node forms a cycle
                  if (curSet.contains(cur)) {
                        int length = curSet.size(); // Length of the current traversal path

                        // Remove nodes outside the cycle
                        while (start != cur) {
                              length--;
                              start = favorite[start];
                        }

                        // Update the longest cycle length
                        longestCycle = Math.max(longestCycle, length);

                        // Store length-2 cycles
                        if (length == 2) {
                              length2Cycles.add(new int[] {cur, favorite[cur]});
                        }
                  }
            }

            // Build an inverted graph (reverse edges)
            List<List<Integer>> inverted = new ArrayList<>();
            for (int i = 0; i < N; i++) inverted.add(new ArrayList<>());
            for (int i = 0; i < N; i++) inverted.get(favorite[i]).add(i);

            // Find the sum of the longest non-circular chains connected to cycles
            int chainSum = 0;

            // For each length-2 cycle, calculate the sum of the longest chains
            for (int[] cycle : length2Cycles) {
                  int n1 = cycle[0], n2 = cycle[1];
                  chainSum += bfs(n1, n2, inverted) + bfs(n2, n1, inverted) + 2; // Add 2 for the cycle itself
            }

            // Return the maximum of the longest cycle or chain sum
            return Math.max(chainSum, longestCycle);
      }

      // Separate BFS function
      private int bfs(int src, int parent, List<List<Integer>> inverted) {
            Queue<int[]> queue = new LinkedList<>();
            queue.offer(new int[] {src, 0}); // (node, chain length)
            int maxLength = 0;

            while (!queue.isEmpty()) {
                  int[] current = queue.poll();
                  int node = current[0], length = current[1];

                  // Skip the parent node to avoid revisiting
                  if (node == parent) continue;

                  maxLength = Math.max(maxLength, length); // Update maximum length

                  // Add neighbors to the queue
                  for (int nei : inverted.get(node)) {
                        queue.offer(new int[] {nei, length + 1});
                  }
            }

            return maxLength; // Return the longest chain length
      }
}
