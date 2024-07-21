//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 2392

//? ⌚ Time complexity -> O(K ^ 2) 👉 Given 

//? 🧺 Space complexity -> O(K ^ 2) 👉 Making output Matrix

// https://github.com/Prakhar-002/LEETCODE

// ⌚ Time complexity ->  O(K ^ 2) -> Given 

//  Space complexity -> O(K ^ 2) -> Making output Matrix

#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
      vector<vector<int>> buildMatrix(int k, vector<vector<int>>& rowConditions, vector<vector<int>>& colConditions) {
            // get the actual order of row and column for value 1 to k
            vector<int> rowOrder = topologicalSort(rowConditions, k);
            vector<int> colOrder = topologicalSort(colConditions, k);

            // if we got an empty order then we got a cycle
            if (rowOrder.empty() || colOrder.empty()) {
                  // so return empty array as per que
                  return vector<vector<int>>();
            }

            // make the hashMap for row order and column order
            // for less complexity to find the exact position
            // map number to its index
            unordered_map<int, int> rowOrderMap;
            for (int i = 0; i < rowOrder.size(); i++) {
                  rowOrderMap[rowOrder[i]] = i;
            }

            unordered_map<int, int> colOrderMap;
            for (int i = 0; i < colOrder.size(); i++) {
                  colOrderMap[colOrder[i]] = i;
            }

            vector<vector<int>> matrix(k, vector<int>(k, 0));

            for (int num = 1; num <= k; num++) {
                  // find the exact position of our number
                  int row = rowOrderMap[num];
                  int col = colOrderMap[num];
                  // assign it in our matrix
                  matrix[row][col] = num;
            }

            return matrix;
      }

private:
      bool dfs(int src, unordered_map<int, vector<int>>& adjacency, unordered_set<int>& visit, unordered_set<int>& path, vector<int>& order) {
            // if src is already in our path return false
            // cause this will make cycle on our graph
            if (path.find(src) != path.end()) {
                  return false;
            }

            // if we already visited our src return false
            if (visit.find(src) != visit.end()) {
                  return true;
            }

            // we did not visit our src till now
            // add to visit and path
            visit.insert(src);
            path.insert(src);

            // call dfs for every Neighbor of our source node
            for (int neighbor : adjacency[src]) {
                  // calling dfs and if we got false somewhere return false
                  if (!dfs(neighbor, adjacency, visit, path, order)) {
                        return false;
                  }
            }

            // remove src from path cause we backward now
            path.erase(src);
            // append in our order
            order.push_back(src);

            return true;
      }

      vector<int> topologicalSort(vector<vector<int>>& edges, int k) {
            // first make adjacency list for edges
            unordered_map<int, vector<int>> adjacency;
            for (const auto& edge : edges) {
                  int src = edge[0];
                  int dest = edge[1];
                  // in the src append the dest
                  // make a hashmap for src : every dest(all Neighbor of src)
                  adjacency[src].push_back(dest);
            }

            // make two HashSet
            unordered_set<int> visit;
            unordered_set<int> path;

            // array that will tells us the actual position
            // where we can put our k elem in rowWise and colWise
            vector<int> order;

            // we will run dfs for every src(for whole graph) we have
            for (int src = 1; src <= k; src++) {
                  // run dfs for every val 1 to k
                  // if we got invalid condition like cycle
                  // we will return empty list as per que description
                  if (!dfs(src, adjacency, visit, path, order)) {
                        return vector<int>();
                  }
            }

            // if everything is okay then return the rev of our order
            reverse(order.begin(), order.end());
            return order;
      }
};