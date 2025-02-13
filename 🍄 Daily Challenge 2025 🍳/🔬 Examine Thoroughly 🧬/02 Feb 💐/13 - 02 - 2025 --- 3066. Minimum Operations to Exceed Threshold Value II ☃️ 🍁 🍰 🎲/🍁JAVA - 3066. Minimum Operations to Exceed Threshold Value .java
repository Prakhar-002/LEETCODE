//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3066

//? ⌚ Time complexity ➺ O(n Log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.PriorityQueue;

class Solution {
      public int minOperations(int[] nums, int k) {
            // Using a priority queue (min-heap) to always process the smallest elements first
            PriorityQueue<Long> pq = new PriorityQueue<Long>();

            // Adding all elements of nums array to the priority queue
            for (int n : nums) {
                  pq.add((long) n); // Convert to long to handle large values
            }

            int operations = 0; // Counter for the number of operations

            // Continue merging elements until the smallest element in the heap is at least k
            while (pq.peek() < k) {
                  long x = pq.remove(); // Remove the smallest element
                  long y = pq.remove(); // Remove the second smallest element

                  // Merge the two elements using the given formula
                  pq.add(Math.min(x, y) * 2 + Math.max(x, y));

                  operations++; // Increment operation count
            }

            return operations; // Return the total number of operations
      }
}
