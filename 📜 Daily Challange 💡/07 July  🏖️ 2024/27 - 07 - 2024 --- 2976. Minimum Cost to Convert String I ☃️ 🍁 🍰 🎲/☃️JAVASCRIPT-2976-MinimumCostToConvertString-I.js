//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 2976

//? ⌚ Time complexity ➺ O(n * m) 👉🏻 m = len(changed array) n = len(target string)

//? 🧺 Space complexity ➺ O(m) 👉🏻 making adjacency list

var minimumCost = function (source, target, original, changed, cost) {
      // Initialize a dictionary to store conversion costs
      const conversionCosts = {};

      // Populate the conversion costs dictionary
      for (let i = 0; i < cost.length; i++) {
            const src = original[i], dest = changed[i];

            // if map do not contain our src assign with empty
            if (!conversionCosts[src]) {
                  conversionCosts[src] = {};
            }

            // if dest is in our map 
            if (dest in conversionCosts[src]) {
                  // assign with min our cost or cost[i]
                  conversionCosts[src][dest] = Math.min(conversionCosts[src][dest], cost[i]);
            } else {
                  // else just assign with cost[i]
                  conversionCosts[src][dest] = cost[i];
            }
      }

      // Define infinity as a large number
      const INFINITY = Infinity;

      // Initialize the distance matrix with infinity
      const dist = Array.from({ length: 26 }, () => Array(26).fill(INFINITY));

      // Compute the minimum conversion costs using Dijkstra's algorithm
      for (let i = 0; i < 26; i++) {
            const node = String.fromCharCode('a'.charCodeAt(0) + i);
            const heap = [];
            heap.push([0, node]);
            while (heap.length > 0) {
                  const [curCost, src] = heap.shift();
                  if (conversionCosts[src]) {
                        for (const [nei, neiCost] of Object.entries(conversionCosts[src])) {
                              const j = nei.charCodeAt(0) - 'a'.charCodeAt(0);
                              if (curCost + neiCost < dist[i][j]) {
                                    dist[i][j] = curCost + neiCost;
                                    heap.push([curCost + neiCost, nei]);
                              }
                        }
                  }
            }
      }

      // Calculate the total minimum cost to convert source to target
      let totalCost = 0;
      for (let k = 0; k < source.length; k++) {
            const src = source[k], dest = target[k];
            if (src === dest) continue;
            const i = src.charCodeAt(0) - 'a'.charCodeAt(0);
            const j = dest.charCodeAt(0) - 'a'.charCodeAt(0);
            if (dist[i][j] < INFINITY) {
                  totalCost += dist[i][j];
            } else {
                  return -1;
            }
      }
      return totalCost;
};