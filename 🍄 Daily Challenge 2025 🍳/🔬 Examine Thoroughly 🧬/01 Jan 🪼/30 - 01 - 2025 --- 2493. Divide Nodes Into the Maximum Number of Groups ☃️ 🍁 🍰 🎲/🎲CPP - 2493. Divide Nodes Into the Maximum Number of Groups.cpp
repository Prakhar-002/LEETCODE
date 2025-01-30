//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2493

//? ⌚ Time complexity ➺ O(V + E)  👉🏻  V = No. of Vertex

//? 🧺 Space complexity ➺ O(V + E) 👉🏻  E = No. of Edges

#include <vector>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
      // Function to build the adjacency list for the graph
      unordered_map<int, vector<int>> buildAdjacencyList(int n, vector<vector<int>>& edges) {
            unordered_map<int, vector<int>> adj;
            for (auto& edge : edges) {
                  int node1 = edge[0], node2 = edge[1];
                  adj[node1].push_back(node2);
                  adj[node2].push_back(node1);
            }

            return adj;
      }

      // Function to get the connected component using BFS
      unordered_set<int> getConnectedComponent(int src, unordered_map<int, vector<int>>& adj, unordered_set<int>& visited) {
            queue<int> q;
            unordered_set<int> component;

            q.push(src);
            component.insert(src);
            visited.insert(src);

            while (!q.empty()) {
                  int node = q.front();
                  q.pop();

                  for (int neighbor : adj[node]) {
                        if (component.count(neighbor)) continue; // Skip already visited nodes
                        q.push(neighbor);
                        component.insert(neighbor);
                        visited.insert(neighbor);
                  }
            }

            return component;
      }

      // Function to find the longest path using BFS
      int longestPath(int src, unordered_map<int, vector<int>>& adj) {
            queue<pair<int, int>> q; // (node, group number)
            unordered_map<int, int> dist; // Distance map
            
            q.push({src, 1});
            dist[src] = 1;

            int maxLength = 0; // Variable to track the longest path

            while (!q.empty()) {
                  auto [node, length] = q.front();
                  q.pop();
                  
                  for (int neighbor : adj[node]) {
                        if (dist.count(neighbor)) {
                              // If the neighbor is in the same group, return -1 (not bipartite)
                              if (dist[neighbor] == length) return -1;
                              continue;
                        }
                        q.push({neighbor, length + 1});
                        dist[neighbor] = length + 1;
                  }

                  maxLength = max(maxLength, length);
            }

            return maxLength;
      }

      int magnificentSets(int n, vector<vector<int>>& edges) {
            unordered_map<int, vector<int>> adj = buildAdjacencyList(n, edges); // Build adjacency list
            unordered_set<int> visited;
            int totalGroups = 0; // Variable to track total groups

            // Iterate through all nodes
            for (int i = 1; i <= n; i++) {
                  if (visited.count(i)) continue;

                  // Get the connected component
                  unordered_set<int> component = getConnectedComponent(i, adj, visited);

                  int maxCount = 0; // Maximum group count in the component

                  // For each node in the component, find the longest path
                  for (int node : component) {
                        int length = longestPath(node, adj);
                        if (length == -1) return -1; // Return -1 if the graph is not bipartite
                        maxCount = max(maxCount, length);
                  }

                  totalGroups += maxCount; // Add the maximum count to the total
            }

            return totalGroups; // Return the total number of groups
      }
};
