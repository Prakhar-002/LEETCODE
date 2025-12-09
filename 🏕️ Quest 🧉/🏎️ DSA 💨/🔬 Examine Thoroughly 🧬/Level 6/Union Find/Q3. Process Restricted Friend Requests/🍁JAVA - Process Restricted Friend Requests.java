//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.1 Q3

//? ⌚ Time complexity ➺ O(Q × R × α(N))) 👉🏻  Q = len(Request)

//? 🧺 Space complexity ➺ O(1)  -> R = len(restrictions)

import java.util.*;

class Solution {

      // Path compression find operation
      private int find(int x, int[] parent) {
            /*
             * Finds the root parent of node x with path compression
             * Path compression flattens the tree for O(α(n)) amortized time
             */
            if (parent[x] != x) {
                  parent[x] = find(parent[x], parent);
            }
            return parent[x];
      }

      // Union operation by linking roots
      private void union(int x, int y, int[] parent) {
            /*
             * Connects two nodes by linking their roots
             * Simple union by arbitrary linking
             */
            int rootX = find(x, parent);
            int rootY = find(y, parent);
            if (rootX != rootY) {
                  parent[rootY] = rootX;
            }
      }

      // Check if connecting u-v would violate any restriction
      private boolean violatesRestriction(int u, int v, int[][] restrictions, int[] parent) {
            /*
             * Checks if approving friend request (u,v) would connect
             * any forbidden pair (x,y) from restrictions
             */
            int rootU = find(u, parent);
            int rootV = find(v, parent);

            for (int[] restriction : restrictions) {
                  int x = restriction[0];
                  int y = restriction[1];
                  int rootX = find(x, parent);
                  int rootY = find(y, parent);

                  /*
                   * Violation if connecting u-v forces forbidden x-y connection:
                   * Case 1: x in u's group AND y in v's group
                   * Case 2: x in v's group AND y in u's group
                   */
                  if ((rootX == rootU && rootY == rootV) ||
                              (rootX == rootV && rootY == rootU)) {
                        return true; // Violation found
                  }
            }
            return false;
      }

      public boolean[] friendRequests(int n, int[][] restrictions, int[][] requests) {
            /*
             * Main function: Process friend requests while respecting restrictions
             * Returns boolean[] where result[i] = true if request i approved
             */

            // parent[i] = parent of node i (initially self-parent)
            int[] parent = new int[n + 1];
            for (int i = 0; i <= n; i++) {
                  parent[i] = i;
            }

            // result[i] = true if ith request approved, false if rejected
            boolean[] result = new boolean[requests.length];

            // Process each friend request sequentially
            for (int i = 0; i < requests.length; i++) {
                  int[] request = requests[i];
                  int u = request[0];
                  int v = request[1];

                  int rootU = find(u, parent);
                  int rootV = find(v, parent);

                  boolean canBeFriends = true;

                  /*
                   * Early approval: if already in same friend circle,
                   * no restriction violation possible
                   */
                  if (rootU != rootV) {
                        canBeFriends = !violatesRestriction(u, v, restrictions, parent);
                  }

                  if (canBeFriends) {
                        // Approve: union the friend circles
                        union(u, v, parent);
                        result[i] = true;
                  } else {
                        // Reject: don't modify Union-Find structure
                        result[i] = false;
                  }
            }

            return result;
      }
}
