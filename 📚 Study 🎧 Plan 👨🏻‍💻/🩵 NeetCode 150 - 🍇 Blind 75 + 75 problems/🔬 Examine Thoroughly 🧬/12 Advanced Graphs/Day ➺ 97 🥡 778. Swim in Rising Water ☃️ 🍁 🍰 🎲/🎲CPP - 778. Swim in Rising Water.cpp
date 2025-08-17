//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 778

//? ⌚ Time complexity ➺ O(n ^ 2 log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n ^ 2)

#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
      int swimInWater(vector<vector<int>>& grid) {
            // ----------------------------------------------------------
            // Step 1: Initialization
            // ----------------------------------------------------------
            int N = grid.size();
            // Min-heap stores {time, row, col}. `time` is max elevation on path so far.
            // Using a vector<int> and `greater` to make a min-heap.
            priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> minH;
            minH.push({grid[0][0], 0, 0});
            
            // `visit` tracks visited cells to prevent cycles. A boolean matrix is efficient.
            vector<vector<bool>> visit(N, vector<bool>(N, false));
            visit[0][0] = true;
            
            int directions[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

            // ----------------------------------------------------------
            // Step 2: Dijkstra's Algorithm Search
            // ----------------------------------------------------------
            // Process cells from the priority queue until empty.
            while (!minH.empty()) {
                  // Get the cell reachable with the minimum time `t` so far.
                  vector<int> current = minH.top();
                  minH.pop();
                  int t = current[0];
                  int r = current[1];
                  int c = current[2];

                  // If we reached the destination, `t` is the minimum required time.
                  if (r == N - 1 && c == N - 1) {
                        return t;
                  }

                  // Explore all valid neighbors.
                  for (auto& dir : directions) {
                        int nr = r + dir[0];
                        int nc = c + dir[1];

                        // Skip if neighbor is out of bounds or already visited.
                        if (nr < 0 || nc < 0 || nr >= N || nc >= N || visit[nr][nc]) {
                              continue;
                        }

                        visit[nr][nc] = true;
                        // The time for the new path is the max of the current path's time
                        // and the elevation of the new cell.
                        int new_time = max(t, grid[nr][nc]);
                        
                        // Add the new cell to the heap to be explored.
                        minH.push({new_time, nr, nc});
                  }
            }
            return -1; // Should not be reached.
      }
};
