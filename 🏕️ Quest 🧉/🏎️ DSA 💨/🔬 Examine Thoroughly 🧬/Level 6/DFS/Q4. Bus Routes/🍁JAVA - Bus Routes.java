//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.4 Q4

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public int numBusesToDestination(int[][] routes, int source, int target) {
            // Find minimum number of buses needed from source to target stop

            if (source == target) {
                  return 0; // Already at destination
            }

            // adj[stop] = list of bus routes that visit this stop
            Map<Integer, List<Integer>> adj = new HashMap<>();

            // Build adjacency list: map each stop to bus routes passing through it
            for (int i = 0; i < routes.length; i++) {
                  for (int stop : routes[i]) {
                        adj.computeIfAbsent(stop, k -> new ArrayList<>()).add(i);
                  }
            }

            // BFS queue will contain bus route indices
            Queue<Integer> q = new LinkedList<>();

            // Track visited bus routes (not stops)
            Set<Integer> visited = new HashSet<>();

            // Start BFS from all buses that pass through source stop
            if (adj.containsKey(source)) {
                  for (int route : adj.get(source)) {
                        q.offer(route);
                        visited.add(route); // Mark bus as visited
                  }
            }

            int busCount = 1; // Number of bus changes (1 means took 1 bus)

            while (!q.isEmpty()) {
                  int size = q.size(); // Process current level (same bus count)

                  while (size > 0) {
                        size--;
                        int idx = q.poll(); // Current bus route

                        // Check all stops on current bus
                        for (int stop : routes[idx]) {
                              if (stop == target) {
                                    return busCount; // Found target stop!
                              }

                              // From this stop, try all other buses that haven't been visited
                              if (adj.containsKey(stop)) {
                                    for (int nextRoute : adj.get(stop)) {
                                          if (!visited.contains(nextRoute)) {
                                                visited.add(nextRoute);
                                                q.offer(nextRoute); // Transfer to next bus
                                          }
                                    }
                              }
                        }
                  }

                  busCount++; // Move to next level (one more bus change)
            }

            return -1; // No route found
      }
}
