//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 261

//? ⌚ Time complexity ➺ O(n * m)

//? 🧺 Space complexity ➺ O(m * n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
      bool validTree(int n, vector<vector<int>>& edges) {
            // ----------------------------------------------------------
            // Condition 1: A valid tree must have exactly n - 1 edges
            // ----------------------------------------------------------
            if (edges.size() != n - 1) {
                  return false;
            }

            // Create adjacency list
            vector<vector<int>> adj(n);
            for (auto& edge : edges) {
                  adj[edge[0]].push_back(edge);
                  adj[edge].push_back(edge);
            }

            unordered_set<int> visit;

            // ----------------------------------------------------------
            // Condition 2: Graph must be fully connected and have no cycles
            // ----------------------------------------------------------
            return dfs(0, -1, adj, visit) && visit.size() == n;
      }

private:
      bool dfs(int node, int par, vector<vector<int>>& adj, unordered_set<int>& visit) {
            // If we visit a node already in our set, we found a cycle
            if (visit.count(node)) {
                  return false;
            }
            visit.insert(node);

            for (int nei : adj[node]) {
                  // Skip the neighbor if it's the parent node
                  if (nei == par) {
                        continue;
                  }
                  // If a recursive call finds a cycle, propagate False
                  if (!dfs(nei, node, adj, visit)) {
                        return false;
                  }
            }
            return true;
      }
};
