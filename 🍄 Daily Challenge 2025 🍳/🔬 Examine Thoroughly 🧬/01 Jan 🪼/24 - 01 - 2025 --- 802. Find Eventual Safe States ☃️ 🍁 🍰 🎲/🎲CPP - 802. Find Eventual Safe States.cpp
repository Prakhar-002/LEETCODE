//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 802

//? ⌚ Time complexity ➺ O(V + E) 👉🏻  V = Vertex Of Graph

//? 🧺 Space complexity ➺ O(V)      ->  E = Edges Of Graph

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
      // DFS function to check if a node is safe
private:
      bool dfs(int node, vector<vector<int>> &graph, unordered_map<int, bool> &safe) {
            // If the result for this node is already computed, return it
            if (safe.find(node) != safe.end()) {
                  return safe[node];
            }

            // Assume the current node is not safe
            safe[node] = false;

            // Explore all neighbors of the current node
            for (int neighbor : graph[node]) {
                  if (!dfs(neighbor, graph, safe)) {
                        return false;
                  }
            }

            // If all neighbors are safe, the current node is safe
            safe[node] = true;
            return true;
      }

public:
      vector<int> eventualSafeNodes(vector<vector<int>> &graph) {
            int n = graph.size();
            unordered_map<int, bool> safe;
            vector<int> safeNodes;

            // Main logic
            for (int i = 0; i < n; i++) {
                  if (dfs(i, graph, safe)) {
                        safeNodes.push_back(i);
                  }
            }

            return safeNodes;
      }
};
