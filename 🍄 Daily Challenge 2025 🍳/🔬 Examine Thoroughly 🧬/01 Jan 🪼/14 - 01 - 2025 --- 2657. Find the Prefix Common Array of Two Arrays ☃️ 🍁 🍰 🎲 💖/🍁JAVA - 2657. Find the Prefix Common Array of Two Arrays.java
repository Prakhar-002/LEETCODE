//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2657

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(A)

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {
      public int[] findThePrefixCommonArray(int[] A, int[] B) {
            // Use long to avoid overflow issues for bit shifting
            long seenBits = 0;

            // Variable to count the number of common elements encountered so far
            int commonCount = 0;

            // Array to store the prefix common counts
            int[] prefixCommon = new int[A.length];

            // Iterate through the arrays A and B simultaneously
            for (int i = 0; i < A.length; i++) {
                  // Check if the current element in A has already been seen using bits
                  if ((seenBits & (1L << (A[i] - 1))) != 0) {
                        commonCount++;
                  }

                  // Set the corresponding bit for the element in A
                  seenBits |= (1L << (A[i] - 1));

                  // Check if the current element in B has already been seen using bits
                  if ((seenBits & (1L << (B[i] - 1))) != 0) {
                        commonCount++;
                  }

                  // Set the corresponding bit for the element in B
                  seenBits |= (1L << (B[i] - 1));

                  // Store the current count of common elements in the prefixCommon array
                  prefixCommon[i] = commonCount;
            }

            // Return the final array of prefix common counts
            return prefixCommon;
      }
}

// !-------------------------------------------------------------------------------------

// * Using HashSet

// ? ⌚ Time complexity ➺ O(n) 👉🏻 n = len(A)

// ? 🧺 Space complexity ➺ O(n)

class Solution {
      public int[] findThePrefixCommonArray(int[] A, int[] B) {
            // Determine the size of the input arrays
            int n = A.length;

            // Set to keep track of elements that have been seen
            Set<Integer> seenElements = new HashSet<>();

            // Variable to count the number of common elements encountered so far
            int commonCount = 0;

            // Array to store the prefix common counts
            int[] prefixCommon = new int[n];

            // Iterate through the arrays A and B simultaneously
            for (int i = 0; i < n; i++) {
                  // If the current element of A has already been seen, it is a common element
                  if (seenElements.contains(A[i])) {
                        commonCount++;
                  }

                  // Add the current element of A to the seen set
                  seenElements.add(A[i]);

                  // If the current element of B has already been seen, it is a common element
                  if (seenElements.contains(B[i])) {
                        commonCount++;
                  }

                  // Add the current element of B to the seen set
                  seenElements.add(B[i]);

                  // Store the current count of common elements in the prefixCommon array
                  prefixCommon[i] = commonCount;
            }

            // Return the final array of prefix common counts
            return prefixCommon;
      }
}

// !-------------------------------------------------------------------------------------

// * Using freq Array

// ? ⌚ Time complexity ➺ O(n) 👉🏻 n = len(A)

// ? 🧺 Space complexity ➺ O(n)

class Solution {
      public int[] findThePrefixCommonArray(int[] A, int[] B) {
            int n = A.length;

            // Frequency array to track occurrences of elements
            int[] freq = new int[n + 1];

            // List to store the count of prefix common elements
            int prefixCommon[] = new int[n];

            // Counter for common elements seen so far
            int permutations = 0;

            // Iterate through both arrays A and B
            for (int i = 0; i < n; i++) {
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

                  // Add current count to the prefixCommon list
                  prefixCommon[i] = permutations;
            }

            return prefixCommon;
      }
}
