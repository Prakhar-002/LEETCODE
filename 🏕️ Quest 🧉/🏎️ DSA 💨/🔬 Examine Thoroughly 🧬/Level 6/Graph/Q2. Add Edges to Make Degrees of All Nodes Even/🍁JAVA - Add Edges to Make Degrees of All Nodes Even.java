//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.2 Q2

//? ⌚ Time complexity ➺ O(E * V) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(E * V)

import java.util.*;

public class Solution {
      // Helper: Can add edge u-v if it doesn't already exist
      public boolean canAdd(int u, int v, HashSet<Integer>[] adj) {
            return !adj[u].contains(v);
      }

      public boolean isPossible(int n, List<List<Integer>> edges) {
            // adj[i] = set of neighbors of node i (undirected graph)
            // Using HashSet for O(1) edge existence checks
            HashSet<Integer>[] adj = new HashSet[n + 1];
            for (int i = 1; i <= n; i++) {
                  adj[i] = new HashSet<>();
            }

            // Build undirected adjacency list from directed edges
            for (List<Integer> edge : edges) {
                  int src = edge.get(0), dest = edge.get(1);
                  adj[src].add(dest); // src ↔ dest
                  adj[dest].add(src); // Undirected: both directions
            }

            // Collect nodes with odd degree (size of adj[i] = degree)
            ArrayList<Integer> odds = new ArrayList<>();

            for (int i = 1; i <= n; i++) {
                  if (adj[i].size() % 2 == 1) { // Odd degree
                        odds.add(i);
                  }
            }

            // Handshaking lemma: Eulerian path requires exactly 0 or 2 odd-degree nodes
            // Here we can add ≤2 edges to fix up to 4 odd-degree nodes
            // Impossible if: odd count OR more than 4 odds
            if (odds.size() % 2 == 1 || odds.size() > 4) {
                  return false;
            }

            // Case 0: Already Eulerian (all even degrees)
            if (odds.size() == 0) {
                  return true;
            }

            // Case 2: Exactly 2 odd-degree nodes [a,b]
            if (odds.size() == 2) {
                  int a = odds.get(0), b = odds.get(1);
                  // Option 1: Add direct edge a-b (if doesn't exist)
                  if (!adj[a].contains(b)) {
                        return true;
                  }
                  // Option 2: Add edges a-x and b-x via some intermediate x
                  for (int x = 1; x <= n; x++) {
                        if (x != a && x != b &&
                                    !adj[a].contains(x) &&
                                    !adj[b].contains(x)) {
                              return true;
                        }
                  }
                  return false;
            }

            // Case 4: Exactly 4 odd-degree nodes [a,b,c,d]
            // Need to add 2 edges forming perfect matching
            int a = odds.get(0), b = odds.get(1), c = odds.get(2), d = odds.get(3);

            // Try all 3 possible perfect matchings for 4 nodes:
            // 1) Connect a-b AND c-d
            if (canAdd(a, b, adj) && canAdd(c, d, adj)) {
                  return true;
            }
            // 2) Connect a-c AND b-d
            if (canAdd(a, c, adj) && canAdd(b, d, adj)) {
                  return true;
            }
            // 3) Connect a-d AND b-c
            if (canAdd(a, d, adj) && canAdd(b, c, adj)) {
                  return true;
            }

            return false; // No valid pairing found
      }
}
