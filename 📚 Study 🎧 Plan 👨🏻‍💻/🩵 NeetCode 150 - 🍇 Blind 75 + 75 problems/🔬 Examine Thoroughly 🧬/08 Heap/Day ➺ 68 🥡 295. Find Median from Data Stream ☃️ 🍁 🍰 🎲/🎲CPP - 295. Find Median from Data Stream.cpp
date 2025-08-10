//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 295

//? ⌚ Time complexity ➺ O(m * log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(m)

#include <queue>
#include <vector>

class MedianFinder {
private:
      // Max-heap for smaller half of numbers
      std::priority_queue<int> smallHeap;
      // Min-heap for larger half of numbers
      std::priority_queue<int, std::vector<int>, std::greater<int>> largeHeap;

public:
      MedianFinder() {}

      void addNum(int num) {
            // Step 1: Add to max-heap first
            smallHeap.push(num);

            // Step 2: Order condition: largest in smallHeap <= smallest in largeHeap
            if (!largeHeap.empty() && smallHeap.top() > largeHeap.top()) {
                  largeHeap.push(smallHeap.top());
                  smallHeap.pop();
            }

            // Step 3: Balance sizes
            if (smallHeap.size() > largeHeap.size() + 1) {
                  largeHeap.push(smallHeap.top());
                  smallHeap.pop();
            } else if (largeHeap.size() > smallHeap.size() + 1) {
                  smallHeap.push(largeHeap.top());
                  largeHeap.pop();
            }
      }

      double findMedian() {
            // Equal sizes → average of tops
            if (smallHeap.size() == largeHeap.size()) {
                  return (smallHeap.top() + largeHeap.top()) / 2.0;
            }
            // One heap bigger → its top is median
            else if (smallHeap.size() > largeHeap.size()) {
                  return smallHeap.top();
            } else {
                  return largeHeap.top();
            }
      }
};
