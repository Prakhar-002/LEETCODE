//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2208

//? ⌚ Time complexity ➺ O(n Log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.PriorityQueue;

class Solution {
      public int halveArray(int[] nums) {
            // Max-Heap PriorityQueue to hold double values (largest first)
            PriorityQueue<Double> pq = new PriorityQueue<>( (a, b) -> Double.compare(b, a) );

            // Calculate the total sum of the array
            double totalSum = 0;
            for (int n : nums) {
                  pq.add((double) n);  // Convert int to double and add to the priority queue
                  totalSum += n;  // Add the current number to the total sum
            }

            int operations = 0;  // Counter to track the number of operations
            double halfSum = totalSum / 2;  // Target sum we need to reach

            // Keep halving the largest elements until the total sum is reduced to half
            while (totalSum > halfSum) {
                  double largest = pq.poll();  // Remove the largest element from the heap
                  totalSum -= largest;  // Subtract the largest element from the total sum

                  double reduced = largest / 2;  // Halve the largest element
                  totalSum += reduced;  // Add the reduced element back to the total sum

                  pq.add(reduced);  // Insert the halved element back into the priority queue

                  operations++;  // Increment the operation counter
            }

            return operations;  // Return the number of operations performed
      }
}
