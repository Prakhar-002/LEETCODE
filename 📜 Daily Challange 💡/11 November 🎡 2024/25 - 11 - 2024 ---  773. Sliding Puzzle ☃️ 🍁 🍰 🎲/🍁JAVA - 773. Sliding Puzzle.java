//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 773

//? ⌚ Time complexity ➺ O(S * M * N) {O(8640)} 👉🏻  S = Total states process

//? 🧺 Space complexity ➺ O(S * N) {O(2160)}  -> M = moves per state, N = copy Arr

import java.util.*;

class Solution {
      public int slidingPuzzle(int[][] board) {
            // Define adjacency list representing valid moves for each position
            int[][] adj = {
                  {1, 3},        // Position 0 can swap with positions 1 and 3
                  {0, 2, 4},     // Position 1 can swap with positions 0, 2, and 4
                  {1, 5},        // Position 2 can swap with positions 1 and 5
                  {0, 4},        // Position 3 can swap with positions 0 and 4
                  {1, 3, 5},     // Position 4 can swap with positions 1, 3, and 5
                  {2, 4}         // Position 5 can swap with positions 2 and 4
            };

            // Flatten the 2D board into a single string representation
            StringBuilder b = new StringBuilder();
            for (int[] row : board) {
                  for (int num : row) {
                        b.append(num);
                  }
            }

            // Target configuration for the solved board
            String target = "123450";

            // Initialize BFS queue (current board, index of '0', move count)
            Queue<String> queue = new LinkedList<>();
            Set<String> visited = new HashSet<>();
            queue.add(b.toString());
            visited.add(b.toString());

            int steps = 0;

            // Perform BFS
            while (!queue.isEmpty()) {
                  int size = queue.size();
                  for (int i = 0; i < size; i++) {
                        // Dequeue the current state
                        String current = queue.poll();

                        // Check if the current board matches the target
                        if (current.equals(target)) {
                              return steps;
                        }

                        // Find the position of '0' (blank space)
                        int zeroIdx = current.indexOf('0');

                        // Try all valid swaps for the current position of '0'
                        for (int next : adj[zeroIdx]) {
                              char[] nextState = current.toCharArray();
                              // Swap '0' with the adjacent position
                              char temp = nextState[zeroIdx];
                              nextState[zeroIdx] = nextState[next];
                              nextState[next] = temp;

                              // Convert the new configuration to a string
                              String nextBoard = new String(nextState);

                              // Add the new configuration to the queue if not visited
                              if (!visited.contains(nextBoard)) {
                                    queue.add(nextBoard);
                                    visited.add(nextBoard);
                              }
                        }
                  }
                  // Increment the step counter after processing all current states
                  steps++;
            }

            // If BFS completes without finding a solution, return -1
            return -1;
      }
}
