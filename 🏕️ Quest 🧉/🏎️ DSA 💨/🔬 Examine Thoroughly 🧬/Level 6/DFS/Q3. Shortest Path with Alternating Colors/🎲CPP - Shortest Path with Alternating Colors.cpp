//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.4 Q3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <queue>
#include <unordered_set>
using namespace std;

class Solution {
public:
      vector<int> shortestAlternatingPaths(int n, vector<vector<int>> &redEdges,
                                          vector<vector<int>> &blueEdges) {
            // Separate adjacency lists for red and blue edges
            vector<vector<int>> red(n), blue(n);

            // Build red graph: red[u] = list of nodes reachable via red edge
            for (auto &edge : redEdges) {
                  red[edge[0]].push_back(edge[1]);
            }

            // Build blue graph: blue[u] = list of nodes reachable via blue edge
            for (auto &edge : blueEdges) {
                  blue[edge[0]].push_back(edge[1]);
            }

            // answer[i] = shortest alternating path length to node i from 0
            vector<int> answer(n, -1);

            // BFS queue: {node, length, prev_edge_colour}
            // prev_edge_colour: 0=None, 1=RED, 2=BLUE
            queue<tuple<int, int, int>> q;
            q.emplace(0, 0, 0); // Start from node 0, length 0, no previous edge

            // visited: (node, prev_edge_colour) prevents revisiting same state
            unordered_set<string> visit;
            visit.emplace("0_0");

            while (!q.empty()) {
                  auto [node, length, edgeColour] = q.front();
                  q.pop();

                  // First time reaching this node, record the distance
                  if (answer[node] == -1) {
                        answer[node] = length;
                  }

                  // Next edge must be RED (if previous wasn't RED)
                  if (edgeColour != 1) {
                        for (int nei : red[node]) {
                              string state = to_string(nei) + "_1";
                              if (visit.find(state) == visit.end()) {
                                    visit.insert(state);
                                    q.emplace(nei, length + 1, 1);
                              }
                        }
                  }

                  // Next edge must be BLUE (if previous wasn't BLUE)
                  if (edgeColour != 2) {
                        for (int nei : blue[node]) {
                              string state = to_string(nei) + "_2";
                              if (visit.find(state) == visit.end()) {
                                    visit.insert(state);
                                    q.emplace(nei, length + 1, 2);
                              }
                        }
                  }
            }

            return answer;
      }
};
