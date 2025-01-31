//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 827

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(grid)

//? 🧺 Space complexity ➺ O(n ^ 2)

#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
      // Function to check if a cell is out of bounds
      bool outOfBound(int r, int c, int N) {
            // A cell is out of bounds if its row or column index is outside the grid
            return r < 0 || c < 0 || r >= N || c >= N;
      }

      // Depth-First Search (DFS) to label each island and calculate its size
      int dfs(vector<vector<int>>& grid, int r, int c, int label, int N) {
            // Base case: Stop if the cell is out of bounds or not land (grid[r][c] != 1)
            if (outOfBound(r, c, N) || grid[r][c] != 1) {
                  return 0;
            }

            // Label the current cell with a unique identifier (label)
            grid[r][c] = label;

            // Initialize size to 1 (current cell counts as part of the island)
            int size = 1;

            // Define the four possible neighboring cells (up, down, left, right)
            vector<pair<int, int>> neighbors = {{r + 1, c}, {r - 1, c}, {r, c + 1}, {r, c - 1}};

            // Recursively calculate the size of the connected island
            for (auto& neighbor : neighbors) {
                  size += dfs(grid, neighbor.first, neighbor.second, label, N);
            }

            // Return the total size of the island
            return size;
      }

      // Function to calculate the potential size of an island by connecting water
      int connect(vector<vector<int>>& grid, int r, int c, unordered_map<int, int>& size, int N) {
            // Define the four possible neighbors of the current cell
            vector<pair<int, int>> neighbors = {{r + 1, c}, {r - 1, c}, {r, c + 1}, {r, c - 1}};
            
            // A set to keep track of visited island labels
            unordered_set<int> visited;
            
            // Start with a size of 1 (flipping the current water cell to land)
            int connectedIsland = 1;

            // Iterate through the neighboring cells
            for (auto& neighbor : neighbors) {
                  int nr = neighbor.first, nc = neighbor.second;
                  // If the neighbor is within bounds and its island label hasn't been visited yet
                  if (!outOfBound(nr, nc, N) && visited.find(grid[nr][nc]) == visited.end()) {
                        // Add the size of the neighboring island to the total size
                        connectedIsland += size[grid[nr][nc]];
                        // Mark this island label as visited
                        visited.insert(grid[nr][nc]);
                  }
            }

            // Return the total size of the newly formed island
            return connectedIsland;
      }

      // Main function to calculate the largest island size
      int largestIsland(vector<vector<int>>& grid) {
            int N = grid.size(); // Size of the NxN grid

            // Map to store the size of each labeled island
            unordered_map<int, int> size;
            
            int label = 2; // Start labeling islands from 2 (to distinguish from 1s)

            // First pass: Label all islands and calculate their sizes
            for (int r = 0; r < N; r++) {
                  for (int c = 0; c < N; c++) {
                        if (grid[r][c] == 1) { // If the cell is land
                              size[label] = dfs(grid, r, c, label, N); // Label and calculate size
                              label++; // Move to the next label for the next island
                        }
                  }
            }

            // Get the size of the largest island from the labeled sizes
            int island = 0;
            for (auto& [_, val] : size) {
                  island = max(island, val);
            }

            // Second pass: Try flipping each water cell (0) to land (1)
            for (int r = 0; r < N; r++) {
                  for (int c = 0; c < N; c++) {
                        if (grid[r][c] == 0) { // If the cell is water
                              island = max(island, connect(grid, r, c, size, N));
                        }
                  }
            }

            // Return the size of the largest possible island
            return island;
      }
};
