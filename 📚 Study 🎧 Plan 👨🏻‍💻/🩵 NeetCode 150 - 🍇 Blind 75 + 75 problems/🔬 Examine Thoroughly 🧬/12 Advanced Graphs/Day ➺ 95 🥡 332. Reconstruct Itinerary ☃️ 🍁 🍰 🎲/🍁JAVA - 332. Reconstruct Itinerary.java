//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 332

//? ⌚ Time complexity ➺ O(E log E) 👉🏻  E = Edges

//? 🧺 Space complexity ➺ O(E)

import java.util.*;

class Solution {
      public List<String> findItinerary(List<List<String>> tickets) {
            // ----------------------------------------------------------
            // Step 1: Build the Adjacency List (Graph Representation)
            // ----------------------------------------------------------
            // `adj` is an adjacency list where keys are departure airports
            // and values are Deques (double-ended queues) of destination airports.
            // Using a Deque allows efficient removal from the end (`popLast()`)
            // which corresponds to the lexicographically smallest destination after
            // sorting.
            Map<String, Deque<String>> adj = new HashMap<>();

            // Sort tickets lexicographically by destination for each source.
            // We want to process destinations in reverse lexicographical order
            // when building the adj list so that `popLast()` gives the smallest.
            // First, sort all tickets.
            tickets.sort((a, b) -> {
                  int cmp = a.get(0).compareTo(b.get(0)); // Compare source
                  if (cmp == 0) {
                        return a.get(1).compareTo(b.get(1)); // If same source, compare destination
                  }
                  return cmp;
            });

            // Then, populate the adjacency list, adding destinations in reverse order.
            // This prepares the Deque for `popLast()` to get the smallest
            // lexicographically.
            for (int i = tickets.size() - 1; i >= 0; i--) {
                  List<String> ticket = tickets.get(i);
                  String src = ticket.get(0);
                  String dst = ticket.get(1);
                  adj.computeIfAbsent(src, k -> new LinkedList<>()).addLast(dst);
            }

            // `res` will store the itinerary, built in reverse order by DFS.
            LinkedList<String> res = new LinkedList<>();

            // ----------------------------------------------------------
            // Step 2: Implement Hierholzer's Algorithm (DFS for Eulerian Path)
            // ----------------------------------------------------------
            // `dfs` recursively traverses the graph to find the Eulerian path.
            // It takes the current source airport as input.
            // Uses a helper class-level method to access `adj` and `res`.
            // The `adj` map needs to be accessible, so we'll pass it or make it a class
            // member.
            // For simplicity, we'll use a helper method inside the class.
            class HierholzerDFS {
                  void dfs(String src) {
                        // While there are still outgoing edges from the current airport,
                        // continue traversing them. `adj.getOrDefault` handles cases where a node
                        // might not have outgoing edges (e.g., a final destination).
                        while (adj.containsKey(src) && !adj.get(src).isEmpty()) {
                              // Pop the last destination from the Deque. Due to initial sorting,
                              // this is the lexicographically smallest available destination.
                              String dst = adj.get(src).removeLast();
                              // Recursively call DFS on the destination.
                              dfs(dst);
                        }
                        // After exhausting all outgoing edges from `src` (or if `src` had none),
                        // add `src` to the front of the result list. This builds the
                        // itinerary in reverse chronological order during recursive unwinding.
                        res.addFirst(src);
                  }
            }
            HierholzerDFS solver = new HierholzerDFS();

            // ----------------------------------------------------------
            // Step 3: Execute DFS and Return Result
            // ----------------------------------------------------------
            // Start the DFS from 'JFK', the specified starting point.
            solver.dfs("JFK");

            // `res` is already built in the correct chronological order using `addFirst`.
            return res;
      }
}
