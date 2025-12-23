#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L8.5 Q3

#? ⌚ Time complexity ➺ O(n ^ 3) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n ^ 2)

from collections import defaultdict

class Solution(object):
      def catMouseGame(self, graph):
            N = len(graph)

            # Helper: given a state (m, c, t), return all possible parent states
            # that could have led to it in one move
            def parents(m, c, t):
                  # If current turn is mouse (t == 2), then previous turn was cat (t == 1)
                  if t == 2:
                        # Cat moved from some node to c; m unchanged
                        for m2 in graph[m]:
                              yield m2, c, 3 - t
                  else:
                        # Mouse moved from some node to m; c unchanged, but skip if c2 == 0 (cat can't be at hole)
                        for c2 in graph[c]:
                              if c2:
                                    yield m, c2, 3 - t

            # Constants for outcomes
            DRAW, MOUSE, CAT = 0, 1, 2
            # color[m][c][t] = outcome of state (mouse at m, cat at c, turn t)
            color = defaultdict(int)

            # degree[m][c][t] = number of neutral (undecided) children of this state
            degree = {}
            for m in range(N):
                  for c in range(N):
                        # On mouse’s turn: degree = number of adjacent nodes
                        degree[m, c, 1] = len(graph[m])
                        # On cat’s turn: degree = number of adjacent nodes, but cat cannot go to node 0
                        degree[m, c, 2] = len(graph[c]) - (0 in graph[c])

            # Queue for BFS: all states that are already colored (known outcome)
            queue = deque([])
            # Base case 1: mouse reaches hole (node 0) → mouse wins
            for i in range(N):
                  for t in range(1, 3):
                        color[0, i, t] = MOUSE
                        queue.append((0, i, t, MOUSE))
            # Base case 2: cat catches mouse (m == c and m != 0) → cat wins
            for i in range(1, N):
                  for t in range(1, 3):
                        color[i, i, t] = CAT
                        queue.append((i, i, t, CAT))

            # BFS: propagate known outcomes backwards
            while queue:
                  # Pop a state (i, j, t) with known outcome c
                  i, j, t, c = queue.popleft()
                  # For every parent state that could have led to (i, j, t)
                  for i2, j2, t2 in parents(i, j, t):
                        # If this parent is already colored, skip
                        if color[i2, j2, t2] is DRAW:
                              # If the parent’s turn is the same as the winner c,
                              # then the parent can force a win by moving to this state
                              if t2 == c:
                                    color[i2, j2, t2] = c
                                    queue.append((i2, j2, t2, c))
                              else:
                                    # Otherwise, this move is a losing move for the parent
                                    degree[i2, j2, t2] -= 1
                                    # If all moves from this parent lead to loss, then the parent loses
                                    if degree[i2, j2, t2] == 0:
                                          color[i2, j2, t2] = 3 - t2
                                          queue.append((i2, j2, t2, 3 - t2))

            # Return the outcome of the initial state: mouse at 1, cat at 2, mouse’s turn (t=1)
            return color[1, 2, 1] 
