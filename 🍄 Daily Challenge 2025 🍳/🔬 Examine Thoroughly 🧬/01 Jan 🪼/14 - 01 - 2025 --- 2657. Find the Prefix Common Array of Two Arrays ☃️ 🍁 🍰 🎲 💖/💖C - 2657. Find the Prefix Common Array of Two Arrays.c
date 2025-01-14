//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2657

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(A)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>
#include <stdlib.h>

int* findThePrefixCommonArray(int* A, int ASize, int* B, int BSize, int* returnSize) {
      // Use long long to handle bit shifts for large integers
      long long seenBits = 0;

      // Variable to count the number of common elements encountered so far
      int commonCount = 0;

      // Allocate memory for the result array
      int* result = (int*)malloc(ASize * sizeof(int));

      // Iterate through the arrays A and B simultaneously
      for (int i = 0; i < ASize; i++) {
            // Check if the current element in A has already been seen using bits
            if (seenBits & (1LL << (A[i] - 1))) {
                  commonCount++;
            }

            // Set the corresponding bit for the element in A
            seenBits |= (1LL << (A[i] - 1));

            // Check if the current element in B has already been seen using bits
            if (seenBits & (1LL << (B[i] - 1))) {
                  commonCount++;
            }

            // Set the corresponding bit for the element in B
            seenBits |= (1LL << (B[i] - 1));

            // Store the current count of common elements in the result array
            result[i] = commonCount;
      }

      // Set the return size to the size of the result array
      *returnSize = ASize;

      // Return the result array
      return result;
}

//!------------------------------------------------------------------------------------- 

//* Using Freq Array

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(A)

//? 🧺 Space complexity ➺ O(n)

#include <stdlib.h>

int* findThePrefixCommonArray(int* A, int ASize, int* B, int BSize, int* returnSize) {
      // Ensure the sizes of A and B are the same
      if (ASize != BSize) {
            *returnSize = 0;
            return NULL;
      }

      // Allocate memory for the frequency array and initialize to 0
      int* freq = (int*)calloc(ASize + 1, sizeof(int));

      // Allocate memory for the result array
      int* prefixCommon = (int*)malloc(ASize * sizeof(int));

      // Counter for common elements seen so far
      int permutations = 0;

      // Iterate through both arrays A and B
      for (int i = 0; i < ASize; i++) {
            // Increment frequency for the current element in A
            freq[A[i]]++;
            if (freq[A[i]] == 2) {
                  permutations++;
            }

            // Increment frequency for the current element in B
            freq[B[i]]++;
            if (freq[B[i]] == 2) {
                  permutations++;
            }

            // Store the current count in the result array
            prefixCommon[i] = permutations;
      }

      // Set the size of the result array
      *returnSize = ASize;

      // Free the allocated memory for the frequency array
      free(freq);

      return prefixCommon;
}
