
//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1334

//? ⌚ Time complexity -> O(n^2 log n) 👉🏻 Dijkstra algorithm

//? 🧺 Space complexity -> O(n) 👉🏻 Building adjacency list 

import java.util.*;

class Solution {
      // make adjacency list for easy lookup of connected cities and distances.
      private Map<Integer, List<int[]>> buildAdjacencyList(int[][] edges) {
            Map<Integer, List<int[]>> adjacency = new HashMap<>();

            for (int[] edge : edges) {
                  int cityOne = edge[0];
                  int cityTwo = edge[1];
                  int dist = edge[2];

                  adjacency.putIfAbsent(cityOne, new ArrayList<>());
                  adjacency.putIfAbsent(cityTwo, new ArrayList<>());

                  adjacency.get(cityOne).add(new int[] { cityTwo, dist });
                  adjacency.get(cityTwo).add(new int[] { cityOne, dist });
            }

            return adjacency;
      }

      // dijkstra algo to find the shortest paths from a given city to all other
      // cities.
      private int dijkstra(int city, Map<Integer, List<int[]>> adjacency, int distanceThreshold) {
            PriorityQueue<int[]> heap = new PriorityQueue<>(Comparator.comparingInt(a -> a[0]));

            heap.add(new int[] { 0, city }); // dist, src
            // The `visit` set keeps track of visited cities to avoid cycles
            Set<Integer> visit = new HashSet<>();

            while (!heap.isEmpty()) {
                  // repeatedly extracts the city with the minimum distance from the priority
                  // queue
                  int[] current = heap.poll();
                  int cityDist = current[0];
                  int node = current[1];

                  // if already visited continue
                  if (visit.contains(node)) {
                        continue;
                  }

                  // add to our visit set
                  visit.add(node);

                  for (int[] neighbor : adjacency.getOrDefault(node, new ArrayList<>())) {
                        int nei = neighbor[0];
                        int dist = neighbor[1];
                        // calc the dist from our src to neighbor
                        int neiDist = dist + cityDist;

                        // if it is less than distanceThreshold
                        if (neiDist <= distanceThreshold) {
                              // add to our priority queue
                              heap.add(new int[] { neiDist, nei });
                        }
                  }
            }

            // return the all cities that can be reached with distanceThreshold except
            // ourself
            return visit.size() - 1;
      }

      public int findTheCity(int n, int[][] edges, int distanceThreshold) {
            Map<Integer, List<int[]>> adjacency = buildAdjacencyList(edges);

            // These track the city ID with the minimum number of reachable neighbors
            // and the count of these neighbors, respectively
            int city = -1;
            int minNeighbor = n;

            // call our dijkstra algo for every city
            for (int curCity = 0; curCity < n; curCity++) {
                  // find the number of cities within the distance threshold
                  int neighbor = dijkstra(curCity, adjacency, distanceThreshold);
                  // updates `city` and `min_neighbor` if city with the fewest reachable
                  // neighbors.
                  if (neighbor <= minNeighbor) {
                        city = curCity;
                        minNeighbor = neighbor;
                  }
            }

            // city that can reach the fewest number of cities within the `distanceThreshold
            return city;
      }
}

// ---------------------------------------------------------------------------------

// ? ⌚ Time complexity -> O(n^3) 👉🏻 Floyd-Warshall algorithm

// ? 🧺 Space complexity -> O(n^2) 👉🏻 Building distance matrix

class Solution {
      public int findTheCity(int n, int[][] edges, int distanceThreshold) {
            int[][] dist = new int[n][n];

            // Initialize the distance matrix
            for (int i = 0; i < n; i++) {
                  for (int j = 0; j < n; j++) {
                        if (i == j) {
                              dist[i][j] = 0;
                        } else {
                              dist[i][j] = Integer.MAX_VALUE / 2; // Use /2 to prevent overflow
                        }
                  }
            }

            // Update the distance matrix with the edges
            for (int[] edge : edges) {
                  int u = edge[0];
                  int v = edge[1];
                  int wt = edge[2];
                  dist[u][v] = wt;
                  dist[v][u] = wt;
            }

            // Apply Floyd-Warshall algorithm
            for (int k = 0; k < n; k++) {
                  for (int i = 0; i < n; i++) {
                        for (int j = 0; j < n; j++) {
                              if (dist[i][k] + dist[k][j] < dist[i][j]) {
                                    dist[i][j] = dist[i][k] + dist[k][j];
                              }
                        }
                  }
            }

            int city = -1;
            int minCount = n;

            // Find the city with the smallest number of reachable cities within
            // distanceThreshold
            for (int i = 0; i < n; i++) {
                  int count = 0;
                  for (int j = 0; j < n; j++) {
                        if (i != j && dist[i][j] <= distanceThreshold) {
                              count++;
                        }
                  }

                  if (count < minCount) {
                        minCount = count;
                        city = i;
                  } else if (count == minCount && i > city) {
                        city = i;
                  }
            }

            return city;
      }
}
