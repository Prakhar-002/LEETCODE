//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.4 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of nodes

//? 🧺 Space complexity ➺ O(n)

var minimumWeight = function (n, edges, src1, src2, dest) {
      /**
       * Find minimum weight path: src1 → X → src2 → X → dest (X can be same node)
       * Strategy: 3 Dijkstras compute shortest paths:
       *   1. dist1: src1 → all nodes X
       *   2. dist2: src2 → all nodes X  
       *   3. dist3: all nodes X → dest (using reversed graph)
       * Answer: min(dist1[X] + dist2[X] + dist3[X]) for all reachable X
       */

      // Forward graph: node → List<(neighbor, weight)>
      const graph = new Map();

      // Reversed graph for computing dest→all paths (equivalent to all→dest)
      const reversedGraph = new Map();

      // Build both graphs from edges
      for (let [u, v, w] of edges) {
            // Forward graph: u → v (weight w)
            if (!graph.has(u)) graph.set(u, []);
            graph.get(u).push([v, w]);

            // Reversed graph: v → u (weight w) for dest→all computation
            if (!reversedGraph.has(v)) reversedGraph.set(v, []);
            reversedGraph.get(v).push([u, w]);
      }

      // Dijkstra 1: Shortest paths from src1 to all reachable nodes
      const dist1 = dijkstra(n, graph, src1);

      // Dijkstra 2: Shortest paths from src2 to all reachable nodes
      const dist2 = dijkstra(n, graph, src2);

      // Dijkstra 3: Shortest paths from dest to all nodes (reversed = all→dest)
      const dist3 = dijkstra(n, reversedGraph, dest);

      // Find minimum total path weight through any intermediate node X
      let res = Infinity;
      for (let i = 0; i < n; i++) {
            // Check if node i is reachable from all 3 sources
            if (dist1.has(i) && dist2.has(i) && dist3.has(i)) {
                  // Total path: src1→i + src2→i + i→dest
                  res = Math.min(res, dist1.get(i) + dist2.get(i) + dist3.get(i));
            }
      }

      // Return -1 if no valid path exists
      return res === Infinity ? -1 : res;
};

function dijkstra(n, graph, src) {
      /**
       * Dijkstra's algorithm: Compute shortest paths from src to all reachable nodes
       * Uses priority queue for greedy selection of minimum distance node
       * dist map serves dual purpose: distance storage + visited tracking
       */

      // Min-heap priority queue using heapq-like behavior
      const pq = [[0, src]];  // [distance, node]
      const dist = new Map();

      while (pq.length > 0) {
            // Extract node with minimum distance
            pq.sort((a, b) => a[0] - b[0]);  // Simulate heap pop
            const [curDistance, curNode] = pq.shift();

            // Pruning: Skip if already processed with better distance
            if (dist.has(curNode)) {
                  continue;
            }

            // Record shortest distance to current node
            dist.set(curNode, curDistance);

            // Relax all outgoing edges from current node
            const neighbors = graph.get(curNode) || [];
            for (let [nei, cost] of neighbors) {
                  // Only relax if neighbor not yet processed
                  if (!dist.has(nei)) {
                        // Potential shorter path through current node
                        pq.push([curDistance + cost, nei]);
                  }
            }
      }

      return dist;  // Return distances to all reachable nodes
}
