//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 215

//? ⌚ Time complexity ➺ O(k Log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.PriorityQueue;

class Solution {
      public int findKthLargest(int[] nums, int k) {
            // Create a max heap (priority queue with custom comparator for descending
            // order)
            PriorityQueue<Integer> pq = new PriorityQueue<>((a, b) -> b - a);

            // Add all elements to the max heap
            for (int n : nums) {
                  pq.add(n);
            }

            // Remove k-1 largest elements to reach the k-th largest
            while (--k > 0) {
                  pq.poll();
            }

            // Return the k-th largest element
            return pq.peek();
      }
}