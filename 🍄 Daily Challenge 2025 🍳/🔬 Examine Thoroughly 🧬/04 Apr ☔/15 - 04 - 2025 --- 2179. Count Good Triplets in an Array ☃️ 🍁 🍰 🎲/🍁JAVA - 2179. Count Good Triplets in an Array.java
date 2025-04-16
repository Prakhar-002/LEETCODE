//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2179

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public long goodTriplets(int[] nums1, int[] nums2) {
            int n = nums1.length;                              // Get the size of the input arrays
            long totalTriplets = 0L;                            // Final result to store count of good triplets

            int[] posInNums1 = new int[n];                      // Array to store the index of each number in nums1

            // Step 1: Build mapping from number to its index in nums1
            for (int i = 0; i < n; i++) {
                  posInNums1[nums1[i]] = i;                     // Store the index where each value appears in nums1
            }

            int[] transformed = new int[n];                     // Array to hold the transformed version of nums2

            // Step 2: Convert nums2 into transformed array using indices from nums1
            for (int i = 0; i < n; i++) {
                  transformed[i] = posInNums1[nums2[i]];        // Replace each value in nums2 with its index in nums1
            }

            List<Integer> sorted = new ArrayList<>();           // This will act as a sorted list of seen elements (from right to left)

            // Step 3: Traverse the transformed array from right to left
            for (int i = n - 1; i >= 0; i--) {
                  int current = transformed[i];                 // Current value in reversed transformed array

                  // Step 4: Find number of elements less than current in sorted list using binary search
                  int insertPos = Collections.binarySearch(sorted, current);

                  // If the element is not found, binarySearch returns (-insertionPoint - 1)
                  if (insertPos < 0) insertPos = -insertPos - 1;

                  int countSmaller = insertPos;                 // Number of elements in sorted[] that are < current
                  int countGreater = sorted.size() - countSmaller; // Elements greater than current are those after insertPos

                  // Step 5: Use the formula for counting good triplets
                  // (count of greater elements to the right) * (count of smaller elements to the left)
                  totalTriplets += 1L * countGreater * (current - countSmaller);

                  // Step 6: Insert current into sorted list at correct position to maintain order
                  sorted.add(insertPos, current);              // Keeps the list sorted
            }

            // Step 7: Return the final result
            return totalTriplets;
      }
}
