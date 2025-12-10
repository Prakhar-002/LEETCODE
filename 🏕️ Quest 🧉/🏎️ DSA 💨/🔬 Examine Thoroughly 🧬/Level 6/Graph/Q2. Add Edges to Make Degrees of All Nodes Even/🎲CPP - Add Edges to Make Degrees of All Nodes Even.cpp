//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.2 Q2

//? ⌚ Time complexity ➺ O(E * V) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(E * V)

#include <vector>
#include <unordered_set>
#include <list>
using namespace std;

class Solution {
public:
      bool isPossible(int n, vector<vector<int>>& edges) {
            // adj[i] = set of neighbors of node i (undirected graph)
            // Using unordered_set for O(1) edge existence checks
            vector<unordered_set<int>> adj(n + 1);
            
            // Build undirected adjacency list from directed edges
            for (auto& edge : edges) {
                  int src = edge[0], dest = edge[1];
                  adj[src].insert(dest);     // src ↔ dest
                  adj[dest].insert(src);     // Undirected: both directions
            }

            // Collect nodes with odd degree (size of adj[i] = degree)
            list<int> odds;

            for (int i = 1; i <= n; i++) {
                  if (adj[i].size() % 2 == 1) {  // Odd degree
                        odds.push_back(i);
                  }
            }

            // Handshaking lemma: Eulerian path requires exactly 0 or 2 odd-degree nodes
            // Here we can add ≤2 edges to fix up to 4 odd-degree nodes
            // Impossible if: odd count OR more than 4 odds
            if (odds.size() % 2 == 1 || odds.size() > 4) {
                  return false;
            }

            // Case 0: Already Eulerian (all even degrees)
            if (odds.size() == 0) {
                  return true;
            }

            // Case 2: Exactly 2 odd-degree nodes [a,b]
            if (odds.size() == 2) {
                  int a = odds.front(); odds.pop_front();
                  int b = odds.front();
                  // Option 1: Add direct edge a-b (if doesn't exist)
                  if (adj[a].find(b) == adj[a].end()) {
                        return true;
                  }
                  // Option 2: Add edges a-x and b-x via some intermediate x
                  for (int x = 1; x <= n; x++) {
                        if (x != a && x != b && 
                              adj[a].find(x) == adj[a].end() && 
                              adj[b].find(x) == adj[b].end()) {
                              return true;
                        }
                  }
                  return false;
            }

            // Case 4: Exactly 4 odd-degree nodes [a,b,c,d]
            // Need to add 2 edges forming perfect matching
            int a = odds.front(); odds.pop_front();
            int b = odds.front(); odds.pop_front();
            int c = odds.front(); odds.pop_front();
            int d = odds.front();

            // Helper lambda: Can add edge u-v if it doesn't already exist
            auto can_add = [&](int u, int v) -> bool {
                  return adj[u].find(v) == adj[u].end();
            };

            // Try all 3 possible perfect matchings for 4 nodes:
            // 1) Connect a-b AND c-d
            if (can_add(a, b) && can_add(c, d)) {
                  return true;
            }
            // 2) Connect a-c AND b-d
            if (can_add(a, c) && can_add(b, d)) {
                  return true;
            }
            // 3) Connect a-d AND b-c
            if (can_add(a, d) && can_add(b, c)) {
                  return true;
            }

            return false;                  // No valid pairing found
      }
};
