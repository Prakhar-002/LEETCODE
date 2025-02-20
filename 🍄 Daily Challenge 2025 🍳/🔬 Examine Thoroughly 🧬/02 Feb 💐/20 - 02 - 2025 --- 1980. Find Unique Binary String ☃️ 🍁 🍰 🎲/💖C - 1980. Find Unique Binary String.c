//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1980

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* findDifferentBinaryString(char** nums, int numsSize) {
      // Allocate memory for the resulting binary string (+1 for null terminator)
      char* binaryStr = (char*)malloc((numsSize + 1) * sizeof(char));

      // Iterate through each string in the input array
      for (int i = 0; i < numsSize; i++) {
            // Get the diagonal element (i-th character of the i-th string)
            char cur = nums[i][i];

            // Flip the bit: '0' → '1', '1' → '0'
            binaryStr[i] = (cur == '0') ? '1' : '0';
      }

      // Null-terminate the string
      binaryStr[numsSize] = '\0';

      // Return the unique binary string
      return binaryStr;
}
