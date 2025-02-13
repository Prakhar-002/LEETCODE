//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3066

//? ⌚ Time complexity ➺ O(n Log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

class Solution {
public:
      int minOperations(vector<int>& nums, int k) {
            // Using a min-heap (priority queue) to always process the smallest elements first
            priority_queue<long, vector<long>, greater<long>> pq;

            // Adding all elements of nums array to the priority queue
            for (int n : nums) {
                  pq.push(n); // Insert elements into the heap
            }

            int operations = 0; // Counter for the number of operations

            // Continue merging elements until the smallest element in the heap is at least k
            while (pq.top() < k) {
                  long x = pq.top(); pq.pop(); // Remove the smallest element
                  long y = pq.top(); pq.pop(); // Remove the second smallest element

                  // Merge the two elements using the given formula
                  pq.push(min(x, y) * 2 + max(x, y));

                  operations++; // Increment operation count
            }

            return operations; // Return the total number of operations
      }
};
