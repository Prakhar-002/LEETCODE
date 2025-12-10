//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.3 Q5

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. od nodes

//? 🧺 Space complexity ➺ O(n)

#include <vector>
using namespace std;

class Solution {
private:
      // DFS helper to collect all nodes in the connected component
      void dfs(int node, const vector<vector<int>>& adj,
                  vector<bool>& visited, vector<int>& component) {
            if (visited[node]) {
                  return;
            }

            visited[node] = true;
            component.push_back(node);

            for (int nei : adj[node]) {
                  if (!visited[nei]) {
                        dfs(nei, adj, visited, component);
                  }
            }
      }

public:
      int countCompleteComponents(int n, vector<vector<int>>& edges) {
            // Build adjacency list (undirected graph)
            vector<vector<int>> adj(n);
            for (const auto& e : edges) {
                  int u = e[0], v = e[1];
                  adj[u].push_back(v);
                  adj[v].push_back(u);
            }

            vector<bool> visited(n, false);
            int completeCount = 0;

            // For each unvisited node, find its component and check completeness
            for (int v = 0; v < n; v++) {
                  if (!visited[v]) {
                        vector<int> component;
                        dfs(v, adj, visited, component);

                        int size = component.size();
                        bool isComplete = true;

                        // In a complete graph of size k, each node has degree k-1
                        for (int node : component) {
                              if ((int)adj[node].size() != size - 1) {
                                    isComplete = false;
                                    break;
                              }
                        }

                        if (isComplete) {
                              completeCount++;
                        }
                  }
            }

            return completeCount;
      }
};
