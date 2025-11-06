//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3607

//? ⌚ Time complexity ➺ O(c + E + q + c log c) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(c)

var processQueries = function (c, connections, queries) {
      // Create the graph as adjacency list; one extra slot for 1-based indexing
      const graph = Array.from({ length: c + 1 }, () => []);
      // Initialize an array to store vertex info objects (index 0 unused)
      const vertices = Array.from({ length: c + 1 });

      // Initialize each vertex object with offline status, group ID, and vertex ID
      for (let i = 0; i < c; i++) {
            vertices[i + 1] = {
                  offline: false,       // Tracks if station is offline
                  powerGridId: -1,      // Connected component group ID, initially -1 meaning unassigned
                  vertexId: i + 1,      // Station's ID (1-based)
            };
      }

      // Build undirected graph adjacency list
      connections.forEach(([u, v]) => {
            graph[u].push(v);
            graph[v].push(u);
      });

      // Array of min-priority queues (power grids), one per connected component
      const powerGrids = [];

      // For each vertex, if not assigned to any power grid, perform DFS to assign group and build min-priority queue
      for (let i = 1, powerGridId = 0; i <= c; i++) {
            if (vertices[i].powerGridId === -1) {
                  // Create a min-priority queue for this power grid
                  const powerGrid = new MinPriorityQueue();

                  // Recursive DFS traversal to group connected stations together
                  const traverse = (u) => {
                        u.powerGridId = powerGridId;
                        powerGrid.enqueue(u.vertexId); // Add station vertex ID to min-priority queue

                        // Visit all neighbors of current vertex u
                        for (const v of graph[u.vertexId].map((id) => vertices[id])) {
                              if (v.powerGridId === -1) {
                                    traverse(v); // Recursively visit unassigned neighbors
                              }
                        }
                  };

                  traverse(vertices[i]); // Start DFS at current vertex
                  powerGrids.push(powerGrid); // Add this group's priority queue to main array
                  powerGridId += 1; // Increment group ID for next unvisited component
            }
      }

      const ans = [];

      // Process queries
      for (const [op, x] of queries) {
            if (op === 1) {
                  // If station x is online, just add it to results
                  if (vertices[x].offline === false) {
                        ans.push(x);
                  } else {
                        // Otherwise, find the smallest online station within same power grid
                        const powerGrid = powerGrids[vertices[x].powerGridId];

                        // Remove all offline stations from front of the priority queue
                        while (
                              powerGrid.front() !== null &&
                              vertices[powerGrid.front()].offline === true
                        ) {
                              powerGrid.dequeue();
                        }

                        // Add the front station ID if exists, else -1 if none online in this power grid
                        ans.push(powerGrid.front() !== null ? powerGrid.front() : -1);
                  }
            } else if (op === 2) {
                  // Query type 2: mark station x as offline
                  vertices[x].offline = true;
            }
      }

      return ans;
};
