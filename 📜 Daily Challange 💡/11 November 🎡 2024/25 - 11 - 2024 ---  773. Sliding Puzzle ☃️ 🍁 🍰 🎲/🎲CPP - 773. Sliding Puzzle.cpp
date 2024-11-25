//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 773

//? ⌚ Time complexity ➺ O(S * M * N) {O(8640)} 👉🏻  S = Total states process

//? 🧺 Space complexity ➺ O(S * N) {O(2160)}  -> M = moves per state, N = copy Arr

#include <vector>
#include <string>
#include <queue>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
      int slidingPuzzle(vector<vector<int>>& board) {
            // Define adjacency list for valid moves
            vector<vector<int>> adj = {
                  {1, 3},        // Position 0 can swap with positions 1 and 3
                  {0, 2, 4},     // Position 1 can swap with positions 0, 2, and 4
                  {1, 5},        // Position 2 can swap with positions 1 and 5
                  {0, 4},        // Position 3 can swap with positions 0 and 4
                  {1, 3, 5},     // Position 4 can swap with positions 1, 3, and 5
                  {2, 4}         // Position 5 can swap with positions 2 and 4
            };

            // Flatten the 2D board into a single string
            string b;
            for (const auto& row : board) {
                  for (int num : row) {
                        b += to_string(num);
                  }
            }

            // Target configuration for the solved board
            string target = "123450";

            // Initialize BFS queue (current board, index of '0', move count)
            queue<pair<string, int>> q;
            unordered_set<string> visited;
            q.push({b, b.find('0')});
            visited.insert(b);

            int steps = 0;

            // Perform BFS
            while (!q.empty()) {
                  int size = q.size();
                  for (int i = 0; i < size; i++) {
                        // Dequeue the current state
                        auto [current, zeroIdx] = q.front();
                        q.pop();

                        // Check if the current board matches the target
                        if (current == target) {
                              return steps;
                        }

                        // Try all valid swaps for the current position of '0'
                        for (int next : adj[zeroIdx]) {
                              string nextBoard = current;
                              // Swap '0' with the adjacent position
                              swap(nextBoard[zeroIdx], nextBoard[next]);

                              // Add the new configuration to the queue if not visited
                              if (!visited.count(nextBoard)) {
                                    q.push({nextBoard, next});
                                    visited.insert(nextBoard);
                              }
                        }
                  }
                  // Increment the step counter after processing all current states
                  steps++;
            }

            // If BFS completes without finding a solution, return -1
            return -1;
      }
};
