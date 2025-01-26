//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2127

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of nodes

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <queue>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
public:
      int maximumInvitations(vector<int>& favorite) {
            int N = favorite.size(); // Total number of employees
            int longestCycle = 0; // Stores the length of the longest cycle
            vector<bool> visited(N, false); // Boolean array to track visited nodes
            vector<pair<int, int>> length2Cycles; // Stores all cycles of length 2

            // Detect all cycles in the graph
            for (int i = 0; i < N; i++) {
                  if (visited[i]) continue; // Skip if the node is already visited

                  int start = i, cur = i; // Start traversal from the current node
                  unordered_set<int> curSet; // Set to store nodes in the current traversal path

                  // Traverse the graph until a cycle is detected or path ends
                  while (!visited[cur]) {
                        visited[cur] = true; // Mark the current node as visited
                        curSet.insert(cur); // Add the current node to the path
                        cur = favorite[cur]; // Move to the next node
                  }

                  // Check if the current node forms a cycle
                  if (curSet.count(cur)) {
                        int length = curSet.size(); // Length of the current traversal path

                        // Remove nodes outside the cycle
                        while (start != cur) {
                              length--;
                              start = favorite[start];
                        }

                        // Update the longest cycle length
                        longestCycle = max(longestCycle, length);

                        // Store length-2 cycles
                        if (length == 2) {
                              length2Cycles.emplace_back(cur, favorite[cur]);
                        }
                  }
            }

            // Build an inverted graph (reverse edges)
            vector<vector<int>> inverted(N);
            for (int i = 0; i < N; i++) {
                  inverted[favorite[i]].push_back(i);
            }

            // Find the sum of the longest non-circular chains connected to cycles
            int chainSum = 0;

            // For each length-2 cycle, calculate the sum of the longest chains
            for (auto& cycle : length2Cycles) {
                  int n1 = cycle.first, n2 = cycle.second;
                  chainSum += bfs(n1, n2, inverted) + bfs(n2, n1, inverted) + 2; // Add 2 for the cycle itself
            }

            // Return the maximum of the longest cycle or chain sum
            return max(chainSum, longestCycle);
      }

private:
      // Separate BFS function
      int bfs(int src, int parent, const vector<vector<int>>& inverted) {
            queue<pair<int, int>> q; // (node, chain length)
            q.push({src, 0});
            int maxLength = 0;

            while (!q.empty()) {
                  auto [node, length] = q.front();
                  q.pop();

                  // Skip the parent node to avoid revisiting
                  if (node == parent) continue;

                  maxLength = max(maxLength, length); // Update maximum length

                  // Add neighbors to the queue
                  for (int nei : inverted[node]) {
                        q.push({nei, length + 1});
                  }
            }

            return maxLength; // Return the longest chain length
      }
};
