//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L7.5 Q1

//? ⌚ Time complexity ➺ O(E ^ 2 * α(V)) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(E + V)

class UnionFind {
      constructor(n) {
            this.parent = Array.from({ length: n }, (_, i) => i);
      }

      find(p) {
            // Path compression: parent[p] = find(parent[p])
            if (this.parent[p] !== p) {
                  this.parent[p] = this.find(this.parent[p]);
            }
            return this.parent[p];
      }

      union(u, v) {
            const pu = this.find(u);
            const pv = this.find(v);
            this.parent[pu] = pv;
      }
}

var findCriticalAndPseudoCriticalEdges = function (n, edges) {
      const critical = [];
      const pseudoCritical = [];

      // Append original index to each edge: [u, v, w] → [u, v, w, idx]
      for (let i = 0; i < edges.length; i++) {
            edges[i].push(i);
      }

      // Sort edges by weight (Kruskal's MST)
      edges.sort((a, b) => a[2] - b[2]);

      // Compute MST weight of the original graph
      const mstwt = findMST(n, edges, -1, -1);

      // For each edge, check if it is critical or pseudo-critical
      for (let i = 0; i < edges.length; i++) {
            // If removing this edge increases MST weight → critical
            if (mstwt < findMST(n, edges, i, -1))
                  critical.push(edges[i][3]);
            // Else if forcing this edge still gives same MST weight → pseudo-critical
            else if (mstwt === findMST(n, edges, -1, i))
                  pseudoCritical.push(edges[i][3]);
      }

      // Return [critical, pseudoCritical]
      return [critical, pseudoCritical];
};

// Helper: compute MST weight, optionally block one edge and force one edge
function findMST(n, edges, block, e) {
      const uf = new UnionFind(n);
      let weight = 0;

      // If e != -1, force include edge e first
      if (e !== -1) {
            weight += edges[e][2];
            uf.union(edges[e][0], edges[e][1]);
      }

      // Build MST with Kruskal: iterate over sorted edges
      for (let i = 0; i < edges.length; i++) {
            if (i === block) continue; // skip blocked edge

            const [u, v, w] = edges[i];
            if (uf.find(u) === uf.find(v)) continue; // already connected

            uf.union(u, v);
            weight += w;
      }

      // Check if MST connects all nodes (connected component of 0 contains all)
      for (let i = 0; i < n; i++) {
            if (uf.find(i) !== uf.find(0))
                  return Number.MAX_SAFE_INTEGER; // disconnected → invalid MST
      }

      return weight;
}
