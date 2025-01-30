//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2493

//? ⌚ Time complexity ➺ O(V + E)  👉🏻  V = No. of Vertex

//? 🧺 Space complexity ➺ O(V + E) 👉🏻  E = No. of Edges

var magnificentSets = function (n, edges) {
      // Step 1: Build the adjacency list for the graph
      const adj = new Map(); // Adjacency list using a Map

      // Initialize the adjacency list
      for (let i = 1; i <= n; i++) {
            adj.set(i, []);
      }

      // Populate adjacency list with edges
      for (const [node1, node2] of edges) {
            adj.get(node1).push(node2);
            adj.get(node2).push(node1);
      }

      function getConnectedComponent(src, visited) {
            const queue = [src]; // Queue for BFS
            const component = new Set([src]); // Set to store nodes in the connected component
            visited.add(src); // Mark the source node as visited

            while (queue.length > 0) {
                  const node = queue.shift(); // Dequeue the next node
                  for (const neighbor of adj.get(node)) {
                        if (component.has(neighbor)) continue; // Skip already visited nodes
                        queue.push(neighbor); // Add neighbor to the queue
                        component.add(neighbor); // Add neighbor to the component
                        visited.add(neighbor); // Mark neighbor as visited
                  }
            }

            return component;
      }

      function longestPath(src) {
            const queue = [[src, 1]]; // Queue stores [node, group number]
            const dist = new Map(); // Map to store distances (group numbers)
            dist.set(src, 1); // Initialize the distance of the source node

            let maxLength = 0; // Variable to track the longest path length

            while (queue.length > 0) {
                  const [node, length] = queue.shift(); // Dequeue the next node and its group
                  for (const neighbor of adj.get(node)) {
                        if (dist.has(neighbor)) {
                              // If the neighbor belongs to the same group, the graph is not bipartite
                              if (dist.get(neighbor) === length) return -1;
                              continue;
                        }
                        queue.push([neighbor, length + 1]); // Add neighbor with incremented group
                        dist.set(neighbor, length + 1); // Update the group number for the neighbor
                  }
                  maxLength = Math.max(maxLength, length); // Update the maximum path length
            }

            return maxLength;
      }

      const visited = new Set(); // Set to track visited nodes
      let totalGroups = 0; // Variable to store the total number of groups

      // Step 2: Iterate through all nodes and find connected components
      for (let i = 1; i <= n; i++) {
            if (visited.has(i)) continue; // Skip already visited nodes

            // Get the connected component for the current node
            const component = getConnectedComponent(i, visited);

            let maxCount = 0; // Variable to store the maximum group count in the component

            // Step 3: For each node in the component, find the longest path
            for (const src of component) {
                  const length = longestPath(src);
                  if (length === -1) return -1; // If the graph is not bipartite, return -1
                  maxCount = Math.max(maxCount, length); // Update the maximum group count
            }

            totalGroups += maxCount; // Add the maximum group count to the total
      }

      return totalGroups; // Return the total number of groups
}
