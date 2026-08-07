//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3310

//? ⌚ Time complexity ➺ O(V + E)

//? 🧺 Space complexity ➺ O(V + E)

// BFS from k to mark all suspicious methods, then check if any have outside callers
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
      vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {

            // Build adjacency list and track in-degrees
            vector<vector<int>> adj(n);
            vector<int>  inDegree(n, 0);
            vector<bool> suspicious(n, false);

            for (auto& edge : invocations) {
                  int u = edge[0], v = edge[1];
                  adj[u].push_back(v);
                  inDegree[v]++;
            }

            // BFS from k to mark all methods reachable from k as suspicious
            queue<int> que;
            que.push(k);
            suspicious[k] = true;

            while (!que.empty()) {
                  int curr = que.front(); que.pop();
                  for (int ngbr : adj[curr]) {
                        inDegree[ngbr]--;
                        if (!suspicious[ngbr]) {
                              suspicious[ngbr] = true;
                              que.push(ngbr);
                        }
                  }
            }

            // If any suspicious method is still called by a non-suspicious method,
            // we cannot safely remove the suspicious group
            bool cannotRemove = false;
            for (int i = 0; i < n; i++) {
                  if (suspicious[i] && inDegree[i] > 0) {
                        cannotRemove = true;
                        break;
                  }
            }

            if (cannotRemove) {
                  // Return all methods unchanged
                  vector<int> all(n);
                  iota(all.begin(), all.end(), 0);
                  return all;
            }

            // Return only non-suspicious methods
            vector<int> result;
            for (int i = 0; i < n; i++) {
                  if (!suspicious[i])
                        result.push_back(i);
            }
            return result;
      }
};