//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3607

//? ⌚ Time complexity ➺ O(c + E + q + c log c) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(c)

import java.util.*;

class Solution {
      public int[] processQueries(int c, int[][] connections, int[][] queries) {
            // Build adjacency list representing undirected graph of stations
            Map<Integer, List<Integer>> adj = new HashMap<>();
            for (int i = 1; i <= c; i++) {
                  adj.put(i, new ArrayList<>());
            }
            for (int[] conn : connections) {
                  int u = conn[0], v = conn[1];
                  adj.get(u).add(v); // Add edge u->v
                  adj.get(v).add(u); // Add edge v->u for undirected graph
            }

            Set<Integer> online = new HashSet<>(); // Tracks stations that are online (visited)
            Map<Integer, Integer> stationGroup = new HashMap<>(); // Maps each station to its connected component group
                                                                  // ID
            Map<Integer, PriorityQueue<Integer>> minHeaps = new HashMap<>(); // Each group ID maps to a min-heap of
                                                                             // stations

            // Nested DFS class to identify connected components and populate min-heaps per
            // group
            class DFS {
                  void dfs(int station, int groupId) {
                        // If station already online, skip to avoid revisiting
                        if (online.contains(station))
                              return;

                        online.add(station); // Mark station as online/visited
                        stationGroup.put(station, groupId); // Assign the group ID to this station

                        minHeaps.putIfAbsent(groupId, new PriorityQueue<>());
                        minHeaps.get(groupId).offer(station); // Add station to corresponding min-heap

                        // Recurse for all neighbors of current station
                        for (int nei : adj.get(station)) {
                              dfs(nei, groupId);
                        }
                  }
            }
            DFS dfsInstance = new DFS();

            // Discover connected components by running DFS from each station
            for (int s = 1; s <= c; s++) {
                  dfsInstance.dfs(s, s); // Use station number as group ID
            }

            List<Integer> ans = new ArrayList<>(); // Stores results for queries of type 1

            // Process each query in given order
            for (int[] query : queries) {
                  int qType = query[0];
                  int qStation = query[1];

                  if (qType == 1) {
                        // If station currently online, return station itself
                        if (online.contains(qStation)) {
                              ans.add(qStation);
                              continue;
                        }
                        int groupId = stationGroup.get(qStation);
                        PriorityQueue<Integer> minHeap = minHeaps.get(groupId);

                        // Clean min-heap by removing offline stations from top
                        while (!minHeap.isEmpty() && !online.contains(minHeap.peek())) {
                              minHeap.poll();
                        }
                        // Add the smallest online station in group if present; else -1
                        if (!minHeap.isEmpty()) {
                              ans.add(minHeap.peek());
                        } else {
                              ans.add(-1);
                        }
                  } else {
                        // Query type 2: remove the station from online set (take offline)
                        online.remove(qStation);
                  }
            }

            // Convert list of results to int array before returning
            return ans.stream().mapToInt(Integer::intValue).toArray();
      }
}
