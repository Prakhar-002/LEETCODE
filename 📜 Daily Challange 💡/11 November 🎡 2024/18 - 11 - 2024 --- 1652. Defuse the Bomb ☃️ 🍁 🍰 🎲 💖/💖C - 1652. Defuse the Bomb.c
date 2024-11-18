//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1652

//? ⌚ Time complexity ➺ O(n + k) 👉🏻  n = len(code)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

int* decrypt(int* code, int codeSize, int k, int* returnSize) {
      // Set the size of the returned array
      *returnSize = codeSize;

      // Allocate memory for the decrypted array
      int* decryptedCode = (int*)malloc(codeSize * sizeof(int));

      // Edge case: if k == 0, return an array of zeros
      if (k == 0) {
            for (int i = 0; i < codeSize; i++) {
                  decryptedCode[i] = 0;
            }
            return decryptedCode;
      }

      // Initialize pointers and the current sum
      int l = 0, curSum = 0;
      int absK = abs(k);

      // Iterate over the extended range of indices to handle circular behavior
      for (int r = 0; r < codeSize + absK; r++) {
            // Add the current value to the sum (using modulo for circular behavior)
            curSum += code[r % codeSize];

            // If the window size exceeds abs(k), remove the leftmost value
            if (r - l + 1 > absK) {
                  curSum -= code[l % codeSize];
                  l = (l + 1) % codeSize;
            }

            // When the window size equals abs(k)
            if (r - l + 1 == absK) {
                  if (k > 0) {
                        // If k is positive, update the value at the (l-1)%codeSize index
                        decryptedCode[(l - 1 + codeSize) % codeSize] = curSum;
                  } else if (k < 0) {
                        // If k is negative, update the value at the (r+1)%codeSize index
                        decryptedCode[(r + 1) % codeSize] = curSum;
                  }
            }
      }

      // Return the decrypted code array
      return decryptedCode;
}
