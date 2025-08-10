//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 295

//? ⌚ Time complexity ➺ O(m * log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(m)

import java.util.PriorityQueue;
import java.util.Queue;

public class MedianFinder {

      // Max-heap (stores the smaller half of numbers)
      private Queue<Integer> smallHeap;

      // Min-heap (stores the larger half of numbers)
      private Queue<Integer> largeHeap;

      public MedianFinder() {
            // Max-heap implemented by reversing comparator
            smallHeap = new PriorityQueue<>((a, b) -> b - a);
            // Min-heap with normal comparator
            largeHeap = new PriorityQueue<>((a, b) -> a - b);
      }

      // Adds a number into the data structure
      public void addNum(int num) {
            // Step 1: Add to smallHeap first (lower half)
            smallHeap.add(num);

            // Step 2: Ensure ordering property (max of smallHeap <= min of largeHeap)
            // Or size balance: both heaps' sizes differ by at most 1
            if (
                  smallHeap.size() - largeHeap.size() > 1 ||
                  (!largeHeap.isEmpty() && smallHeap.peek() > largeHeap.peek())
            ) {
                  // Move the largest from smallHeap to largeHeap
                  largeHeap.add(smallHeap.poll());
            }

            // Step 3: If largeHeap gets too big, balance by moving one to smallHeap
            if (largeHeap.size() - smallHeap.size() > 1) {
                  smallHeap.add(largeHeap.poll());
            }
      }

      // Retrieves the median value
      public double findMedian() {
            // If both heaps are equal size, median is average of both tops
            if (smallHeap.size() == largeHeap.size()) {
                  return (double) (largeHeap.peek() + smallHeap.peek()) / 2;
            } 
            // If one heap has more elements, median is its top
            else if (smallHeap.size() > largeHeap.size()) {
                  return (double) smallHeap.peek();
            } 
            else {
                  return (double) largeHeap.peek();
            }
      }
}
