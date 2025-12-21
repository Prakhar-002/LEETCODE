//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1584

//? ⌚ Time complexity ➺ O(n ^ 2 log n) 👉🏻  n = Nodes

//? 🧺 Space complexity ➺ O(n)

var minCostConnectPoints = function (points) {
      // ----------------------------------------------------------
      // Step 1: Build the Adjacency List (Graph Construction)
      // ----------------------------------------------------------
      const N = points.length; // N is the number of points.
      // `adj` is a Map representing the graph.
      // Keys are node indices (0 to N-1), values are arrays of
      // [distance, neighbor_node_index] pairs.
      const adj = new Map();
      // Initialize an empty list for each node's adjacencies.
      for (let i = 0; i < N; i++) {
            adj.set(i, []);
      }

      // Iterate through all unique pairs of points to calculate Manhattan distance
      // and add edges to the adjacency list.
      for (let i = 0; i < N; i++) {
            const [x1, y1] = points[i];
            // Iterate from `i + 1` to avoid duplicate pairs and self-loops.
            for (let j = i + 1; j < N; j++) {
                  const [x2, y2] = points[j];
                  // Calculate the Manhattan distance: |x1 - x2| + |y1 - y2|.
                  const dist = Math.abs(x1 - x2) + Math.abs(y1 - y2);
                  // Add an edge from `i` to `j` with `dist` as weight.
                  adj.get(i).push([dist, j]);
                  // Add an edge from `j` to `i` with `dist` as weight (undirected graph).
                  adj.get(j).push([dist, i]);
            }
      }

      // ----------------------------------------------------------
      // Step 2: Implement Prim's Algorithm for Minimum Spanning Tree (MST)
      // ----------------------------------------------------------
      let res = 0; // `res` will store the total minimum cost to connect all points.
      // `visit` is a Set to keep track of nodes already included in the MST.
      const visit = new Set();
      // `minHeap` is a Min-Priority Queue.
      // It stores elements as [cost, node_index], ordered by `cost`.
      // `cost` is the weight of the edge connecting `node_index` to the current MST.
      // The `MinPriorityQueue` constructor takes a comparator function.
      const minHeap = new MinPriorityQueue((entry) => entry[0]);
      // Start Prim's algorithm from node 0 with a cost of 0.
      minHeap.push([0, 0]); // [cost_to_add_node, node_index]

      // The loop continues until all `N` nodes are included in the MST.
      // The size of the `visit` set indicates how many nodes are in the MST.
      while (visit.size < N) {
            // Extract the edge with the minimum cost from the heap.
            // `pop()` is used based on the provided code, assuming it's the correct method.
            const [cost, i] = minHeap.pop();

            // If this node `i` has already been visited (i.e., already part of the MST),
            // skip it. This handles redundant entries in the priority queue.
            if (visit.has(i)) {
                  continue;
            }

            // Add the `cost` of this edge to the total result, as this edge is part of the MST.
            res += cost;
            // Add `i` to the set of visited nodes, marking it as part of the MST.
            visit.add(i);

            // Explore all neighbors of the newly added node `i`.
            // `adj.get(i)` retrieves the list of neighbors for node `i`.
            const neighbors = adj.get(i);
            // Ensure `neighbors` list exists (though it should due to initialization).
            if (neighbors) {
                  for (const [neiCost, nei] of neighbors) {
                        // If the neighbor `nei` is not yet in the MST (not visited),
                        // push the edge connecting `i` to `nei` into the min-heap.
                        // This edge becomes a candidate for future inclusion in the MST.
                        if (!visit.has(nei)) {
                              minHeap.push([neiCost, nei]);
                        }
                  }
            }
      }

      // ----------------------------------------------------------
      // Step 3: Return the Total Minimum Cost
      // ----------------------------------------------------------
      // Once the loop finishes (all `N` nodes are in the MST), `res` holds the
      // minimum total cost required to connect all points.
      return res;
};