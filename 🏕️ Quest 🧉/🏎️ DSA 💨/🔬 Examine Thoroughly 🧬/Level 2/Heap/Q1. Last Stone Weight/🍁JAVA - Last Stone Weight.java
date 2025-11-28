//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L2.2 Q1

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.PriorityQueue;
import java.util.Collections;

public class Solution {
      public int lastStoneWeight(int[] stones) {
            // Use a max-heap by reversing natural order with Collections.reverseOrder()
            PriorityQueue<Integer> maxHeap = new PriorityQueue<>(Collections.reverseOrder());

            // Add all stones to the max-heap
            for (int stone : stones) {
                  maxHeap.add(stone);
            }

            // Simulate smashing stones until at most one stone remains
            while (maxHeap.size() > 1) {
                  int first = maxHeap.poll(); // Heaviest stone
                  int second = maxHeap.poll(); // Second heaviest stone

                  // If stones differ, push the difference back into heap
                  if (first != second) {
                        maxHeap.add(first - second);
                  }
            }

            // Return last stone weight or 0 if none left
            return maxHeap.isEmpty() ? 0 : maxHeap.poll();
      }
}
