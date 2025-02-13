//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1962

//? ⌚ Time complexity ➺ O(n Log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <iostream>
#include <queue>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
      int minStoneSum(vector<int>& piles, int k) {
            // Max-Heap using priority_queue to store piles in descending order
            priority_queue<int> pq;

            // Add all the piles to the priority queue
            for (int pile : piles) {
                  pq.push(pile);
            }

            // Perform the operation k times: halving the largest pile
            while (k-- > 0) {
                  // Pop the largest pile, halve it, and add it back to the queue
                  int largest = pq.top();
                  pq.pop();
                  pq.push(ceil(largest / 2.0));  // Use ceil to round up after halving
            }

            int stones = 0;  // Variable to store the remaining stones

            // Sum the remaining stones in the piles
            while (!pq.empty()) {
                  stones += pq.top();  // Add the largest pile to the total sum
                  pq.pop();  // Remove the largest pile from the heap
            }

            return stones;  // Return the total number of remaining stones
      }
};
