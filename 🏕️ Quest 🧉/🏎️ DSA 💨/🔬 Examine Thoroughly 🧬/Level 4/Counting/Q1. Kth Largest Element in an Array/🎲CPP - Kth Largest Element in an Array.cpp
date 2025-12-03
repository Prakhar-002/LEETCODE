//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 215

//? ⌚ Time complexity ➺ O(k Log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <queue>
#include <vector>
#include <functional> 

using namespace std;

class Solution {
public:
      int findKthLargest(vector<int>& nums, int k) {
            // Create a max heap using a priority queue
            priority_queue<int> pq;

            // Insert all elements into the max heap
            for (int n : nums) {
                  pq.push(n);
            }

            // Remove k-1 elements from the max heap
            while (--k > 0) {
                  pq.pop();
            }

            // Return the k-th largest element
            return pq.top();
      }
};