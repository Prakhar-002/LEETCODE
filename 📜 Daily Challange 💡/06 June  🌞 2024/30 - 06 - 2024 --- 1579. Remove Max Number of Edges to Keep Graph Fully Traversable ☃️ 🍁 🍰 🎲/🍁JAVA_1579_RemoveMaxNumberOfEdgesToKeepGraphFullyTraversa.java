//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 1579

//? ⌚ Time complexity -> O(n) 👉 given 

//? 🧺 Space complexity -> O(n) 👉 for using array of n length

class UnionFind {
      private int n;
      private int [] parent;
      private int [] rank;

      public UnionFind(int n){
            this.n = n;
            this.parent = new int[n + 1];
            this.rank = new int[n + 1];
            for (int i = 0; i < parent.length; i++) {
                  parent[i] = i;
                  rank[i] = 1;
            }
      }

      public int find(int p){
            while (p != parent[p]) {
                  // we'll update our parent of array value tp parent of parent of p
                  parent[p] = parent[parent[p]];
                  // than check for new parent
                  p = parent[p];
            }
            return p;
      }

      public int union(int firstNode, int secNode){
            // find parent of first node
            int firstNodeParent = find(firstNode);
            // find parent of second node
            int secNodeParent = find(secNode);

            // if they both have same parent so making an ege will give us a cycle
            if (firstNodeParent == secNodeParent) {
                  // so in that case we return false and this will be our ans too
                  return 0;
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

            // once we got true mean we can union then we'll dec n by 1
            n--;

            return 1;
      }

      public boolean isConnected(){
            return n <= 1;
      }
}

class Solution {

      public int maxNumEdgesToRemove(int n, int[][] edges) {
            // we'll build 2 union find separately
            // for alice and for bob
            UnionFind alice = new UnionFind(n);
            UnionFind bob = new UnionFind(n);
            // num of edges we gonna keep
            int count = 0; 

            for (int[] edge : edges) {
                  int type = edge[0];
                  int src = edge[1];
                  int dest = edge[2];

                  // if type is 3 means they both can travel 
                  if (type == 3) {
                        count += (alice.union(src, dest) | bob.union(src, dest));
                  } 
            }

            for (int[] edge : edges) {
                  int type = edge[0];
                  int src = edge[1];
                  int dest = edge[2];

                  //now add individually add for specific type 
                  if (type == 1) {
                        count += alice.union(src, dest);
                  } 

                  else if (type == 2) {
                        count += bob.union(src, dest);
                  } 
            }

            // if both of them could traverse the whole graph 
            // we'll return total nodes - number of nodes we used to build both UF model 
            if (bob.isConnected() && alice.isConnected()) {
                  return edges.length - count;
            }

            // if either of them not able to traverse the whole graph simply return -1
            return -1;
      }
}

