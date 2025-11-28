//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2872

//? ⌚ Time complexity ➺ O(V + E)  👉🏻  V = vertex

//? 🧺 Space complexity ➺ O(V + E) 👉🏻  E = edges

var maxKDivisibleComponents = function (numNodes, edges, nodeValues, k) {
      // Create an adjacency list to represent the graph
      const graph = Array.from({ length: numNodes }, () => []);
      for (const [node1, node2] of edges) {
            graph[node1].push(node2);
            graph[node2].push(node1);
      }

      // Initialize the count of k-divisible components
      let kDivisibleCount = 0;

      // Helper function to perform DFS
      const dfs = (currentNode, parentNode) => {
            // Start with the value of the current node
            let subtreeSum = nodeValues[currentNode];

            // Traverse all children (connected nodes)
            for (const neighbor of graph[currentNode]) {
                  // Avoid revisiting the parent node
                  if (neighbor !== parentNode) {
                        // Add the contribution of the subtree rooted at this child
                        subtreeSum += dfs(neighbor, currentNode);
                  }
            }

            // Check if the total sum of this subtree is divisible by k
            if (subtreeSum % k === 0) {
                  kDivisibleCount++;
            }

            return subtreeSum;
      };

      // Start DFS from node 0 (assumed as the root), with no parent (-1)
      dfs(0, -1);

      return kDivisibleCount;
}