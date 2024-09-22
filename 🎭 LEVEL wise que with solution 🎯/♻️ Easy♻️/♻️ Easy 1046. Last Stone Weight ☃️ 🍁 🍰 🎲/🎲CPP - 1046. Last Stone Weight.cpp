//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1046

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(Stones)

//? 🧺 Space complexity ➺ O(n)

#include <queue>
#include <vector>
using namespace std;

class Solution {
public:
      int lastStoneWeight(vector<int>& stones) {
            // Use a max-heap priority queue
            priority_queue<int> pq;

            // Add all stones to the priority queue
            for (int stone : stones) {
                  pq.push(stone);
            }

            // Process until only one or zero stones are left
            while (pq.size() > 1) {
                  // Remove the two largest stones
                  int y = pq.top();
                  pq.pop();
                  int x = pq.top();
                  pq.pop();

                  // If they are not the same, add the difference back to the heap
                  if (y != x) {
                        pq.push(y - x);
                  }
            }

            // Return the last stone weight, or 0 if no stones are left
            return pq.empty() ? 0 : pq.top();
      }
};
