//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1962

//? ⌚ Time complexity ➺ O(n Log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.PriorityQueue;

class Solution {
      public int minStoneSum(int[] piles, int k) {
            // Create a max-heap using PriorityQueue with a custom comparator
            PriorityQueue<Integer> pq = new PriorityQueue<>((a, b) -> b - a);

            // Add all the piles to the priority queue (max-heap)
            for (int pile : piles) {
                  pq.add(pile);
            }

            // Perform the operation k times: halving the largest pile
            while (k-- > 0) {
                  // Poll the largest pile, halve it, and add it back to the queue
                  pq.add((int) Math.ceil(pq.poll() / 2.0)); // Math.ceil to round up after halving
            }

            int stones = 0; // Initialize variable to store the sum of remaining stones

            // Sum the remaining stones in the piles
            while (!pq.isEmpty()) {
                  stones += pq.poll(); // Poll the largest pile and add it to the total sum
            }

            return stones; // Return the total number of remaining stones
      }
}
