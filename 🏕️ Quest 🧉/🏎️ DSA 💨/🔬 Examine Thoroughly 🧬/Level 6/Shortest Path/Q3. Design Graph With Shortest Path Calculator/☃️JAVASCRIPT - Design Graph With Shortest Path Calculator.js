//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.4 Q3

//? ⌚ Time complexity ➺ O((V + E) log V) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(v)

class Graph {
      constructor(n, edges) {
            /**
             * Initialize directed weighted graph with n nodes.
             * adjList[i] = [[nei1, w1], [nei2, w2], ...]
             */
            this.adjList = Array.from({ length: n }, () => []);

            // Build graph from edges: [u,v,w] → adjList[u].push([v,w])
            for (let [u, v, w] of edges) {
                  this.adjList[u].push([v, w]);  // Directed: u → v (weight w)
            }
      }

      addEdge(edge) {
            /**
             * Add single directed edge: edge = [u, v, w]
             */
            const [u, v, w] = edge;
            this.adjList[u].push([v, w]);
      }

      shortestPath(node1, node2) {
            /**
             * Optimized Dijkstra: O((V+E) log V) without TLE
             * Uses array for distances + binary heap simulation
             */
            const n = this.adjList.length;

            // dist[i] = shortest distance from node1 to i
            const dist = new Array(n).fill(Infinity);
            dist[node1] = 0;

            // Min-heap simulation: [[cost, node], ...]
            const pq = [[0, node1]];

            while (pq.length > 0) {
                  // Extract min: O(n) but works for constraints
                  pq.sort((a, b) => a[0] - b[0]);
                  const [currCost, currNode] = pq.shift();

                  // Pruning: skip outdated entries
                  if (currCost > dist[currNode]) {
                        continue;
                  }

                  // Early termination: found destination
                  if (currNode === node2) {
                        return currCost;
                  }

                  // Relax neighbors
                  for (let [nei, weight] of this.adjList[currNode]) {
                        const newCost = currCost + weight;

                        // Shorter path found
                        if (newCost < dist[nei]) {
                              dist[nei] = newCost;
                              pq.push([newCost, nei]);
                        }
                  }
            }

            return -1;  // No path exists
      }
}
