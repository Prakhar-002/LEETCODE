//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 210

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(numCourses)

//? 🧺 Space complexity ➺ O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
      vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
            // ----------------------------------------------------------
            // Step 1: Build adjacency list (course → list of prerequisites)
            // ----------------------------------------------------------
            unordered_map<int, vector<int>> preReq;
            for (int i = 0; i < numCourses; i++) {
                  preReq[i] = {};
            }
            for (auto& pair : prerequisites) {
                  preReq[pair[0]].push_back(pair[1]);
            }

            vector<int> output;            // Topological order
            unordered_set<int> visit;      // Safe nodes
            unordered_set<int> cycle;      // Recursion stack

            // ----------------------------------------------------------
            // Step 3: Run DFS from each course
            // ----------------------------------------------------------
            for (int crs = 0; crs < numCourses; crs++) {
                  if (!dfs(crs, preReq, visit, cycle, output)) {
                        return {}; // Cycle detected → empty order
                  }
            }
            return output;
      }

private:
      // ----------------------------------------------------------
      // Step 2: DFS function to detect cycles and build order
      // ----------------------------------------------------------
      bool dfs(int crs, unordered_map<int, vector<int>>& preReq,
               unordered_set<int>& visit, unordered_set<int>& cycle,
               vector<int>& output) {
            if (cycle.count(crs)) return false; // Cycle found
            if (visit.count(crs)) return true;  // Already processed

            cycle.insert(crs); // Mark in recursion path

            for (int pre : preReq[crs]) {
                  if (!dfs(pre, preReq, visit, cycle, output)) {
                        return false;
                  }
            }

            cycle.erase(crs);
            visit.insert(crs);
            output.push_back(crs); // Add postorder

            return true;
      }
};
