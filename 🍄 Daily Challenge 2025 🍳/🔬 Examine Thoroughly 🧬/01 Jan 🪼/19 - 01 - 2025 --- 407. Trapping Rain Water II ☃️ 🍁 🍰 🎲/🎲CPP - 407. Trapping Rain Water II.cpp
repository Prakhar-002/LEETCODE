//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 407

//? ⌚ Time complexity ➺ O(m * n log(m * n)) 👉🏻  m = len(heightMap)

//? 🧺 Space complexity ➺ O(m * n)           👉🏻  n = len(heightMap[0])

#include <vector>
#include <queue>
#include <tuple>
using namespace std;

class Solution {
      public:
            int trapRainWater(vector<vector<int>>& heightMap) {
                  int rows = heightMap.size();
                  int cols = heightMap[0].size();

                  // Min-heap to store cells, sorted by height
                  priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<>> minHeap;
                  vector<vector<bool>> visited(rows, vector<bool>(cols, false));

                  // Add all boundary cells to the heap and mark them as visited
                  for (int r = 0; r < rows; r++) {
                        for (int c = 0; c < cols; c++) {
                              if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
                                    minHeap.emplace(heightMap[r][c], r, c); // Add boundary cell to heap
                                    visited[r][c] = true;                  // Mark as visited
                              }
                        }
                  }

                  int res = 0;        // Variable to store the total trapped water
                  int maxH = 0;       // Track the maximum height encountered so far
                  vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}}; // Four directions

                  // Process cells in the heap
                  while (!minHeap.empty()) {
                        auto [height, r, c] = minHeap.top();
                        minHeap.pop();
                        maxH = max(maxH, height); // Update maximum height seen so far

                        // Explore neighbors of the current cell
                        for (auto [dr, dc] : directions) {
                              int nr = r + dr;
                              int nc = c + dc;

                              // Check if neighbor is valid and not visited
                              if (nr < 0 || nc < 0 || nr >= rows || nc >= cols || visited[nr][nc]) {
                                    continue;
                              }

                              // Calculate water trapped at the neighbor
                              res += max(0, maxH - heightMap[nr][nc]);

                              // Add neighbor to heap and mark as visited
                              minHeap.emplace(heightMap[nr][nc], nr, nc);
                              visited[nr][nc] = true;
                        }
                  }

                  return res; // Return the total trapped water
            }
};
