//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2503

//? ⌚ Time complexity ➺ O(q log q + (n * m)log(n * m)) 👉🏻  n = len(grid)

//? 🧺 Space complexity ➺ O(n * m) 👉🏻 q = len(queries) 👉🏻  m = len(grid[0])

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

class Solution {
public:
      vector<int> maxPoints(vector<vector<int>>& grid, vector<int>& queries) {
            int rows = grid.size(), cols = grid[0].size();

            // Directions for moving: Down, Up, Right, Left
            vector<vector<int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

            // Store queries along with their original indices, then sort by query value
            vector<pair<int, int>> q;
            for (int i = 0; i < queries.size(); i++) {
                  q.push_back({queries[i], i});
            }

            sort(q.begin(), q.end()); // Sorting ensures we process queries in increasing order

            // Min-heap (priority queue) to process grid cells in increasing order of values
            priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> minHeap;
            minHeap.push({grid[0][0], 0, 0}); // Push the first cell (value, row, col)

            // Array to store the result for each query
            vector<int> result(queries.size(), 0);

            // Visited array to track which cells have been processed
            vector<vector<bool>> visited(rows, vector<bool>(cols, false));
            visited[0][0] = true; // Mark the starting cell as visited

            int points = 0; // Count of reachable cells

            // Process each query
            for (auto& query : q) {
                  int limit = query.first, idx = query.second;

                  // Expand reachable cells while the smallest value is below the current query
                  while (!minHeap.empty() && minHeap.top()[0] < limit) {
                        auto cell = minHeap.top();
                        minHeap.pop();
                        int r = cell[1], c = cell[2];
                        points++;

                        // Explore the four possible directions
                        for (auto& dir : directions) {
                              int nr = r + dir[0], nc = c + dir[1];

                              // Check if the next cell is within bounds and not visited
                              if (nr >= 0 && nr < rows && nc >= 0 && nc < cols && !visited[nr][nc]) {
                                    minHeap.push({grid[nr][nc], nr, nc}); // Push into min-heap
                                    visited[nr][nc] = true; // Mark as visited
                              }
                        }
                  }

                  result[idx] = points; // Store the result for this query
            }

            return result; // Return the final result array
      }
};
