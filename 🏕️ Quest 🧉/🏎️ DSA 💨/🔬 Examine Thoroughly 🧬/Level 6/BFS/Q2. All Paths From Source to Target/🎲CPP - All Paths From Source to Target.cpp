//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.3 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
using namespace std;

class Solution {
private:
      // Stores all valid paths from 0 to n-1
      vector<vector<int>> res;
      // Current path being built during DFS
      vector<int> path;

      // DFS helper: explore all paths from 'node' to 'target'
      void dfs(const vector<vector<int>>& graph, int node, int target) {
            // Add current node to the path
            path.push_back(node);

            // If target reached, record the path
            if (node == target) {
                  res.push_back(path);
            } else {
                  // Explore all neighbors
                  for (int nei : graph[node]) {
                        dfs(graph, nei, target);
                  }
            }

            // Backtrack: remove current node for other branches
            path.pop_back();
      }

public:
      vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
            int n = graph.size();
            int target = n - 1;

            res.clear();
            path.clear();

            // Start DFS from node 0
            dfs(graph, 0, target);

            return res;
      }
};
