// ! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L2.2 Q3

// ? ⌚ Time complexity ➺ O(n log n) 👉🏻 n = len(nums)

// ? 🧺 Space complexity ➺ O(n)

import java.util.PriorityQueue;

class Solution {
      public boolean isPossible(int[] targets) {
            long totalSum = 0;
            for (int num : targets) {
                  totalSum += num; // Calculate total sum of target elements
            }

            // Create a max-heap using reverse order comparator
            PriorityQueue<Integer> maxHeap = new PriorityQueue<>((a, b) -> b - a);
            for (int num : targets) {
                  maxHeap.offer(num); // Add all elements to max-heap
            }

            while (true) {
                  int largest = maxHeap.poll(); // Extract largest element
                  totalSum -= largest; // Subtract largest element from total

                  // Base case: if largest or remaining sum is 1, possible to reconstruct
                  if (largest == 1 || totalSum == 1) {
                        return true;
                  }

                  // Failure conditions: largest less than remaining sum, zero sum or divisible
                  if (largest < totalSum || totalSum == 0 || largest % totalSum == 0) {
                        return false;
                  }

                  int remainder = (int) (largest % totalSum); // Calculate remainder

                  totalSum += remainder; // Add remainder back to total sum
                  maxHeap.offer(remainder); // Push remainder back into max-heap
            }
      }
}
