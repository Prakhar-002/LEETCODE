//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3607

//? ⌚ Time complexity ➺ O(c + E + q + c log c) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(c)

#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <queue>

using namespace std;

class Solution {
public:
      // Main function to process queries on stations and their connections
      vector<int> processQueries(int c, vector<vector<int>>& connections, vector<vector<int>>& queries) {
            // Build adjacency list for undirected graph representing station connections
            unordered_map<int, vector<int>> adj;
            for (int i = 1; i <= c; i++) {
                  adj[i] = vector<int>();  // Initialize adjacency list entry for each station
            }
            for (auto& conn : connections) {
                  int u = conn[0], v = conn[1];
                  adj[u].push_back(v);  // Add v as neighbor to u
                  adj[v].push_back(u);  // Add u as neighbor to v to ensure undirected graph
            }

            unordered_set<int> online;  // Track stations currently online (visited in DFS)
            unordered_map<int, int> stationGroup;  // Map station to its connected component group ID
            // Map from group ID to a min-heap (priority queue) holding stations in that group
            unordered_map<int, priority_queue<int, vector<int>, greater<int>>> minHeaps;

            // DFS lambda function to assign group IDs and populate minHeaps for each connected component
            function<void(int, int)> dfs = [&](int station, int groupId) {
                  if (online.count(station)) return;  // If already visited, skip
                  online.insert(station);
                  stationGroup[station] = groupId;  // Assign group ID to this station
                  minHeaps[groupId].push(station);  // Add station to corresponding min-heap

                  // recur for all neighbors
                  for (int nei : adj[station]) {
                        dfs(nei, groupId);
                  }
            };

            // Perform DFS for each station to discover connected components and group them
            for (int s = 1; s <= c; s++) {
                  dfs(s, s);  // Use station's own id as group ID for its component
            }

            vector<int> res;  // Store results for queries of type 1

            // Process each query
            for (auto& query : queries) {
                  int qType = query[0];
                  int qStation = query[1];

                  if (qType == 1) {  // Query type 1: find smallest online station in same group
                        if (online.count(qStation)) {
                              // If the queried station itself is online, return it immediately
                              res.push_back(qStation);
                              continue;
                        }
                        int groupId = stationGroup[qStation];
                        auto& minHeap = minHeaps[groupId];

                        // Remove offline stations from the min heap top until top is online or empty
                        while (!minHeap.empty() && !online.count(minHeap.top())) {
                              minHeap.pop();
                        }
                        // If heap not empty, top is the smallest online station in the same group
                        if (!minHeap.empty()) {
                              res.push_back(minHeap.top());
                        } else {
                              res.push_back(-1);  // No online station found in the group
                        }
                  } else {
                        // Query type 2: take the station offline by removing it from online set
                        online.erase(qStation);
                  }
            }

            return res;  // Return the results for all queries of type 1
      }
};
