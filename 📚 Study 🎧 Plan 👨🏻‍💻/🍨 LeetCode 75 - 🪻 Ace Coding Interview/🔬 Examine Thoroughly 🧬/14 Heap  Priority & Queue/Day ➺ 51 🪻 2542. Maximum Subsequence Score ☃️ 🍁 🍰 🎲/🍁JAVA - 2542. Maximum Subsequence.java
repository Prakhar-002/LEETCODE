// ! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2542

// ? ⌚ Time complexity ➺ O(n log n) 👉🏻 n = len(nums1)

// ? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public long maxScore(int[] nums1, int[] nums2, int k) {
            int n = nums1.length;

            // Step 1: Combine nums1 and nums2 into pairs
            // Each pair: (nums2[i], nums1[i])
            // nums2 value acts as potential minimum multiplier
            // nums1 value contributes to sum
            int[][] pairs = new int[n][2];
            for (int i = 0; i < n; i++) {
                  pairs[i][0] = nums2[i]; // nums2 element (for minimum multiplier)
                  pairs[i][1] = nums1[i]; // nums1 element (for sum)
            }

            // Step 2: Sort pairs by nums2 value in descending order
            // This way, when we select the first k pairs, we get the largest possible
            // minimum nums2 value
            Arrays.sort(pairs, (a, b) -> Integer.compare(b[0], a[0]));

            // Step 3: Use a min-heap to manage selected nums1 values
            // We want to maintain exactly k selected elements, and maximize their sum
            PriorityQueue<Integer> minHeap = new PriorityQueue<>();

            // Current sum of selected nums1 values (up to k elements)
            long curSum = 0;

            // Maximum score found so far
            long maxScore = 0;

            // Step 4: Process each pair
            for (int i = 0; i < n; i++) {
                  int curMinNum2 = pairs[i][0]; // Current nums2 value (acts as multiplier)
                  int curNum1 = pairs[i][1]; // Current nums1 value (contributes to sum)

                  // Add current nums1 value to sum and heap
                  minHeap.add(curNum1);
                  curSum += curNum1;

                  // If more than k elements are selected, remove the smallest nums1 value to keep
                  // exactly k
                  if (minHeap.size() > k) {
                        curSum -= minHeap.poll(); // Remove smallest nums1 value from sum
                  }

                  // Once exactly k elements are selected, calculate score
                  if (minHeap.size() == k) {
                        // Score formula: (sum of selected nums1 values) * (minimum selected nums2
                        // value)
                        // Since pairs are sorted, curMinNum2 is the smallest nums2 in the current
                        // selection
                        maxScore = Math.max(maxScore, curSum * curMinNum2);
                  }
            }

            return maxScore;
      }
}
