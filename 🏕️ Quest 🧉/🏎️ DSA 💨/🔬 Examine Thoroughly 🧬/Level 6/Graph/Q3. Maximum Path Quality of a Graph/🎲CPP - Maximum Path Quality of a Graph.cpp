//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.2 Q3

//? ⌚ Time complexity ➺ O(E * V) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(E * V)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      int maximalPathQuality(vector<int>& val, vector<vector<int>>& edges, int maxTime) {
            int n = val.size();

            // Build adjacency list: adj[u] = vector of {v, t} pairs
            vector<vector<pair<int, int>>> adj(n);

            // Construct undirected graph from edges
            for (auto& edge : edges) {
                  int u = edge[0], v = edge[1], t = edge[2];
                  adj[u].emplace_back(v, t);     // u -> {v, time}
                  adj[v].emplace_back(u, t);     // v -> {u, time} - undirected
            }

            int ans = 0;  // Maximum path value found

            // Initial call to separate DFS method
            dfs(0, 0, 0, val, adj, maxTime, ans);

            return ans;
      }

private:
      // Separate DFS method: explores from src with time/value tracking
      void dfs(int src, int currTime, int currValue, vector<int>& value,
                  const vector<vector<pair<int, int>>>& adj, int maxTime, int& ans) {
            // Prune paths exceeding time limit early
            if (currTime > maxTime) {
                  return;
            }

            // Add current node's value (only once due to zeroing)
            currValue += value[src];

            // Update answer when back at start node (node 0)
            if (src == 0) {
                  ans = max(ans, currValue);
            }

            // Store and zero out to mark visited (prevent double-count)
            int temp = value[src];
            value[src] = 0;

            // Explore all neighbors recursively
            for (auto& [nei, cost] : adj[src]) {
                  dfs(nei, currTime + cost, currValue, value, adj, maxTime, ans);
            }

            // Restore value on backtrack for sibling paths
            value[src] = temp;
      }
};
