//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 207

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
      bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
            // ----------------------------------------------------------
            // Step 1: Build adjacency list (course → list of prerequisites)
            // ----------------------------------------------------------
            unordered_map<int, vector<int>> preMap;
            for (int i = 0; i < numCourses; i++) {
                  preMap[i] = {};
            }
            for (auto& pair : prerequisites) {
                  preMap[pair[0]].push_back(pair[1]);
            }

            // Set to track nodes in current recursion stack
            unordered_set<int> visitSet;

            // ----------------------------------------------------------
            // Step 3: Run DFS from each course
            // ----------------------------------------------------------
            for (int course = 0; course < numCourses; course++) {
                  if (!dfs(course, preMap, visitSet)) {
                        return false;
                  }
            }
            return true;
      }

private:
      // ----------------------------------------------------------
      // Step 2: DFS function to detect cycles
      // ----------------------------------------------------------
      bool dfs(int crs, unordered_map<int, vector<int>>& preMap, unordered_set<int>& visitSet) {
            // If course already in recursion stack → cycle found
            if (visitSet.count(crs)) {
                  return false;
            }
            // If no prerequisites → no cycle here
            if (preMap[crs].empty()) {
                  return true;
            }

            // Mark course in current DFS path
            visitSet.insert(crs);

            // Recursively check prerequisites
            for (int pre : preMap[crs]) {
                  if (!dfs(pre, preMap, visitSet)) {
                        return false;
                  }
            }

            // Remove from recursion path
            visitSet.erase(crs);
            // Memoize result
            preMap[crs].clear();

            return true;
      }
};
