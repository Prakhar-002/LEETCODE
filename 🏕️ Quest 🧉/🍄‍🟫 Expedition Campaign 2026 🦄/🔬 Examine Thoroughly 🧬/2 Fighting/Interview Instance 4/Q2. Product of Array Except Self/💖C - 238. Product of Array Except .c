//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 2181

//? ⌚ Time complexity -> O(n) 👉 length of nums

//? 🧺 Space complexity -> O(1) 👉 according to followUp

#include <stdlib.h>

int *productExceptSelf(int *nums, int numsSize, int *returnSize){
      int *res = (int *)malloc(numsSize * sizeof(int));
      *returnSize = numsSize;

      // for prefix multiply
      int prefix = 1;

      for (int i = 0; i < numsSize; i++){
            res[i] = prefix;
            prefix *= nums[i];
      }

      // for postfix multiply
      int postfix = 1;

      for (int i = numsSize - 1; i >= 0; i--){
            res[i] *= postfix;
            postfix *= nums[i];
      }

      return res;
}