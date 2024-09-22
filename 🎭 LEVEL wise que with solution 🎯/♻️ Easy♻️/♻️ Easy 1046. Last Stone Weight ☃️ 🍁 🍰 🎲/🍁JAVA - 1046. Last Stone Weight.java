//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1046

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(Stones)

//? 🧺 Space complexity ➺ O(n)

import java.util.PriorityQueue;
import java.util.Collections;

class Solution {
      public int lastStoneWeight(int[] stones) {
            // Use a max-heap by reversing the natural order of the PriorityQueue
            PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());

            // Add all stones to the priority queue
            for (int stone : stones) {
                  pq.add(stone);
            }

            // Process until only one or zero stones are left
            while (pq.size() > 1) {
                  // Remove the two largest stones
                  int y = pq.remove();
                  int x = pq.remove();

                  // If they are not the same, add the difference back to the heap
                  if (y != x) {
                        pq.add(y - x);
                  }
            }

            // Return the last stone weight, or 0 if no stones are left
            return pq.isEmpty() ? 0 : pq.peek();
      }
}
