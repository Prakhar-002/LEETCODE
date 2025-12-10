
//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1765

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(isWater)

//? 🧺 Space complexity ➺ O(n * m) 👉🏻 m = len(isWater[0])

//* MultiSource BFS

#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
      vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
            // Get the number of rows and columns in the grid
            int ROWS = isWater.size();
            int COLS = isWater[0].size();

            // Initialize the result grid with -1 to indicate unvisited cells
            vector<vector<int>> heights(ROWS, vector<int>(COLS, -1));

            // Initialize a queue to perform BFS (queue to store coordinates)
            queue<pair<int, int>> q;

            // Iterate through the grid to find water cells
            for (int r = 0; r < ROWS; r++) {
                  for (int c = 0; c < COLS; c++) {
                        if (isWater[r][c] == 1) { // If the current cell is water
                              q.push({r, c}); // Add it to the queue
                              heights[r][c] = 0; // Water cells have a height of 0
                        }
                  }
            }

            // Directions for neighbors: up, down, left, right
            vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

            // Perform Breadth-First Search (BFS) to calculate the heights
            while (!q.empty()) {
                  // Dequeue the front cell
                  auto [r, c] = q.front();
                  q.pop();

                  // Get the current height of the cell
                  int currentHeight = heights[r][c];

                  // Process each neighbor
                  for (auto [dr, dc] : directions) {
                        int nr = r + dr;
                        int nc = c + dc;

                        // Check if the neighbor is within bounds and unvisited
                        if (nr >= 0 && nr < ROWS && nc >= 0 && nc < COLS && heights[nr][nc] == -1) {
                              q.push({nr, nc}); // Add neighbor to the queue
                              heights[nr][nc] = currentHeight + 1; // Set its height
                        }
                  }
            }

            // Return the final height grid
            return heights;
      }
};
