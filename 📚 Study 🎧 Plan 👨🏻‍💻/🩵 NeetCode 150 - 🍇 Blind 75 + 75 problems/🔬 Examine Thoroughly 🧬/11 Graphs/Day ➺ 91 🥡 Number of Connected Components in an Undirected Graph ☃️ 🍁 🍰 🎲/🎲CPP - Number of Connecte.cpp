//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 323

//? ⌚ Time complexity ➺ O(V + E)

//? 🧺 Space complexity ➺ O(V + E)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
      int countComponents(int n, vector<vector<int>>& edges) {
            // Create an adjacency list to represent the graph
            vector<vector<int>> adj(n);
            // Use a boolean array to track visited nodes
            vector<bool> visit(n, false);

            // Build the adjacency list from the edge list
            for (auto& edge : edges) {
                  adj[edge[0]].push_back(edge[1]);
                  adj[edge[1]].push_back(edge[0]);
            }

            int res = 0; // Initialize component count

            // ----------------------------------------------------------
            // Iterate through each node to find unvisited components
            // ----------------------------------------------------------
            for (int node = 0; node < n; node++) {
                  // If the node has not been visited, it's a new component
                  if (!visit[node]) {
                        // Mark the starting node of the new component
                        visit[node] = true;
                        // Start DFS to visit all nodes in this component
                        dfs(node, adj, visit);
                        // Increment the component count
                        res++;
                  }
            }
            return res;
      }

private:
      // ----------------------------------------------------------
      // DFS helper to traverse and mark all nodes in a component
      // ----------------------------------------------------------
      void dfs(int node, vector<vector<int>>& adj, vector<bool>& visit) {
            // Explore all neighbors of the current node
            for (int nei : adj[node]) {
                  // If a neighbor hasn't been visited yet
                  if (!visit[nei]) {
                        // Mark it as visited
                        visit[nei] = true;
                        // Recursively call DFS on the neighbor
                        dfs(nei, adj, visit);
                  }
            }
      }
};
