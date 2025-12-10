//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.2 Q1

//? ⌚ Time complexity ➺ O(E + V)

//? 🧺 Space complexity ➺ O(E + V)

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
      vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
            // Track in-degree for each node using unordered_map
            unordered_map<int, vector<int>> adj;

            // Build reverse adjacency (in-degree)
            for (auto& edge : edges) {
                  int src = edge[0];
                  int dest = edge[1];
                  // src -> dest: dest receives incoming edge
                  adj[dest].push_back(src);
            }

            vector<int> res;

            // Find nodes with no incoming edges (in-degree = 0)
            for (int i = 0; i < n; i++) {
                  // Node not in map OR empty incoming list = in-degree 0
                  if (adj.find(i) == adj.end() || adj[i].empty()) {
                        res.push_back(i);
                  }
            }

            return res;
      }
};
