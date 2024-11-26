//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2924

//? ⌚ Time complexity ➺ O(V + E) 👉🏻  V = vertex

//? 🧺 Space complexity ➺ O(V) 👉🏻 E = Edges

#include <vector>
using namespace std;

class Solution {
public:
      int findChampion(int n, vector<vector<int>>& edges) {
            // Vector to count incoming edges for each node
            vector<int> incoming(n, 0);

            // Increment the count of incoming edges for destination nodes
            for (const auto& edge : edges) {
                  incoming[edge[1]]++;
            }

            // Vector to store potential champions (nodes with no incoming edges)
            vector<int> champions;

            // Check each node's incoming edge count
            for (int i = 0; i < n; i++) {
                  // If a node has no incoming edges, add it to the champions list
                  if (incoming[i] == 0) {
                        champions.push_back(i);
                  }
            }

            // If there is more than one node with no incoming edges, return -1
            if (champions.size() > 1) {
                  return -1;
            }

            // Return the champion (node with no incoming edges) if exactly one exists
            return champions[0];
      }
};
