//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 973

//? ⌚ Time complexity ➺ O(k * log n) 👉🏻  n = len(points)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public int[][] kClosest(int[][] points, int k) {
            PriorityQueue<int[]> minHeap = new PriorityQueue<>(
                        (a, b) -> Integer.compare(a[0], b[0]) // Compare by distance
            );

            for (int[] p : points) {
                  int x = p[0];
                  int y = p[1];
                  int dist = x * x + y * y; // Squared distance from origin
                  minHeap.add(new int[] { dist, x, y }); // Store as array [dist, x, y]
            }

            int[][] res = new int[k][2]; // Output array

            for (int i = 0; i < k; i++) {
                  int[] closest = minHeap.poll(); // Get the point with min distance
                  res[i][0] = closest[1]; // Store x
                  res[i][1] = closest[2]; // Store y
            }

            return res; // Return result
      }
}
