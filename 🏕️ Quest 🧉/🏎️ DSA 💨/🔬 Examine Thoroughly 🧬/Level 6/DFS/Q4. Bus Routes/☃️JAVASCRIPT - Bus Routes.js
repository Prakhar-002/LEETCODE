//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.4 Q4

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var numBusesToDestination = function (routes, source, target) {
      // Find minimum number of buses needed from source to target

      if (source === target) {
            return 0;  // Already at destination
      }

      // adj[stop] = list of bus routes that visit this stop
      const adj = new Map();

      // Build adjacency list: map each stop to bus routes passing through it
      for (let i = 0; i < routes.length; i++) {
            for (let stop of routes[i]) {
                  if (!adj.has(stop)) {
                        adj.set(stop, []);
                  }
                  adj.get(stop).push(i);
            }
      }

      // BFS queue will contain bus route indices
      const q = [];

      // Track visited bus routes (not stops)
      const visited = new Set();

      // Start BFS from all buses that pass through source stop
      if (adj.has(source)) {
            for (let route of adj.get(source)) {
                  q.push(route);
                  visited.add(route);  // Mark bus as visited
            }
      }

      let busCount = 1;  // Number of bus changes

      while (q.length > 0) {
            const size = q.length;  // Process current level

            for (let i = 0; i < size; i++) {
                  const idx = q.shift();  // Current bus route

                  // Check all stops on current bus
                  for (let stop of routes[idx]) {
                        if (stop === target) {
                              return busCount;  // Found target stop!
                        }

                        // From this stop, try all other buses
                        if (adj.has(stop)) {
                              for (let nextRoute of adj.get(stop)) {
                                    if (!visited.has(nextRoute)) {
                                          visited.add(nextRoute);
                                          q.push(nextRoute);  // Transfer to next bus
                                    }
                              }
                        }
                  }
            }

            busCount++;  // Next level
      }

      return -1;  // No route found
};
