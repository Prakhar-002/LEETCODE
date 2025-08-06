//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 973

//? ⌚ Time complexity ➺ O(k * log n) 👉🏻  n = len(points)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <queue>
#include <cmath>
using namespace std;

class Solution {
public:
      vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
            // Min heap: pair of (distance, point)
            priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> minHeap;

            for (auto& p : points) {
                  int x = p[0];
                  int y = p[1];
                  int dist = x * x + y * y;                   // Compute squared distance
                  minHeap.push({dist, x, y});                 // Push to minHeap
            }

            vector<vector<int>> res;

            while (k-- > 0) {
                  vector<int> top = minHeap.top();            // Get the closest point
                  minHeap.pop();                              // Remove from heap
                  res.push_back({top[1], top[2]});            // Store x and y only
            }

            return res;                                       // Return result
      }
};
