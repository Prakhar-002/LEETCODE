//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.3 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of nodes

//? 🧺 Space complexity ➺ O(n)

#include <vector>
using namespace std;

class Solution {
private:
      // DFS helper to check reachability from 'node' to 'destination'
      bool dfs(int node, int destination, vector<vector<int>>& adj, vector<bool>& visited) {
            // If node is destination, path exists
            if (node == destination) {
                  return true;
            }

            // Mark current node as visited
            visited[node] = true;

            // Explore all neighbors
            for (int nei : adj[node]) {
                  if (!visited[nei]) {
                        if (dfs(nei, destination, adj, visited)) {
                              return true;
                        }
                  }
            }

            // No neighbor leads to destination
            return false;
      }

public:
      bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
            // Build adjacency list for undirected graph
            vector<vector<int>> adj(n);

            // Populate adjacency list
            for (auto& edge : edges) {
                  int src = edge[0];
                  int dest = edge[1];
                  // Undirected: add both directions
                  adj[src].push_back(dest);
                  adj[dest].push_back(src);
            }

            // Visited array to track visited nodes
            vector<bool> visited(n, false);

            // Start DFS from source
            return dfs(source, destination, adj, visited);
      }
};
