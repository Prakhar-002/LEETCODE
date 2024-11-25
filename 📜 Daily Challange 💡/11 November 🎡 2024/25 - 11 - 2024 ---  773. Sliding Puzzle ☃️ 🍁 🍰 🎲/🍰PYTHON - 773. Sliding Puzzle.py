#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 773

#? ⌚ Time complexity ➺ O(S * M * N) {O(8640)} 👉🏻  S = Total states process

#? 🧺 Space complexity ➺ O(S * N) {O(2160)}  -> M = moves per state, N = copy Arr

from collections import deque

class Solution:
      def slidingPuzzle(self, board: List[List[int]]) -> int:
            # Define the adjacency list representing valid moves for each position in the flattened board
            # [0, 1, 2]
            # [3, 4, 5]

            adj = {
                  0: [1, 3],     # Position 0 can swap with positions 1 and 3
                  1: [0, 2, 4],  # Position 1 can swap with positions 0, 2, and 4
                  2: [1, 5],     # Position 2 can swap with positions 1 and 5
                  3: [0, 4],     # Position 3 can swap with positions 0 and 4
                  4: [1, 3, 5],  # Position 4 can swap with positions 1, 3, and 5
                  5: [2, 4]      # Position 5 can swap with positions 2 and 4
            }

            # Flatten the 2D board into a single array for easier manipulation
            b = [n for row in board for n in row]

            # Find the initial position of zero
            zero_pos = b.index(0)

            # Initialize a queue for BFS with 
            # (index of zero, board state as a tuple, number of moves so far)
            q = deque([(zero_pos, tuple(b), 0)])  # Use tuple for immutability in the visited set
            # Use a set to track visited states and avoid revisiting
            visit = set([tuple(b)])

            # Target state for the board
            target = (1, 2, 3, 4, 5, 0)

            # Perform BFS
            while q:
                  # Dequeue the front element
                  zero_pos, b, length = q.popleft()

                  # Check if the board is in the solved state
                  if b == target:
                        return length  # Return the number of moves taken to reach the solved state

                  # Try swapping the zero with all valid adjacent positions
                  for next_pos in adj[zero_pos]:
                        # Create a new board configuration by swapping zero with the adjacent position
                        b_list = list(b)  # Convert tuple to list for manipulation
                        b_list[zero_pos], b_list[next_pos] = b_list[next_pos], b_list[zero_pos]
                        b_tuple = tuple(b_list)  # Convert back to tuple

                        # If the new configuration has not been visited
                        if b_tuple not in visit:
                              # Enqueue the new configuration with the updated zero index and move count
                              q.append((next_pos, b_tuple, length + 1))
                              # Mark the new configuration as visited
                              visit.add(b_tuple)

            # If the queue is exhausted without finding the solution, return -1
            return -1
