//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2570

// ? ⌚ Time complexity ➺ O(n + m)   👉🏻  n = len(nums1) 

// ? 🧺 Space complexity ➺ O(n + m)  👉🏻 m = len(nums2)

#include <stdio.h>
#include <stdlib.h>

// Function to merge two arrays of (id, value) pairs
int** mergeArrays(int** nums1, int nums1Size, int* nums1ColSize,
                  int** nums2, int nums2Size, int* nums2ColSize,
                  int* returnSize, int** returnColumnSizes) {
      // Allocate maximum possible space for result array (size at most nums1Size + nums2Size)
      int** mergedArray = (int**)malloc((nums1Size + nums2Size) * sizeof(int*));

      // Allocate returnColumnSizes array (each row has exactly 2 columns)
      *returnColumnSizes = (int*)malloc((nums1Size + nums2Size) * sizeof(int));
      for (int i = 0; i < nums1Size + nums2Size; i++) {
            (*returnColumnSizes)[i] = 2;  // Each row contains 2 values (id, value)
      }

      // Two pointers for merging process
      int i = 0, j = 0, index = 0;

      // Merge nums1 and nums2
      while (i < nums1Size && j < nums2Size) {
            if (nums1[i][0] == nums2[j][0]) {
                  // Same ID - combine the values
                  mergedArray[index] = (int*)malloc(2 * sizeof(int));
                  mergedArray[index][0] = nums1[i][0];  // ID
                  mergedArray[index][1] = nums1[i][1] + nums2[j][1];  // Sum of values
                  i++;
                  j++;
            } else if (nums1[i][0] < nums2[j][0]) {
                  // nums1 ID is smaller - take nums1 entry directly
                  mergedArray[index] = (int*)malloc(2 * sizeof(int));
                  mergedArray[index][0] = nums1[i][0];
                  mergedArray[index][1] = nums1[i][1];
                  i++;
            } else {
                  // nums2 ID is smaller - take nums2 entry directly
                  mergedArray[index] = (int*)malloc(2 * sizeof(int));
                  mergedArray[index][0] = nums2[j][0];
                  mergedArray[index][1] = nums2[j][1];
                  j++;
            }
            index++;
      }

      // Add remaining elements from nums1
      while (i < nums1Size) {
            mergedArray[index] = (int*)malloc(2 * sizeof(int));
            mergedArray[index][0] = nums1[i][0];
            mergedArray[index][1] = nums1[i][1];
            i++;
            index++;
      }

      // Add remaining elements from nums2
      while (j < nums2Size) {
            mergedArray[index] = (int*)malloc(2 * sizeof(int));
            mergedArray[index][0] = nums2[j][0];
            mergedArray[index][1] = nums2[j][1];
            j++;
            index++;
      }

      // Final size of merged array
      *returnSize = index;

      return mergedArray;
}
