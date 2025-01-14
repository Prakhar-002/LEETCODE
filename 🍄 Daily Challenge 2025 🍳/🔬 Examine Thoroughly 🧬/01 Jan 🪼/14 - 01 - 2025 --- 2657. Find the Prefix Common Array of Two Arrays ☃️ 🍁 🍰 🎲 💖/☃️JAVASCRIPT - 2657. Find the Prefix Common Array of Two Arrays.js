//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2657

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(A)

//? 🧺 Space complexity ➺ O(1)

function findThePrefixCommonArray(A, B) {
      // Use a variable to track seen bits for elements in A and B
      let seenBits = 0n;  // Use BigInt to handle large bitwise shifts

      // Variable to count the number of common elements encountered so far
      let commonCount = 0;

      // Array to store the prefix common counts
      let prefixCommon = [];

      // Iterate through the arrays A and B simultaneously
      for (let i = 0; i < A.length; i++) {
            // Check if the current element in A has already been seen using bits
            if (seenBits & (1n << BigInt(A[i] - 1))) {
                  commonCount++;
            }

            // Set the corresponding bit for the element in A
            seenBits |= (1n << BigInt(A[i] - 1));

            // Check if the current element in B has already been seen using bits
            if (seenBits & (1n << BigInt(B[i] - 1))) {
                  commonCount++;
            }

            // Set the corresponding bit for the element in B
            seenBits |= (1n << BigInt(B[i] - 1));

            // Append the current count of common elements to the prefixCommon array
            prefixCommon.push(commonCount);
      }

      // Return the final array of prefix common counts
      return prefixCommon;
}

//!------------------------------------------------------------------------------------- 

//* Using HashSet

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(A)

//? 🧺 Space complexity ➺ O(n)

var findThePrefixCommonArray = function (A, B) {
      // Set to keep track of elements that have been seen
      const seenElements = new Set();

      // Variable to count the number of common elements encountered so far
      let commonCount = 0;

      // Array to store the prefix common counts
      const prefixCommon = [];

      // Iterate through the arrays A and B simultaneously
      for (let i = 0; i < A.length; i++) {
            // If the current element of A has already been seen, it is a common element
            if (seenElements.has(A[i])) {
                  commonCount++;
            }

            // Add the current element of A to the seen set
            seenElements.add(A[i]);

            // If the current element of B has already been seen, it is a common element
            if (seenElements.has(B[i])) {
                  commonCount++;
            }

            // Add the current element of B to the seen set
            seenElements.add(B[i]);

            // Append the current count of common elements to the prefixCommon array
            prefixCommon.push(commonCount);
      }

      // Return the final array of prefix common counts
      return prefixCommon;
}

//!------------------------------------------------------------------------------------- 

//* Using freq Array

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(A)

//? 🧺 Space complexity ➺ O(n)

var findThePrefixCommonArray = function (A, B) {
      const n = A.length;

      // Frequency array to track occurrences of elements
      const freq = new Array(n + 1).fill(0);

      // Array to store the count of prefix common elements
      const prefixCommon = [];

      // Counter for common elements seen so far
      let permutations = 0;

      // Iterate through both arrays A and B
      for (let i = 0; i < n; i++) {
            // Increment frequency for the current element in A
            freq[A[i]]++;
            if (freq[A[i]] === 2) {
                  permutations++;
            }

            // Increment frequency for the current element in B
            freq[B[i]]++;
            if (freq[B[i]] === 2) {
                  permutations++;
            }

            // Add current count to the prefixCommon array
            prefixCommon.push(permutations);
      }

      return prefixCommon;
}