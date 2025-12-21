//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L7.5 Q1

//? ⌚ Time complexity ➺ O(E ^ 2 * α(V)) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(E + V)

class UnionFind {
      private int[] parent;

      public UnionFind(int n) {
            parent = new int[n];
            for (int i = 0; i < n; i++)
                  parent[i] = i;
      }

      public int find(int p) {
            // Path compression: parent[p] = find(parent[p])
            return parent[p] == p ? p : (parent[p] = find(parent[p]));
      }

      public void union(int u, int v) {
            int pu = find(u), pv = find(v);
            parent[pu] = pv;
      }
}

class Solution {
      public List<List<Integer>> findCriticalAndPseudoCriticalEdges(int n, int[][] edges) {
            List<Integer> critical = new ArrayList<>();
            List<Integer> pseudoCritical = new ArrayList<>();

            // Append original index to each edge: [u, v, w] → [u, v, w, idx]
            for (int i = 0; i < edges.length; i++) {
                  int[] edge = edges[i];
                  edge = Arrays.copyOf(edge, edge.length + 1);
                  edge[3] = i;
                  edges[i] = edge;
            }

            // Sort edges by weight (Kruskal's MST)
            Arrays.sort(edges, (a, b) -> Integer.compare(a[2], b[2]));

            // Compute MST weight of the original graph
            int mstwt = findMST(n, edges, -1, -1);

            // For each edge, check if it is critical or pseudo-critical
            for (int i = 0; i < edges.length; i++) {
                  // If removing this edge increases MST weight → critical
                  if (mstwt < findMST(n, edges, i, -1))
                        critical.add(edges[i][3]);
                  // Else if forcing this edge still gives same MST weight → pseudo-critical
                  else if (mstwt == findMST(n, edges, -1, i))
                        pseudoCritical.add(edges[i][3]);
            }

            // Return [critical, pseudoCritical]
            List<List<Integer>> result = new ArrayList<>();
            result.add(critical);
            result.add(pseudoCritical);
            return result;
      }

      // Helper: compute MST weight, optionally block one edge and force one edge
      private int findMST(int n, int[][] edges, int block, int e) {
            UnionFind uf = new UnionFind(n);
            int weight = 0;

            // If e != -1, force include edge e first
            if (e != -1) {
                  weight += edges[e][2];
                  uf.union(edges[e][0], edges[e][1]);
            }

            // Build MST with Kruskal: iterate over sorted edges
            for (int i = 0; i < edges.length; i++) {
                  if (i == block)
                        continue; // skip blocked edge

                  int u = edges[i][0], v = edges[i][1], w = edges[i][2];
                  if (uf.find(u) == uf.find(v))
                        continue; // already connected

                  uf.union(u, v);
                  weight += w;
            }

            // Check if MST connects all nodes (connected component of 0 contains all)
            for (int i = 0; i < n; i++) {
                  if (uf.find(i) != uf.find(0))
                        return Integer.MAX_VALUE; // disconnected → invalid MST
            }

            return weight;
      }
}
