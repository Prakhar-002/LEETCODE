//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L8.5 Q3

//? ⌚ Time complexity ➺ O(n ^ 3) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n ^ 2)

class Solution {
public:
      int catMouseGame(vector<vector<int>>& graph) {
            int N = graph.size();

            // Constants for outcomes
            const int DRAW = 0, MOUSE = 1, CAT = 2;
            // color[m][c][t] = outcome of state (mouse at m, cat at c, turn t)
            vector<vector<vector<int>>> color(N, vector<vector<int>>(N, vector<int>(3, DRAW)));
            // degree[m][c][t] = number of neutral (undecided) children of this state
            vector<vector<vector<int>>> degree(N, vector<vector<int>>(N, vector<int>(3, 0)));

            // Initialize degree for each state
            for (int m = 0; m < N; ++m) {
                  for (int c = 0; c < N; ++c) {
                        // On mouse’s turn: degree = number of adjacent nodes
                        degree[m][c][1] = graph[m].size();
                        // On cat’s turn: degree = number of adjacent nodes, but cat cannot go to node 0
                        degree[m][c][2] = graph[c].size();
                        for (int neighbor : graph[0]) {
                              if (neighbor == c) {
                                    degree[m][c][2]--;
                              }
                        }
                  }
            }

            // Queue for BFS: all states that are already colored (known outcome)
            queue<tuple<int, int, int, int>> q;
            // Base case 1: mouse reaches hole (node 0) → mouse wins
            for (int i = 0; i < N; ++i) {
                  for (int t = 1; t <= 2; ++t) {
                        color[0][i][t] = MOUSE;
                        q.emplace(0, i, t, MOUSE);
                  }
            }
            // Base case 2: cat catches mouse (m == c and m != 0) → cat wins
            for (int i = 1; i < N; ++i) {
                  for (int t = 1; t <= 2; ++t) {
                        color[i][i][t] = CAT;
                        q.emplace(i, i, t, CAT);
                  }
            }

            // BFS: propagate known outcomes backwards
            while (!q.empty()) {
                  // Pop a state (i, j, t) with known outcome c
                  auto [i, j, t, c] = q.front(); q.pop();
                  // For every parent state that could have led to (i, j, t)
                  for (auto [i2, j2, t2] : getParents(graph, i, j, t)) {
                        // If this parent is already colored, skip
                        if (color[i2][j2][t2] == DRAW) {
                              // If the parent’s turn is the same as the winner c,
                              // then the parent can force a win by moving to this state
                              if (t2 == c) {
                                    color[i2][j2][t2] = c;
                                    q.emplace(i2, j2, t2, c);
                              } else {
                                    // Otherwise, this move is a losing move for the parent
                                    degree[i2][j2][t2]--;
                                    // If all moves from this parent lead to loss, then the parent loses
                                    if (degree[i2][j2][t2] == 0) {
                                          color[i2][j2][t2] = 3 - t2;
                                          q.emplace(i2, j2, t2, 3 - t2);
                                    }
                              }
                        }
                  }
            }

            // Return the outcome of the initial state: mouse at 1, cat at 2, mouse’s turn (t=1)
            return color[1][2][1];
      }

private:
      // Helper: given a state (m, c, t), return all possible parent states
      // that could have led to it in one move
      vector<tuple<int, int, int>> getParents(vector<vector<int>>& graph, int m, int c, int t) {
            vector<tuple<int, int, int>> parents;
            // If current turn is mouse (t == 2), then previous turn was cat (t == 1)
            if (t == 2) {
                  // Cat moved from some node to c; m unchanged
                  for (int m2 : graph[m]) {
                        parents.emplace_back(m2, c, 3 - t);
                  }
            } else {
                  // Mouse moved from some node to m; c unchanged, but skip if c2 == 0 (cat can't be at hole)
                  for (int c2 : graph[c]) {
                        if (c2 != 0) {
                              parents.emplace_back(m, c2, 3 - t);
                        }
                  }
            }
            return parents;
      }
};
