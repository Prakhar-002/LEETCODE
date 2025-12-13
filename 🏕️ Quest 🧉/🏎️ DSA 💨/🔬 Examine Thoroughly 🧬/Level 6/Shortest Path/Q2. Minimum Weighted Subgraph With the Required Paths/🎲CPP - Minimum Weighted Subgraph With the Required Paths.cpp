//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.4 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of nodes

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <queue>
#include <unordered_map>
#include <climits>
using namespace std;

class Solution {
      // Helper struct for Dijkstra priority queue: (distance, node)
      struct Point {
            long long distance;
            int node;
            
            Point(long long distance, int node) : distance(distance), node(node) {}
            
            bool operator>(const Point& other) const {
                  return distance > other.distance;
            }
      };

public:
      long long minimumWeight(int n, vector<vector<int>>& edges, int src1, int src2, int dest) {
            /**
             * Find minimum weight path: src1 → X → src2 → X → dest (X can be same node)
             * Strategy: 3 Dijkstras compute shortest paths:
             *   1. dist1: src1 → all nodes X
             *   2. dist2: src2 → all nodes X  
             *   3. dist3: all nodes X → dest (using reversed graph)
             * Answer: min(dist1[X] + dist2[X] + dist3[X]) for all reachable X
             */
            
            // Forward graph: node → List<(neighbor, weight)>
            unordered_map<int, vector<pair<int, int>>> graph;
            
            // Reversed graph for computing dest→all paths (equivalent to all→dest)
            unordered_map<int, vector<pair<int, int>>> reversedGraph;
            
            // Build both graphs from edges
            for (auto& edge : edges) {
                  int u = edge[0];  // Source node
                  int v = edge[1];  // Destination node
                  int w = edge[2];  // Edge weight
                  
                  // Forward graph: u → v (weight w)
                  graph[edge[0]].emplace_back(edge[1], edge[2]);
                  
                  // Reversed graph: v → u (weight w) for dest→all computation
                  reversedGraph[edge[1]].emplace_back(edge[0], edge[2]);
            }

            // Dijkstra 1: Shortest paths from src1 to all reachable nodes
            auto dist1 = dijkstra(n, graph, src1);
            
            // Dijkstra 2: Shortest paths from src2 to all reachable nodes
            auto dist2 = dijkstra(n, graph, src2);
            
            // Dijkstra 3: Shortest paths from dest to all nodes (reversed = all→dest)
            auto dist3 = dijkstra(n, reversedGraph, dest);
            
            // Find minimum total path weight through any intermediate node X
            long long res = LLONG_MAX;
            for (int i = 0; i < n; i++) {
                  // Check if node i is reachable from all 3 sources
                  if (dist1.count(i) && dist2.count(i) && dist3.count(i)) {
                        // Total path: src1→i + src2→i + i→dest
                        res = min(res, dist1[i] + dist2[i] + dist3[i]);
                  }
            }
            
            // Return -1 if no valid path exists
            return res == LLONG_MAX ? -1LL : res;
      }

private:
      unordered_map<int, long long> dijkstra(int n, unordered_map<int, vector<pair<int, int>>>& graph, int src) {
            /**
             * Dijkstra's algorithm: Compute shortest paths from src to all reachable nodes
             * Uses priority queue for greedy selection of minimum distance node
             * dist map serves dual purpose: distance storage + visited tracking
             */
            
            // Min-heap priority queue: smaller distance first
            priority_queue<Point, vector<Point>, greater<Point>> pq;
            
            // Initialize source node with distance 0
            pq.emplace(0LL, src);  // <distance, node>
            
            // dist[node] = shortest distance from src (also tracks visited nodes)
            unordered_map<int, long long> dist;
            
            while (!pq.empty()) {
                  // Extract node with minimum distance
                  Point cur = pq.top(); pq.pop();
                  long long curDistance = cur.distance;
                  int curNode = cur.node;
                  
                  // Pruning: Skip if already processed with better distance
                  if (dist.count(curNode)) {
                        continue;
                  }
                  
                  // Record shortest distance to current node
                  dist[curNode] = curDistance;
                  
                  // Relax all outgoing edges from current node
                  auto it = graph.find(curNode);
                  if (it != graph.end()) {
                        for (auto& edge : it->second) {
                              int nei = edge.first;     // Neighbor node
                              int cost = edge.second;   // Edge weight
                              
                              // Only relax if neighbor not yet processed
                              if (!dist.count(nei)) {
                                    // Potential shorter path through current node
                                    pq.emplace(curDistance + cost, nei);
                              }
                        }
                  }
            }
            
            return dist;  // Return distances to all reachable nodes
      }
};
