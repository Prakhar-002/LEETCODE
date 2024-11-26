//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2924

//? ⌚ Time complexity ➺ O(V + E) 👉🏻  V = vertex

//? 🧺 Space complexity ➺ O(V) 👉🏻 E = Edges

import java.util.*;

class Solution {
      public int findChampion(int n, int[][] edges) {
            // Array to count incoming edges for each node
            int[] incoming = new int[n];

            // Increment the count of incoming edges for destination nodes
            for (int[] edge : edges) {
                  incoming[edge[1]]++;
            }

            // List to store potential champions (nodes with no incoming edges)
            List<Integer> champions = new ArrayList<>();

            // Check each node's incoming edge count
            for (int i = 0; i < n; i++) {
                  // If a node has no incoming edges, add it to the champions list
                  if (incoming[i] == 0) {
                        champions.add(i);
                  }
            }

            // If there is more than one node with no incoming edges, return -1
            if (champions.size() > 1) {
                  return -1;
            }

            // Return the champion (node with no incoming edges) if exactly one exists
            return champions.get(0);
      }
}
