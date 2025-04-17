//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2462

//? ⌚ Time complexity ➺ O(n + k) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {
      public long totalCost(int[] costs, int k, int candidates) {
            // Total number of workers
            int n = costs.length;

            // Min-heap for the left candidates
            PriorityQueue<Integer> leftHeap = new PriorityQueue<>();

            // Min-heap for the right candidates
            PriorityQueue<Integer> rightHeap = new PriorityQueue<>();

            // Variable to store the total hiring cost
            long totalCost = 0;

            // Fill the left heap with the first 'candidates' number of elements
            for (int i = 0; i < candidates; i++) {
                  leftHeap.add(costs[i]);
            }

            // Fill the right heap starting from max(candidates, n - candidates) to end
            // This avoids overlapping if candidates * 2 > n
            for (int i = Math.max(candidates, n - candidates); i < n; i++) {
                  rightHeap.add(costs[i]);
            }

            // Pointers to track the next elements to be pushed into heaps
            int left = candidates; // next index after initial leftHeap
            int right = n - candidates - 1; // next index before initial rightHeap

            // Perform k hiring operations
            for (int i = 0; i < k; i++) {

                  // If rightHeap is empty OR leftHeap is not empty and has the cheaper cost
                  if (rightHeap.isEmpty() || (!leftHeap.isEmpty() && leftHeap.peek() <= rightHeap.peek())) {

                        // Hire from the leftHeap (cheaper or only option available)
                        totalCost += leftHeap.poll();

                        // If there are still unprocessed candidates on the left
                        if (left <= right) {
                              leftHeap.add(costs[left++]); // Add next left candidate to heap
                        }
                  } else {
                        // Otherwise, hire from the rightHeap
                        totalCost += rightHeap.poll();

                        // If there are still unprocessed candidates on the right
                        if (right >= left) {
                              rightHeap.add(costs[right--]); // Add next right candidate to heap
                        }
                  }
            }

            // Return the total cost of hiring k workers
            return totalCost;
      }
}
