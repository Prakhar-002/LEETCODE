//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 773

//? ⌚ Time complexity ➺ O(S * M * N) {O(8640)} 👉🏻  S = Total states process

//? 🧺 Space complexity ➺ O(S * N) {O(2160)}  -> M = moves per state, N = copy Arr

var slidingPuzzle = function(board) {
      // Define adjacency list for valid moves
      const adj = [
            [1, 3],        // Position 0 can swap with positions 1 and 3
            [0, 2, 4],     // Position 1 can swap with positions 0, 2, and 4
            [1, 5],        // Position 2 can swap with positions 1 and 5
            [0, 4],        // Position 3 can swap with positions 0 and 4
            [1, 3, 5],     // Position 4 can swap with positions 1, 3, and 5
            [2, 4]         // Position 5 can swap with positions 2 and 4
      ];

      // Flatten the 2D board into a single string
      let b = board.flat().join('');
      const target = "123450";

      // Initialize BFS queue (current board, index of '0')
      const queue = [[b, b.indexOf('0')]];
      const visited = new Set();
      visited.add(b);

      let steps = 0;

      // Perform BFS
      while (queue.length > 0) {
            const size = queue.length;
            for (let i = 0; i < size; i++) {
                  const [current, zeroIdx] = queue.shift();

                  // Check if the current board matches the target
                  if (current === target) {
                        return steps;
                  }

                  // Try all valid swaps for the current position of '0'
                  for (let next of adj[zeroIdx]) {
                        const nextState = current.split('');
                        // Swap '0' with the adjacent position
                        [nextState[zeroIdx], nextState[next]] = [nextState[next], nextState[zeroIdx]];
                        const nextBoard = nextState.join('');

                        // Add the new configuration to the queue if not visited
                        if (!visited.has(nextBoard)) {
                              queue.push([nextBoard, next]);
                              visited.add(nextBoard);
                        }
                  }
            }
            // Increment the step counter after processing all current states
            steps++;
      }

      // If BFS completes without finding a solution, return -1
      return -1;
};
