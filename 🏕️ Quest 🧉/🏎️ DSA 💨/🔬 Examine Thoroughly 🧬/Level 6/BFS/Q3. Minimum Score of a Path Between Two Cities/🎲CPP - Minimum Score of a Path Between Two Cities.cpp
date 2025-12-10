//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.3 Q3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of nodes

//? 🧺 Space complexity ➺ O(n)

#include <vector>
using namespace std;

class Solution {
private:
      // DFS helper to explore all nodes reachable from 'node'
      // and update the minimum edge weight encountered
      void dfs(int node, const vector<vector<pair<int,int>>>& adj,
                  vector<bool>& visited, int& res) {
            if (visited[node]) {
                  return;   // Avoid revisiting
            }

            visited[node] = true;

            for (const auto& [nei, dist] : adj[node]) {
                  // Update global minimum distance
                  res = min(res, dist);
                  // Explore neighbor
                  dfs(nei, adj, visited, res);
            }
      }

public:
      int minScore(int n, vector<vector<int>>& roads) {
            // Adjacency list: adj[u] holds (v, distance) pairs
            vector<vector<pair<int,int>>> adj(n + 1);

            // Build undirected graph
            for (const auto& road : roads) {
                  int src = road[0];
                  int dest = road[1];
                  int dist = road[2];
                  adj[src].push_back({dest, dist});
                  adj[dest].push_back({src, dist});
            }

            vector<bool> visited(n + 1, false);
            int res = INT_MAX;   // Global minimum distance

            // DFS from city 1 (problem guarantees 1 is connected to n)
            dfs(1, adj, visited, res);

            return res;
      }
};
