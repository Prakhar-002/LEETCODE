//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1765

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(mat)

//? 🧺 Space complexity ➺ O(n * m) 👉🏻 m = len(mat[0])

//* MultiSource BFS

#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

class Solution {
public:
      vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
            // Get the number of rows and columns in the grid
            int ROWS = mat.size();
            int COLS = mat[0].size();

            // Initialize a deque to perform BFS (queue to store coordinates)
            deque<pair<int, int>> q;  // (r, c)

            // Initialize the result grid with -1 to indicate unvisited cells
            vector<vector<int>> distances(ROWS, vector<int>(COLS, -1));

            // Iterate through the grid to find cells with zeroes
            for (int r = 0; r < ROWS; r++) {
                  for (int c = 0; c < COLS; c++) {
                        if (mat[r][c] == 0) {  // If the current cell is a 0
                              q.push_back({r, c});  // Add it to the queue
                              distances[r][c] = 0;  // Cells with 0 have a distance of 0
                        }
                  }
            }

            // Directions for neighbors: up, down, left, right
            vector<vector<int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

            // Perform Breadth-First Search (BFS) to calculate the distance to the nearest 0
            while (!q.empty()) {
                  // Dequeue the front cell
                  pair<int, int> current = q.front();
                  q.pop_front();
                  int r = current.first, c = current.second;

                  // Get the current distance of the cell (this represents the distance to the nearest 0)
                  int currentDistance = distances[r][c];

                  // Process each neighbor
                  for (auto& dir : directions) {
                        int nr = r + dir[0], nc = c + dir[1];

                        // Check if the neighbor is within bounds and unvisited
                        if (nr >= 0 && nr < ROWS && nc >= 0 && nc < COLS && distances[nr][nc] == -1) {
                              q.push_back({nr, nc});  // Add the neighbor to the queue to process later
                              distances[nr][nc] = currentDistance + 1;  // Set the neighbor's distance
                        }
                  }
            }

            // Return the final grid of distances
            return distances;
      }
};
