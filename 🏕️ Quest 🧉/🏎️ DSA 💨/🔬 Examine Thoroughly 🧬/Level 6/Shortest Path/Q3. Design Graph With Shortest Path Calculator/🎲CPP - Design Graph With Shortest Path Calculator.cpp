//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.4 Q3

//? ⌚ Time complexity ➺ O((V + E) log V) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(v)

#include <vector>
#include <queue>
#include <climits>
using namespace std;

class Graph {
public:
      vector<vector<pair<int, int>>> adjList;  // adjList[i] = [(nei1, w1), (nei2, w2), ...]
      
      Graph(int n, vector<vector<int>>& edges) {
            // Initialize adjacency lists for n nodes
            adjList.resize(n);
            
            // Build directed graph from edges
            for (auto& e : edges) {
                  int u = e[0], v = e[1], w = e[2];
                  adjList[u].push_back(make_pair(v, w));  // Directed: u → v (weight w)
            }
      }

      void addEdge(vector<int> edge) {
            // Dynamically add directed edge: [u, v, w]
            int u = edge[0], v = edge[1], w = edge[2];
            adjList[u].push_back(make_pair(v, w));
      }

      int shortestPath(int node1, int node2) {
            int n = adjList.size();  // Number of nodes
            
            // Min-heap PQ: vector[0]=cost, vector[1]=node
            priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
            
            // costForNode[i] = shortest distance from node1 to i
            vector<int> costForNode(n, INT_MAX);
            costForNode[node1] = 0;  // Source distance = 0
            pq.push({0, node1});     // Initialize Dijkstra

            while (!pq.empty()) {
                  // Extract min-cost entry
                  int currCost = pq.top()[0];   // Current distance
                  int currNode = pq.top()[1];   // Current node
                  pq.pop();

                  // Pruning: skip if better path already found
                  if (currCost > costForNode[currNode]) {
                        continue;
                  }
                  
                  // Early termination: reached destination
                  if (currNode == node2) {
                        return currCost;
                  }
                  
                  // Relax all outgoing edges
                  for (auto& neighbor : adjList[currNode]) {
                        int neighborNode = neighbor.first;  // Next node
                        int cost = neighbor.second;         // Edge weight
                        int newCost = currCost + cost;      // Path through currNode

                        // Update if shorter path found
                        if (newCost < costForNode[neighborNode]) {
                              costForNode[neighborNode] = newCost;
                              pq.push({newCost, neighborNode});
                        }
                  }
            }

            return -1;  // No path exists to node2
      }
};
