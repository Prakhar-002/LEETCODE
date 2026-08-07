//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3310

//? ⌚ Time complexity ➺ O(V + E) 

//? 🧺 Space complexity ➺ O(V + E)

// BFS from k to mark all suspicious methods, then check if any have outside callers
import java.util.*;

class Solution {
      public List<Integer> remainingMethods(int n, int k, int[][] invocations) {

            // Build adjacency list and track in-degrees
            List<List<Integer>> adj = new ArrayList<>();
            for (int i = 0; i < n; i++)
                  adj.add(new ArrayList<>());

            int[]     inDegree  = new int[n];
            boolean[] suspicious = new boolean[n];

            for (int[] edge : invocations) {
                  int u = edge[0], v = edge[1];
                  adj.get(u).add(v);
                  inDegree[v]++;
            }

            // BFS from k to mark all methods reachable from k as suspicious
            Queue<Integer> que = new LinkedList<>();
            que.offer(k);
            suspicious[k] = true;

            while (!que.isEmpty()) {
                  int curr = que.poll();
                  for (int ngbr : adj.get(curr)) {
                        inDegree[ngbr]--;
                        if (!suspicious[ngbr]) {
                              suspicious[ngbr] = true;
                              que.offer(ngbr);
                        }
                  }
            }

            // If any suspicious method is still called by a non-suspicious method,
            // we cannot safely remove the suspicious group
            boolean cannotRemove = false;
            for (int i = 0; i < n; i++) {
                  if (suspicious[i] && inDegree[i] > 0) {
                        cannotRemove = true;
                        break;
                  }
            }

            if (cannotRemove) {
                  // Return all methods unchanged
                  List<Integer> all = new ArrayList<>();
                  for (int i = 0; i < n; i++) all.add(i);
                  return all;
            }

            // Return only non-suspicious methods
            List<Integer> result = new ArrayList<>();
            for (int i = 0; i < n; i++) {
                  if (!suspicious[i])
                        result.add(i);
            }
            return result;
      }
}