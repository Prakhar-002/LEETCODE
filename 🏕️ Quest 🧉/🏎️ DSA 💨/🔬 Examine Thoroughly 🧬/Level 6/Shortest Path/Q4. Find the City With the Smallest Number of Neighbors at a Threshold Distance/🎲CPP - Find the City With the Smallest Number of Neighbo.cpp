//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1334

//? ⌚ Time complexity -> O(n^2 log n) 👉🏻 Dijkstra algorithm

//? 🧺 Space complexity -> O(n) 👉🏻 Building adjacency list 

#include <vector>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
public:
      int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
            // make adjacency list for easy lookup of connected cities and distances.
            unordered_map<int, vector<pair<int, int>>> adjacency;

            for (const auto& edge : edges) {
                  int city_one = edge[0], city_two = edge[1], dist = edge[2];
                  // Each city's list contains pairs of connected cities and their corresponding distances
                  adjacency[city_one].emplace_back(city_two, dist);
                  adjacency[city_two].emplace_back(city_one, dist);
            } 

            // Dijkstra algorithm to find the shortest paths from a given city to all other cities.
            auto dijkstra = [&](int city) {
                  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> heap;
                  heap.emplace(0, city);  // (dist, src)
                  unordered_set<int> visit;

                  while (!heap.empty()) {
                        // repeatedly extracts the city with the minimum distance from the priority queue
                        auto [cityDist, node] = heap.top();
                        heap.pop();

                        // if already visited continue
                        if (visit.count(node)) {
                              continue;
                        }

                        // add to our visit set
                        visit.insert(node);

                        for (const auto& [nei, dist] : adjacency[node]) {
                              // calc the dist from our src to neighbor
                              int nei_dist = dist + cityDist;
                              // if it is less than distanceThreshold
                              if (nei_dist <= distanceThreshold) {
                                    // add to our priority queue
                                    heap.emplace(nei_dist, nei);
                              }
                        }
                  }

                  // return the all cities that can be reached with distanceThreshold except ourself
                  return visit.size() - 1;
            };

            // These track the city ID with the minimum number of reachable neighbors
            // and the count of these neighbors, respectively
            int city = -1, min_neighbor = n;

            // call our dijkstra algo for every city
            for (int curCity = 0; curCity < n; ++curCity) {
                  // find the number of cities within the distance threshold
                  int neighbor = dijkstra(curCity);
                  // updates `city` and `min_neighbor` if city with the fewest reachable neighbors.
                  if (neighbor <= min_neighbor) {
                        city = curCity;
                        min_neighbor = neighbor;
                  }
            }

            // city that can reach the fewest number of cities within the `distanceThreshold
            return city;
      }
};