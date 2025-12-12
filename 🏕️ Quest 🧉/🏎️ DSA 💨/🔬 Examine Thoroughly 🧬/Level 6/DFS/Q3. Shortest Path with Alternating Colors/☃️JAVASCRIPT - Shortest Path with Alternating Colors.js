//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.4 Q3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var shortestAlternatingPaths = function (n, redEdges, blueEdges) {
      // Separate adjacency lists for red and blue edges
      const red = Array.from({ length: n }, () => []);
      const blue = Array.from({ length: n }, () => []);

      // Build red graph: red[u] = list of nodes reachable via red edge
      for (let [src, dest] of redEdges) {
            red[src].push(dest);
      }

      // Build blue graph: blue[u] = list of nodes reachable via blue edge
      for (let [src, dest] of blueEdges) {
            blue[src].push(dest);
      }

      // answer[i] = shortest alternating path length to node i from 0
      const answer = new Array(n).fill(-1);

      // BFS queue: [node, length, prev_edge_colour]
      // prev_edge_colour: 0=None, 1=RED, 2=BLUE
      const q = [[0, 0, 0]];  // Start from node 0, length 0, no previous edge

      // visited: (node, prev_edge_colour) prevents revisiting same state
      const visit = new Set();
      visit.add("0_0");

      while (q.length > 0) {
            const [node, length, edgeColour] = q.shift();

            // First time reaching this node, record the distance
            if (answer[node] === -1) {
                  answer[node] = length;
            }

            // Next edge must be RED (if previous wasn't RED)
            if (edgeColour !== 1) {
                  for (let nei of red[node]) {
                        const state = `${nei}_1`;
                        if (!visit.has(state)) {
                              visit.add(state);
                              q.push([nei, length + 1, 1]);
                        }
                  }
            }

            // Next edge must be BLUE (if previous wasn't BLUE)
            if (edgeColour !== 2) {
                  for (let nei of blue[node]) {
                        const state = `${nei}_2`;
                        if (!visit.has(state)) {
                              visit.add(state);
                              q.push([nei, length + 1, 2]);
                        }
                  }
            }
      }

      return answer;
};
