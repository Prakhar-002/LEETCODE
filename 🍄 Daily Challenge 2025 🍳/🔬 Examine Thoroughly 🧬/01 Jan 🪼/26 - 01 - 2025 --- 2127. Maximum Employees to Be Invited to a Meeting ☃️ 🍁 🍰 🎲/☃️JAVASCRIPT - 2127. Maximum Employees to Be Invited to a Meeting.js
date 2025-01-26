//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2127

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of nodes

//? 🧺 Space complexity ➺ O(n)

var maximumInvitations = function (favorite) {
      const N = favorite.length; // Total number of employees
      let longestCycle = 0; // Stores the length of the longest cycle
      const visited = new Array(N).fill(false); // Boolean array to track visited nodes
      const length2Cycles = []; // Stores all cycles of length 2

      // Detect all cycles in the graph
      for (let i = 0; i < N; i++) {
            if (visited[i]) continue; // Skip if the node is already visited

            let start = i,
                  cur = i; // Start traversal from the current node
            const curSet = new Set(); // Set to store nodes in the current traversal path

            // Traverse the graph until a cycle is detected or path ends
            while (!visited[cur]) {
                  visited[cur] = true; // Mark the current node as visited
                  curSet.add(cur); // Add the current node to the path
                  cur = favorite[cur]; // Move to the next node
            }

            // Check if the current node forms a cycle
            if (curSet.has(cur)) {
                  let length = curSet.size; // Length of the current traversal path

                  // Remove nodes outside the cycle
                  while (start !== cur) {
                        length--;
                        start = favorite[start];
                  }

                  // Update the longest cycle length
                  longestCycle = Math.max(longestCycle, length);

                  // Store length-2 cycles
                  if (length === 2) {
                        length2Cycles.push([cur, favorite[cur]]);
                  }
            }
      }

      // Build an inverted graph (reverse edges)
      const inverted = Array.from({ length: N }, () => []);
      for (let i = 0; i < N; i++) {
            inverted[favorite[i]].push(i);
      }

      // BFS to find the longest chain leading to a specific node
      const bfs = (src, parent) => {
            const q = [[src, 0]]; // Queue for BFS (node, chain length)
            let maxLength = 0;

            while (q.length) {
                  const [node, length] = q.shift();

                  // Skip the parent node to avoid revisiting
                  if (node === parent) continue;

                  maxLength = Math.max(maxLength, length); // Update maximum length

                  // Add neighbors to the queue
                  for (const nei of inverted[node]) {
                        q.push([nei, length + 1]);
                  }
            }

            return maxLength; // Return the longest chain length
      };

      // Find the sum of the longest non-circular chains connected to cycles
      let chainSum = 0;

      // For each length-2 cycle, calculate the sum of the longest chains
      for (const [n1, n2] of length2Cycles) {
            chainSum += bfs(n1, n2) + bfs(n2, n1) + 2; // Add 2 for the cycle itself
      }

      // Return the maximum of the longest cycle or chain sum
      return Math.max(chainSum, longestCycle);
};
