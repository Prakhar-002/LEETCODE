//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L2.2 Q3

// ? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
      bool isPossible(vector<int>& targets) {
            long long totalSum = 0;
            for (int num : targets) {
                  totalSum += num;  // Calculate total sum of target elements
            }

            // Max heap declaration with comparator
            priority_queue<int> maxHeap(targets.begin(), targets.end());

            while (true) {
                  int largest = maxHeap.top(); 
                  maxHeap.pop();                  // Extract largest element
                  totalSum -= largest;            // Subtract largest from total

                  // Base case: largest or remaining sum == 1 -> success
                  if (largest == 1 || totalSum == 1) {
                        return true;
                  }

                  // Fail conditions
                  if (largest < totalSum || totalSum == 0 || largest % totalSum == 0) {
                        return false;
                  }

                  int remainder = largest % totalSum;  // Remainder after division

                  totalSum += remainder;          // Add remainder back
                  maxHeap.push(remainder);       // Push remainder into heap
            }
      }
};
