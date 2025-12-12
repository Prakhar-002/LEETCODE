//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.4 Q3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public int[] shortestAlternatingPaths(int n, int[][] redEdges, int[][] blueEdges) {
            // Separate adjacency lists for red and blue edges
            List<List<Integer>> red = new ArrayList<>();
            List<List<Integer>> blue = new ArrayList<>();

            for (int i = 0; i < n; i++) {
                  red.add(new ArrayList<>());
                  blue.add(new ArrayList<>());
            }

            // Build red graph: red[u] = list of nodes reachable via red edge
            for (int[] edge : redEdges) {
                  red.get(edge[0]).add(edge[1]);
            }

            // Build blue graph: blue[u] = list of nodes reachable via blue edge
            for (int[] edge : blueEdges) {
                  blue.get(edge[0]).add(edge[1]);
            }

            // answer[i] = shortest alternating path length to node i from 0 (-1 if
            // unreachable)
            int[] answer = new int[n];
            Arrays.fill(answer, -1);

            // BFS queue: [node, length, prev_edge_colour]
            // prev_edge_colour: 0=None, 1=RED, 2=BLUE
            Queue<int[]> q = new LinkedList<>();
            q.offer(new int[] { 0, 0, 0 }); // Start from node 0, length 0, no previous edge

            // visited[node][prev_edge_colour] prevents revisiting same state
            // 0=None, 1=RED, 2=BLUE
            boolean[][] visit = new boolean[n][3];
            visit[0][0] = true;

            while (!q.isEmpty()) {
                  int[] curr = q.poll();
                  int node = curr[0];
                  int length = curr[1];
                  int edgeColour = curr[2]; // 0=None, 1=RED, 2=BLUE

                  // First time reaching this node, record the distance
                  if (answer[node] == -1) {
                        answer[node] = length;
                  }

                  // Next edge must be RED (if previous wasn't RED)
                  if (edgeColour != 1) {
                        for (int nei : red.get(node)) {
                              if (!visit[nei][1]) {
                                    visit[nei][1] = true;
                                    q.offer(new int[] { nei, length + 1, 1 });
                              }
                        }
                  }

                  // Next edge must be BLUE (if previous wasn't BLUE)
                  if (edgeColour != 2) {
                        for (int nei : blue.get(node)) {
                              if (!visit[nei][2]) {
                                    visit[nei][2] = true;
                                    q.offer(new int[] { nei, length + 1, 2 });
                              }
                        }
                  }
            }

            return answer;
      }
}
