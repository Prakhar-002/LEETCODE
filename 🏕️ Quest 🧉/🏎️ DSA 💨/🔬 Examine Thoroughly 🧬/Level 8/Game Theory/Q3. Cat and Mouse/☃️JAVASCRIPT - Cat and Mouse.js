//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L8.5 Q3 

//? ⌚ Time complexity ➺ O(n ^ 3) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n ^ 2)

var catMouseGame = function (graph) {
      const N = graph.length;

      // Helper: given a state (m, c, t), return all possible parent states
      // that could have led to it in one move
      function* parents(m, c, t) {
            // If current turn is mouse (t === 2), then previous turn was cat (t === 1)
            if (t === 2) {
                  // Cat moved from some node to c; m unchanged
                  for (const m2 of graph[m]) {
                        yield [m2, c, 3 - t];
                  }
            } else {
                  // Mouse moved from some node to m; c unchanged, but skip if c2 === 0 (cat can't be at hole)
                  for (const c2 of graph[c]) {
                        if (c2 !== 0) {
                              yield [m, c2, 3 - t];
                        }
                  }
            }
      }

      // Constants for outcomes
      const DRAW = 0, MOUSE = 1, CAT = 2;
      // color[m][c][t] = outcome of state (mouse at m, cat at c, turn t)
      const color = new Map();
      // degree[m][c][t] = number of neutral (undecided) children of this state
      const degree = new Map();

      // Initialize degree for each state
      for (let m = 0; m < N; ++m) {
            for (let c = 0; c < N; ++c) {
                  const key1 = `${m},${c},${1}`;
                  // On mouse’s turn: degree = number of adjacent nodes
                  degree.set(key1, graph[m].length);
                  // On cat’s turn: degree = number of adjacent nodes, but cat cannot go to node 0
                  degree.set(`${m},${c},${2}`, graph[c].length - (graph[0].includes(c) ? 1 : 0));
            }
      }

      // Queue for BFS: all states that are already colored (known outcome)
      const queue = [];
      // Base case 1: mouse reaches hole (node 0) → mouse wins
      for (let i = 0; i < N; ++i) {
            for (let t = 1; t <= 2; ++t) {
                  const key = `${0},${i},${t}`;
                  color.set(key, MOUSE);
                  queue.push([0, i, t, MOUSE]);
            }
      }
      // Base case 2: cat catches mouse (m === c and m !== 0) → cat wins
      for (let i = 1; i < N; ++i) {
            for (let t = 1; t <= 2; ++t) {
                  const key = `${i},${i},${t}`;
                  color.set(key, CAT);
                  queue.push([i, i, t, CAT]);
            }
      }

      // BFS: propagate known outcomes backwards
      while (queue.length > 0) {
            // Pop a state (i, j, t) with known outcome c
            const [i, j, t, c] = queue.shift();
            // For every parent state that could have led to (i, j, t)
            for (const [i2, j2, t2] of parents(i, j, t)) {
                  const key2 = `${i2},${j2},${t2}`;
                  // If this parent is already colored, skip
                  if (!color.has(key2)) {
                        // If the parent’s turn is the same as the winner c,
                        // then the parent can force a win by moving to this state
                        if (t2 === c) {
                              color.set(key2, c);
                              queue.push([i2, j2, t2, c]);
                        } else {
                              // Otherwise, this move is a losing move for the parent
                              const degKey = `${i2},${j2},${t2}`;
                              let deg = degree.get(degKey) || 0;
                              deg--;
                              degree.set(degKey, deg);
                              // If all moves from this parent lead to loss, then the parent loses
                              if (deg === 0) {
                                    color.set(key2, 3 - t2);
                                    queue.push([i2, j2, t2, 3 - t2]);
                              }
                        }
                  }
            }
      }

      // Return the outcome of the initial state: mouse at 1, cat at 2, mouse’s turn (t=1)
      return color.get(`${1},${2},${1}`) || DRAW;
};
