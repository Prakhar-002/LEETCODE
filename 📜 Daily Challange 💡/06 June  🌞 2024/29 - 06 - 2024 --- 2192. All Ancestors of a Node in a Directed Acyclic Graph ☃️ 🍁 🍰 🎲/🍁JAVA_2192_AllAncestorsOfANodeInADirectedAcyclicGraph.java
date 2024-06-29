//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 2192

//? ⌚ Time complexity -> O(n^2) 👉 given

//? 🧺 Space complexity -> O(n) 👉 given

import java.util.*;

class Solution {

      private void dfs(List<List<Integer>> graph, int i, int j, List<List<Integer>> ancestors) {
            // get tha list of ancestors at index j mean that will be ancestors of our index i
            for (int g : graph.get(j)) {
                  // checking if empty or last elem is not same elem 
                  // means 0 is not the ancestor of 0
                  if (ancestors.get(g).isEmpty() || ancestors.get(g).get(ancestors.get(g).size() - 1) != i) {
                        // push back into our array
                        ancestors.get(g).add(i);
                        // call for next element
                        dfs(graph, i, g, ancestors);
                  }
            }
      }

      public List<List<Integer>> getAncestors(int n, int[][] edges) {
            List<List<Integer>> ancestors = new ArrayList<>(n);
            List<List<Integer>> graph = new ArrayList<>(n);

            for (int i = 0; i < n; i++) {
                  ancestors.add(new ArrayList<>());
                  graph.add(new ArrayList<>());
            }

            // edgeList = [[0,3],[0,4],[1,3],[2,4],[2,7],[3,5],[3,6],[3,7],[4,6]]

            for (int[] edge : edges) {
                  graph.get(edge[0]).add(edge[1]);
            }

            // * graph = [[3, 4], [3], [4, 7], [5, 6, 7], [6]]

            // We call our function for every index o to N
            // call with our graph and index and index of list of ancestor
            // and our ans ancestors
            for (int i = 0; i < n; i++) {
                  dfs(graph, i, i, ancestors);
            }

            return ancestors;
      }
}