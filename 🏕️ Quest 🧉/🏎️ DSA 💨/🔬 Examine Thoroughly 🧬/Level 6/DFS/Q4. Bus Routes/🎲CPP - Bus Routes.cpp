//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.4 Q4

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <queue>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
public:
      int numBusesToDestination(vector<vector<int>> &routes, int source, int target) {
            // Find minimum number of buses needed from source to target

            if (source == target) {
                  return 0; // Already at destination
            }

            // adj[stop] = list of bus routes that visit this stop
            unordered_map<int, vector<int>> adj;

            // Build adjacency list: map each stop to bus routes passing through it
            for (int i = 0; i < routes.size(); i++) {
                  for (int stop : routes[i]) {
                        adj[stop].push_back(i);
                  }
            }

            // BFS queue will contain bus route indices
            queue<int> q;

            // Track visited bus routes (not stops)
            unordered_set<int> visited;

            // Start BFS from all buses that pass through source stop
            auto it = adj.find(source);
            if (it != adj.end()) {
                  for (int route : it->second) {
                        q.push(route);
                        visited.insert(route); // Mark bus as visited
                  }
            }

            int busCount = 1; // Number of bus changes

            while (!q.empty()) {
                  int size = q.size(); // Process current level

                  while (size > 0) {
                        size--;
                        int idx = q.front();
                        q.pop(); // Current bus route

                        // Check all stops on current bus
                        for (int stop : routes[idx]) {
                              if (stop == target) {
                                    return busCount; // Found target stop!
                              }

                              // From this stop, try all other buses
                              auto it2 = adj.find(stop);
                              if (it2 != adj.end()) {
                                    for (int nextRoute : it2->second) {
                                          if (visited.find(nextRoute) == visited.end()) {
                                                visited.insert(nextRoute);
                                                q.push(nextRoute); // Transfer to next bus
                                          }
                                    }
                              }
                        }
                  }
                  busCount++; // Next level
            }

            return -1; // No route found
      }
};
