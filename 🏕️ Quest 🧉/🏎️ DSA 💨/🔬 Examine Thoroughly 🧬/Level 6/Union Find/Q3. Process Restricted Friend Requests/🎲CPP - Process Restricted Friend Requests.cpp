//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.1 Q3

//? ⌚ Time complexity ➺ O(Q × R × α(N))) 👉🏻  Q = len(Request)

//? 🧺 Space complexity ➺ O(1)  -> R = len(restrictions)

#include <vector>
using namespace std;

class Solution {
private:
      // Path compression find
      int find(int x, vector<int> &parent) {
            if (parent[x] != x) {
                  parent[x] = find(parent[x], parent);
            }
            return parent[x];
      }

      // Union by linking
      void union_sets(int x, int y, vector<int> &parent) {
            int rootX = find(x, parent);
            int rootY = find(y, parent);
            if (rootX != rootY) {
                  parent[rootY] = rootX;
            }
      }

public:
      vector<bool> friendRequests(int n, vector<vector<int>> &restrictions,
                                    vector<vector<int>> &requests) {
            // parent[i] = parent of node i
            vector<int> parent(n + 1);
            for (int i = 0; i <= n; i++) {
                  parent[i] = i;
            }

            vector<bool> result;

            for (auto &req : requests) {
                  int u = req[0], v = req[1];
                  int rootU = find(u, parent);
                  int rootV = find(v, parent);

                  bool canBeFriends = true;

                  if (rootU != rootV) {
                        // Check restrictions
                        for (auto &res : restrictions) {
                              int x = res[0], y = res[1];
                              int rootX = find(x, parent);
                              int rootY = find(y, parent);

                              // Connection would violate restriction
                              if ((rootX == rootU && rootY == rootV) ||
                                    (rootX == rootV && rootY == rootU)) {
                                    canBeFriends = false;
                                    break;
                              }
                        }
                  }

                  if (canBeFriends) {
                        union_sets(u, v, parent);
                        result.push_back(true);
                  }
                  else {
                        result.push_back(false);
                  }
            }

            return result;
      }
};
