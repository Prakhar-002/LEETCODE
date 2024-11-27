//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3243

//? ⌚ Time complexity ➺ O(n + q ⋅ (n + m))

//? 🧺 Space complexity ➺ O(n + m + q)

var shortestDistanceAfterQueries = function (n, queries) {
      // Step 1: Initialize adjacency list for the graph
      const adjacencyList = Array.from({ length: n }, (_, i) => (i < n - 1 ? [i + 1] : []));

      // Helper function to compute the shortest path using BFS
      const computeShortestPath = () => {
            const queue = [[0, 0]]; // [current_node, current_distance]
            const visited = new Set();
            visited.add(0);

            while (queue.length > 0) {
                  const [currentNode, currentDistance] = queue.shift();

                  // If we reach the last node, return the distance
                  if (currentNode === n - 1) {
                        return currentDistance;
                  }

                  // Explore all neighbors
                  for (const neighbor of adjacencyList[currentNode]) {
                        if (!visited.has(neighbor)) {
                              queue.push([neighbor, currentDistance + 1]);
                              visited.add(neighbor);
                        }
                  }
            }

            // If node n-1 is not reachable
            return -1;
      };

      // Step 2: Process each query
      const results = [];
      for (const [src, dst] of queries) {
            // Add the directed edge (src -> dst) to the adjacency list
            adjacencyList[src].push(dst);

            // Compute the shortest path after adding the edge
            results.push(computeShortestPath());
      }

      return results;
}

