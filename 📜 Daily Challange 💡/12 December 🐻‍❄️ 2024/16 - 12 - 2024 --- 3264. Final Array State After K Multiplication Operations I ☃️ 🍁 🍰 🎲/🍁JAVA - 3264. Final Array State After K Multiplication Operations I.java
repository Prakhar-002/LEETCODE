//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3264

//? ⌚ Time complexity ➺ O(k log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      // Method to compute the final state of the array after performing k operations.
      public int[] getFinalState(int[] nums, int k, int multiplier) {
            // Create a PriorityQueue (min-heap) with a custom comparator.
            // The comparator prioritizes elements based on their values (nums[i]).
            // If two elements have the same value, they are sorted by their indices.
            PriorityQueue<int[]> pq = new PriorityQueue<>((a, b) -> {
                  if (a[0] != b[0]) {
                        return Integer.compare(a[0], b[0]); // Compare by value first.
                  }
                  return Integer.compare(a[1], b[1]); // If values are equal, compare by index.
            });

            // Add each element of the array to the priority queue as a pair {value, index}.
            for (int i = 0; i < nums.length; i++) {
                  pq.add(new int[] { nums[i], i });
            }

            // Perform `k` operations on the smallest element from the priority queue.
            while (k-- > 0) {
                  // Remove the smallest element from the priority queue.
                  int[] state = pq.poll();

                  // Multiply the smallest element's value by the multiplier.
                  int updatedValue = state[0] * multiplier;

                  // Add the updated element back into the priority queue with the new value.
                  pq.add(new int[] { updatedValue, state[1] });

                  // Update the original nums array at the corresponding index with the new value.
                  nums[state[1]] = updatedValue;
            }

            // Return the updated nums array as the final result.
            return nums;
      }
}

// !----------------------------------------------------------------------

// ? ⌚ Time complexity ➺ O(n * k) 👉🏻 n = len(nums)

// ? 🧺 Space complexity ➺ O(n)

class Solution {
      public int[] getFinalState(int[] nums, int k, int multiplier) {
            // Iterate k times, transforming the smallest element in the array
            while (k-- > 0) {
                  int minIndex = 0; // Index of the smallest element in the array

                  // Find the index of the smallest element in the array
                  for (int i = 1; i < nums.length; i++) {
                        if (nums[i] < nums[minIndex]) {
                              minIndex = i; // Update minIndex if a smaller element is found
                        }
                  }

                  // Multiply the smallest element by the multiplier
                  nums[minIndex] = nums[minIndex] * multiplier;
            }

            // Return the modified array
            return nums;
      }
}
