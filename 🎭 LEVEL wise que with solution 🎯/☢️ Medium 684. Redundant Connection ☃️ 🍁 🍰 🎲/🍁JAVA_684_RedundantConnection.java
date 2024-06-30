//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 684

//* Union find algorithm

//? ⌚ Time complexity -> O(n) 👉 length of edges array

//? 🧺 Space complexity -> O(n) 👉 using 2 arr of length equal to len of edges

import java.util.Arrays;

class Solution {

      // finding the parent of our node
      private int find(int n, int[] parent) {
            // find it in our parent array
            int p = parent[n];

            while (p != parent[p]) {
                  // we'll update our parent of array value tp parent of parent of p
                  parent[p] = parent[parent[p]];
                  // than check for new parent
                  p = parent[p];
            }
            return p;
      }

      private boolean union(int firstNode, int secNode, int[] parent, int[] rank) {
            // find parent of first node
            int firstNodeParent = find(firstNode, parent);
            // find parent of second node
            int secNodeParent = find(secNode, parent);

            // if they both have same parent so making an ege will give us a cycle
            if (firstNodeParent == secNodeParent) {
                  // so in that case we return false and this will be our ans too
                  return false;
            }

            // if rank of first parent is greater than other
            if (rank[firstNodeParent] > rank[secNodeParent]) {
                  // then our parent node will be first one
                  // and we'll update the parent of sec node to first node parent
                  parent[secNodeParent] = firstNodeParent;
                  // and node then rank of ultimate parent of first node...
                  // ...will be inc by rank of ultimate parent of second node
                  rank[firstNodeParent] += rank[secNodeParent];
            }

            else {
                  // vice-versa
                  parent[firstNodeParent] = secNodeParent;
                  rank[secNodeParent] += rank[firstNodeParent];
            }

            return true;
      }

      public int[] findRedundantConnection(int[][] edges) {
            // parent array will store ultimate parent of each node
            int[] parent = new int[edges.length + 1];
            for (int i = 0; i < parent.length; i++) {
                  parent[i] = i;
            }
            // rank array will give the info about node which one of them will be parent
            // node among all
            int[] rank = new int[edges.length + 1];
            Arrays.fill(rank, 1);

            for (int[] edge : edges) {
                  int firstNode = edge[0];
                  int secNode = edge[1];
                  // if we get false any where in whole edges array
                  if (union(firstNode, secNode, parent, rank) == false) {
                        // that will be our ans
                        return edge;
                  }
            }
            // just for missing return statement error 
            return edges[0];
      }
}