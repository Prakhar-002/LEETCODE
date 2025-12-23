//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L8.5 Q3

//? ⌚ Time complexity ➺ O(n ^ 3) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n ^ 2)

class Solution {
      public int catMouseGame(int[][] graph) {
            int N = graph.length;

            // Constants for outcomes
            final int DRAW = 0, MOUSE = 1, CAT = 2;
            // color[m][c][t] = outcome of state (mouse at m, cat at c, turn t)
            int[][][] color = new int[N][N][3];
            // degree[m][c][t] = number of neutral (undecided) children of this state
            int[][][] degree = new int[N][N][3];

            // Initialize degree for each state
            for (int m = 0; m < N; ++m) {
                  for (int c = 0; c < N; ++c) {
                        // On mouse’s turn: degree = number of adjacent nodes
                        degree[m][c][1] = graph[m].length;
                        // On cat’s turn: degree = number of adjacent nodes, but cat cannot go to node 0
                        degree[m][c][2] = graph[c].length;
                        for (int neighbor : graph[0]) {
                              if (neighbor == c) {
                                    degree[m][c][2]--;
                              }
                        }
                  }
            }

            // Queue for BFS: all states that are already colored (known outcome)
            Queue<int[]> queue = new ArrayDeque<>();
            // Base case 1: mouse reaches hole (node 0) → mouse wins
            for (int i = 0; i < N; ++i) {
                  for (int t = 1; t <= 2; ++t) {
                        color[0][i][t] = MOUSE;
                        queue.offer(new int[] { 0, i, t, MOUSE });
                  }
            }
            // Base case 2: cat catches mouse (m == c and m != 0) → cat wins
            for (int i = 1; i < N; ++i) {
                  for (int t = 1; t <= 2; ++t) {
                        color[i][i][t] = CAT;
                        queue.offer(new int[] { i, i, t, CAT });
                  }
            }

            // BFS: propagate known outcomes backwards
            while (!queue.isEmpty()) {
                  // Pop a state (i, j, t) with known outcome c
                  int[] state = queue.poll();
                  int i = state[0], j = state[1], t = state[2], c = state[3];
                  // For every parent state that could have led to (i, j, t)
                  for (int[] parent : getParents(graph, i, j, t)) {
                        int i2 = parent[0], j2 = parent[1], t2 = parent[2];
                        // If this parent is already colored, skip
                        if (color[i2][j2][t2] == DRAW) {
                              // If the parent’s turn is the same as the winner c,
                              // then the parent can force a win by moving to this state
                              if (t2 == c) {
                                    color[i2][j2][t2] = c;
                                    queue.offer(new int[] { i2, j2, t2, c });
                              } else {
                                    // Otherwise, this move is a losing move for the parent
                                    degree[i2][j2][t2]--;
                                    // If all moves from this parent lead to loss, then the parent loses
                                    if (degree[i2][j2][t2] == 0) {
                                          color[i2][j2][t2] = 3 - t2;
                                          queue.offer(new int[] { i2, j2, t2, 3 - t2 });
                                    }
                              }
                        }
                  }
            }

            // Return the outcome of the initial state: mouse at 1, cat at 2, mouse’s turn
            // (t=1)
            return color[1][2][1];
      }

      // Helper: given a state (m, c, t), return all possible parent states
      // that could have led to it in one move
      private List<int[]> getParents(int[][] graph, int m, int c, int t) {
            List<int[]> parents = new ArrayList<>();
            // If current turn is mouse (t == 2), then previous turn was cat (t == 1)
            if (t == 2) {
                  // Cat moved from some node to c; m unchanged
                  for (int m2 : graph[m]) {
                        parents.add(new int[] { m2, c, 3 - t });
                  }
            } else { 
                  // Mouse moved from some node to m; c unchanged, but skip if c2 == 0 (cat can't
                  // be at hole)
                  for (int c2 : graph[c]) {
                        if (c2 != 0) {
                              parents.add(new int[] { m, c2, 3 - t });
                        }
                  }
            }

            return parents;
      }
}
