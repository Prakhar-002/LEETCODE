//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 743

//? ⌚ Time complexity ➺ O(E * log V) 

//? 🧺 Space complexity ➺ O(E + V)

var networkDelayTime = function (times, n, k) {
      // ----------------------------------------------------------
      // Step 1: Build Adjacency List
      // ----------------------------------------------------------
      // `edges` maps a node to its list of neighbors and their travel times ([neighbor_node, time_to_neighbor]).
      const edges = new Map();
      for (let i = 1; i <= n; i++) {
            edges.set(i, []); // Initialize an empty list for each node
      }
      // Populate the graph from the input `times`.
      for (const [u, v, w] of times) {
            edges.get(u).push([v, w]);
      }

      // ----------------------------------------------------------
      // Step 2: Dijkstra's Algorithm Initialization
      // ----------------------------------------------------------
      // `minHeap`: Stores [current_distance_from_source, node_id], ordered by distance.
      const minHeap = new MinPriorityQueue((entry) => entry[0]);
      minHeap.enqueue([0, k]); // Start with the source node 'k' at distance 0.

      // `visit`: Set to keep track of nodes whose shortest path has been finalized.
      const visit = new Set();
      // `t`: Will store the maximum time taken for a signal to reach any node.
      let t = 0;

      // ----------------------------------------------------------
      // Step 3: Execute Dijkstra's Algorithm
      // ----------------------------------------------------------
      while (!minHeap.isEmpty()) {
            // Get node with the smallest distance.
            const [w1, n1] = minHeap.dequeue();

            // If already visited, skip.
            if (visit.has(n1)) continue;

            visit.add(n1); // Mark as visited.
            t = w1;        // Update max time reached.

            // Explore neighbors of the current node `n1`.
            const neighbors = edges.get(n1);
            if (neighbors) { // Check if the node has outgoing edges.
                  for (const [n2, w2] of neighbors) {
                        // If neighbor not yet visited, add to heap with new distance.
                        if (!visit.has(n2)) {
                              minHeap.enqueue([w1 + w2, n2]);
                        }
                  }
            }
      }

      // ----------------------------------------------------------
      // Step 4: Determine Final Result
      // ----------------------------------------------------------
      // Return `t` if all `n` nodes were visited; otherwise, return -1 (unreachable).
      return visit.size === n ? t : -1;
};