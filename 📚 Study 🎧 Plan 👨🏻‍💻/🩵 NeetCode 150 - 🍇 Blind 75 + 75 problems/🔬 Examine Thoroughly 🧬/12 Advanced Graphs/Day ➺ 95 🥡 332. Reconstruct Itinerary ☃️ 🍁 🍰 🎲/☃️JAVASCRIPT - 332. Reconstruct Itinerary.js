//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 332

//? ⌚ Time complexity ➺ O(E log E) 👉🏻  E = Edges

//? 🧺 Space complexity ➺ O(E)

var findItinerary = function (tickets) {
      // ----------------------------------------------------------
      // Step 1: Build the Adjacency List (Graph Representation)
      // ----------------------------------------------------------
      // `adj` is a Map representing the graph.
      // Keys are departure airports, values are arrays of destination airports.
      // Arrays will function as stacks where `pop()` extracts the last (lexicographically smallest) element.
      const adj = new Map();

      // Sort tickets: first by source, then by destination.
      // This is crucial for correctly finding the lexicographically smallest itinerary.
      tickets.sort((a, b) => {
            if (a[0] !== b[0]) {
                  return a[0].localeCompare(b[0]); // Sort by source airport
            }
            return a[1].localeCompare(b[1]); // If sources are same, sort by destination airport
      });

      // Populate the adjacency list.
      // For each source, destinations are added in reverse lexicographical order.
      // This way, `pop()` will always give the lexicographically smallest available destination.
      // Iterating through sorted tickets in reverse and pushing to a list works.
      for (let i = tickets.length - 1; i >= 0; i--) {
            const [src, dst] = tickets[i];
            if (!adj.has(src)) {
                  adj.set(src, []);
            }
            adj.get(src).push(dst);
      }

      // `res` will store the itinerary, built in reverse order by DFS.
      const res = [];

      // ----------------------------------------------------------
      // Step 2: Implement Hierholzer's Algorithm (DFS for Eulerian Path)
      // ----------------------------------------------------------
      // `dfs` recursively traverses the graph to find the Eulerian path.
      // It takes the current source airport as input.
      const dfs = (src) => {
            // While there are still outgoing edges from the current `src` airport.
            // `adj.get(src)` might be `undefined` if `src` is a final destination with no outgoing flights.
            while (adj.has(src) && adj.get(src).length > 0) {
                  // `pop()` removes the last element. Due to how we populated `adj` (in reverse sorted order),
                  // this `dst` will be the lexicographically smallest available destination.
                  const dst = adj.get(src).pop();
                  // Recursively call DFS on the destination.
                  dfs(dst);
            }
            // After exhausting all outgoing edges from `src` (or if `src` had none left),
            // add `src` to the result list. This builds the itinerary in reverse.
            res.push(src);
      };

      // ----------------------------------------------------------
      // Step 3: Execute DFS and Return Result
      // ----------------------------------------------------------
      // Start the DFS from 'JFK', the specified starting point.
      dfs('JFK');

      // The `res` array contains the itinerary in reverse order (from end to start).
      // Reverse it to get the correct chronological order and return.
      return res.reverse();
};
