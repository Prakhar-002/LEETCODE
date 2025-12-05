//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3623

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public int countTrapezoids(int[][] points) {
            // Count points by their y-coordinate (horizontal levels)
            Map<Integer, Integer> pointNum = new HashMap<>();

            // Group points by y-coordinate (x-coordinates irrelevant for horizontal
            // trapezoids)
            for (int[] point : points) {
                  int y = point[1];
                  pointNum.put(y, pointNum.getOrDefault(y, 0) + 1);
            }

            final int MOD = 1000000007;
            long ans = 0; // Total number of trapezoids
            long totalSum = 0; // Running sum of edges from previous levels

            // Process each horizontal level
            for (int pNum : pointNum.values()) {
                  // Edges at this level = C(pNum, 2) = p*(p-1)/2
                  long edge = (long) pNum * (pNum - 1) / 2;

                  // Current level edges × all previous edges = trapezoids formed
                  ans = (ans + edge * totalSum) % MOD;

                  // Accumulate current edges for future levels
                  totalSum = (totalSum + edge) % MOD;
            }

            return (int) ans;
      }
}
