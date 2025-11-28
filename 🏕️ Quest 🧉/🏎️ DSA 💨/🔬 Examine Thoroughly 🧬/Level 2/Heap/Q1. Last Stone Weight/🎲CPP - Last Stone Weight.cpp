//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L2.2 Q1

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <queue>

class Solution {
public:
      int lastStoneWeight(std::vector<int>& stones) {
            // Max-heap using priority_queue by default
            std::priority_queue<int> maxHeap;

            // Add all stones
            for (int stone : stones) {
                  maxHeap.push(stone);
            }

            // Smash stones until zero or one stone left
            while (maxHeap.size() > 1) {
                  int first = maxHeap.top();
                  maxHeap.pop();

                  int second = maxHeap.top();
                  maxHeap.pop();

                  // Push difference if any
                  if (first != second) {
                        maxHeap.push(first - second);
                  }
            }

            // Return last stone or 0 if empty
            return maxHeap.empty() ? 0 : maxHeap.top();
      }
};
