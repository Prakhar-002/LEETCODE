//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3243

//? ⌚ Time complexity ➺ O(n + q ⋅ (n + m))

//? 🧺 Space complexity ➺ O(n + m + q)

#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>
using namespace std;

class Solution {
private:
      // Function to compute the shortest path from node 0 to node n-1 using BFS
      int computeShortestPath(int n, vector<vector<int>>& adjacency_list) {
            queue<pair<int, int>> q; // (current_node, current_distance)
            unordered_set<int> visited;

            // Start BFS from node 0 with distance 0
            q.push({0, 0});
            visited.insert(0);

            while (!q.empty()) {
                  int current_node = q.front().first;
                  int current_distance = q.front().second;
                  q.pop();

                  // If we reach the last node, return the distance
                  if (current_node == n - 1) {
                        return current_distance;
                  }

                  // Explore all neighbors
                  for (int neighbor : adjacency_list[current_node]) {
                        if (visited.find(neighbor) == visited.end()) {
                              q.push({neighbor, current_distance + 1});
                              visited.insert(neighbor);
                        }
                  }
            }

            // If node n-1 is not reachable
            return -1;
      }

public:
      vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
            // Step 1: Initialize adjacency list for the graph
            vector<vector<int>> adjacency_list(n);
            for (int i = 0; i < n - 1; ++i) {
                  adjacency_list[i].push_back(i + 1);
            }

            // Step 2: Process each query
            vector<int> results;
            for (const auto& query : queries) {
                  int src = query[0], dst = query[1];

                  // Add the directed edge (src -> dst) to the adjacency list
                  adjacency_list[src].push_back(dst);

                  // Compute the shortest path after adding the edge
                  results.push_back(computeShortestPath(n, adjacency_list));
            }

            return results;
      }
};
