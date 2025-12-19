//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L7.3 Q2

//? ⌚ Time complexity ➺ O(q log q + n) 👉🏻  q = len(queries)

//? 🧺 Space complexity ➺ O(q)

#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
      vector<int> leftmostBuildingQueries(vector<int>& heights, vector<vector<int>>& queries) {
            /**
             * Find leftmost building where Bob can jump from Alice's building.
             * Online processing with min-heap for deferred queries.
             */
            int n = heights.size();
            int q = queries.size();
            
            // Store results (-1 if impossible)
            vector<int> result(q, -1);  
            
            // Deferred queries: qs[bob] = list of (alice_height, query_index)
            vector<vector<pair<int, int>>> qs(n);
            
            // Initial query processing
            for (int index = 0; index < q; index++) {
                  int alice = queries[index][0];
                  int bob = queries[index][1];
                  
                  // Normalize: alice <= bob
                  if (alice > bob) {
                        swap(alice, bob);
                  }
                  
                  // Case 1: Direct solution
                  if (alice == bob || heights[alice] < heights[bob]) {
                        result[index] = bob;
                  } else {
                        // Case 2: Deferred to heap at bob's position
                        qs[bob].emplace_back(heights[alice], index);
                  }
            }
            
            // Min-heap: (alice_height, query_index)
            priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> min_heap;
            
            // Process buildings left to right
            for (int index = 0; index < n; index++) {
                  int height = heights[index];
                  
                  // Add deferred queries for this building (bob == index)
                  for (auto& q : qs[index]) {
                        min_heap.push(q);  // (alice_height, query_index)
                  }
                  
                  // Answer satisfied queries
                  while (!min_heap.empty() && min_heap.top().first < height) {
                        auto [alice_height, query_index] = min_heap.top();
                        min_heap.pop();
                        result[query_index] = index;  // Current building works
                  }
            }
            
            return result;
      }
};
