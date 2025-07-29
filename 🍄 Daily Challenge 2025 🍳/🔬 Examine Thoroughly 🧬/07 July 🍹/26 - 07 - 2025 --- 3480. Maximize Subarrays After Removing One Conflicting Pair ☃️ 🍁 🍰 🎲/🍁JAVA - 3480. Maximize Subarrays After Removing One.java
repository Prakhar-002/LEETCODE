//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3480

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {

      public long maxSubarrays(int n, int[][] conflictingPairs) {

            // Arrays to store the first and second smallest conflict indices for each
            // position
            int[] minConflict = new int[n + 1];
            int[] secondMinConflict = new int[n + 1];

            // Initialize both arrays to maximum integer value
            Arrays.fill(minConflict, Integer.MAX_VALUE);
            Arrays.fill(secondMinConflict, Integer.MAX_VALUE);

            // Process each pair to populate the smallest and second smallest conflicts
            for (int[] pair : conflictingPairs) {

                  int smallerIndex = Math.min(pair[0], pair[1]);
                  int largerIndex = Math.max(pair[0], pair[1]);

                  // Update the smallest conflict value for the smaller index
                  if (minConflict[smallerIndex] > largerIndex) {
                        secondMinConflict[smallerIndex] = minConflict[smallerIndex];
                        minConflict[smallerIndex] = largerIndex;
                  }
                  // Otherwise, update second smallest if necessary
                  else if (secondMinConflict[smallerIndex] > largerIndex) {
                        secondMinConflict[smallerIndex] = largerIndex;
                  }
            }

            long totalValidSubarrays = 0; // To store the total count of valid subarrays
            int minConflictIndex = n; // Pointer to track the index with minimum conflict
            int minSecondConflict = Integer.MAX_VALUE; // Minimum of second smallest conflicts
            long[] deletions = new long[n + 1]; // Tracks deletions at each position

            // Iterate backwards from n to 1
            for (int i = n; i >= 1; i--) {

                  // Update the current position with the lowest conflict
                  if (minConflict[minConflictIndex] > minConflict[i]) {
                        minSecondConflict = Math.min(minSecondConflict, minConflict[minConflictIndex]);
                        minConflictIndex = i;
                  } else {
                        minSecondConflict = Math.min(minSecondConflict, minConflict[i]);
                  }

                  // Add valid subarrays starting from this position
                  totalValidSubarrays += Math.min(minConflict[minConflictIndex], n + 1) - i;

                  // Track possible deletions to extend the subarrays
                  deletions[minConflictIndex] += Math
                              .min(Math.min(minSecondConflict, secondMinConflict[minConflictIndex]), n + 1)
                              - Math.min(minConflict[minConflictIndex], n + 1);
            }

            // Find the max deletion possible to extend subarrays
            long maxDeletion = 0;
            for (long val : deletions) {
                  maxDeletion = Math.max(maxDeletion, val);
            }

            // Final result is total subarrays + best possible deletions
            return totalValidSubarrays + maxDeletion;
      }
}
