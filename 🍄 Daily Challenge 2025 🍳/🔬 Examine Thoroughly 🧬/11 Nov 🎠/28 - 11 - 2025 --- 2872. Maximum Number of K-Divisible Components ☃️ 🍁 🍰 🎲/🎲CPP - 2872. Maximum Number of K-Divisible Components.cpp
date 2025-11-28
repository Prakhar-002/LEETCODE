//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2872

//? ⌚ Time complexity ➺ O(V + E)  👉🏻  V = vertex

//? 🧺 Space complexity ➺ O(V + E) 👉🏻  E = edges

#include <vector>
#include <unordered_map>
using namespace std;

class Solution { 
public:
      int maxKDivisibleComponents(int numNodes, vector<vector<int>>& edges, vector<int>& nodeValues, int k) {
            // Create an adjacency list to represent the graph
            unordered_map<int, vector<int>> graph;
            for (const auto& edge : edges) {
                  graph[edge[0]].push_back(edge[1]);
                  graph[edge[1]].push_back(edge[0]);
            }

            // Initialize the count of k-divisible components
            int kDivisibleCount = 0;

            // Helper function to perform DFS
            dfs(0, -1, graph, nodeValues, k, kDivisibleCount);

            return kDivisibleCount;
      }

private:
      long long dfs(int currentNode, int parentNode, unordered_map<int, vector<int>>& graph, vector<int>& nodeValues, int k, int& kDivisibleCount) {
            // Start with the value of the current node
            long long subtreeSum = nodeValues[currentNode]; // Use long long to prevent overflow

            // Traverse all children (connected nodes)
            for (int neighbor : graph[currentNode]) {
                  // Avoid revisiting the parent node
                  if (neighbor != parentNode) {
                        // Add the contribution of the subtree rooted at this child
                        subtreeSum += dfs(neighbor, currentNode, graph, nodeValues, k, kDivisibleCount);
                  }
            }

            // Check if the total sum of this subtree is divisible by k
            if (subtreeSum % k == 0) {
                  kDivisibleCount++;
            }

            return subtreeSum;
      }
};