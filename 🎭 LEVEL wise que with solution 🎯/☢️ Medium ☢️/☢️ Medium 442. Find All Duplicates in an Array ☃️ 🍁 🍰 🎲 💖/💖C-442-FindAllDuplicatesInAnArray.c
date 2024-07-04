//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 442

//? ⌚ Time complexity -> O(n) 👉 length of nums

//? 🧺 Space complexity -> O(1) 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* findDuplicates(int* nums, int numsSize, int* returnSize) {
      int* duplicates = (int*)malloc(sizeof(int) * numsSize);
      *returnSize = 0;

      for (int i = 0; i < numsSize; i++) {
            int n = abs(nums[i]);
            if (nums[n - 1] < 0) {
                  duplicates[(*returnSize)++] = n;
            } else {
                  nums[n - 1] = -1 * nums[n - 1];
            }
      }

      return duplicates;
}
