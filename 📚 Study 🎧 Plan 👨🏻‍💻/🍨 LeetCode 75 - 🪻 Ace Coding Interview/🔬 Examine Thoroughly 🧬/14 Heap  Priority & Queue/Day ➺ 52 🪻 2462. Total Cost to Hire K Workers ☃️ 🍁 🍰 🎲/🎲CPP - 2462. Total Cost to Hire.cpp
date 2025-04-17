//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2462

//? ⌚ Time complexity ➺ O(n log n + k) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      long long totalCost(vector<int>& costs, int k, int candidates) {
            int n = costs.size();

            // Min heaps for left and right selections
            priority_queue<int, vector<int>, greater<int>> leftHeap;
            priority_queue<int, vector<int>, greater<int>> rightHeap;

            long long totalCost = 0; // To store the total minimum cost

            // Fill leftHeap with the first `candidates` elements
            for (int i = 0; i < candidates && i < n; i++) {
                  leftHeap.push(costs[i]);
            }

            // Fill rightHeap with the last `candidates` elements, avoiding overlap
            for (int i = max(candidates, n - candidates); i < n; i++) {
                  rightHeap.push(costs[i]);
            }

            int left = candidates;               // Index for next left candidate
            int right = n - candidates - 1;      // Index for next right candidate

            // Perform k selections
            for (int i = 0; i < k; i++) {

                  // If rightHeap is empty or leftHeap has a smaller/equal value
                  if (rightHeap.empty() || (!leftHeap.empty() && leftHeap.top() <= rightHeap.top())) {
                        totalCost += leftHeap.top(); // Choose from left
                        leftHeap.pop();

                        // Refill leftHeap if more left candidates are available
                        if (left <= right) {
                              leftHeap.push(costs[left++]);
                        }

                  } else {
                        totalCost += rightHeap.top(); // Choose from right
                        rightHeap.pop();

                        // Refill rightHeap if more right candidates are available
                        if (right >= left) {
                              rightHeap.push(costs[right--]);
                        }
                  }
            }

            return totalCost; // Return the total minimum cost
      }
};
