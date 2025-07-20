//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2163

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

public class Solution {
      public long minimumDifference(int[] nums) {
            int totalLen = nums.length;
            int n = totalLen / 3;

            // Store minimum sum of first 2n numbers choosing n smallest from first 2n
            long[] leftSum = new long[n + 1];

            // Max heap to keep smallest n elements (invert logic)
            PriorityQueue<Integer> maxHeap = new PriorityQueue<>(Collections.reverseOrder());
            long totalLeft = 0;

            // Add first n elements to the max heap
            for (int i = 0; i < n; i++) {
                  maxHeap.offer(nums[i]);
                  totalLeft += nums[i];
            }

            // Initial prefix sum for first n elements
            leftSum[0] = totalLeft;

            // Process next n elements (from index n to 2n - 1)
            for (int i = n; i < 2 * n; i++) {
                  totalLeft += nums[i];
                  maxHeap.offer(nums[i]);
                  totalLeft -= maxHeap.poll(); // Remove largest to keep smallest n
                  leftSum[i - n + 1] = totalLeft;
            }

            // Right side: maintain minimum sum of last n elements
            PriorityQueue<Integer> minHeap = new PriorityQueue<>();
            long totalRight = 0;

            // Add last n elements to min heap
            for (int i = 2 * n; i < totalLen; i++) {
                  minHeap.offer(nums[i]);
                  totalRight += nums[i];
            }

            // Initialize result as difference between smallest leftSum and totalRight
            long result = leftSum[n] - totalRight;

            // Move backwards through the middle n elements
            for (int i = 2 * n - 1; i >= n; i--) {
                  totalRight += nums[i];
                  minHeap.offer(nums[i]);
                  totalRight -= minHeap.poll(); // Remove smallest to keep largest n
                  result = Math.min(result, leftSum[i - n] - totalRight);
            }

            return result;
      }
}
