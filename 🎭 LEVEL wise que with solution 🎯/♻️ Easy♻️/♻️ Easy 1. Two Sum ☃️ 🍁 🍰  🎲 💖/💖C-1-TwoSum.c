//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1

//? ⌚ Time complexity -> O(n^2) 👉 array length

//? 🧺 Space complexity -> O(1)

#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize){
      for (int i = 0; i < numsSize; i++){
            for (int j = i + 1; j < numsSize; j++){
                  if ((nums[i] + nums[j]) == target){
                        int *result = (int *)malloc(2 * sizeof(int));
                        result[0] = i;
                        result[1] = j;
                        *returnSize = 2;
                        return result;
                  }
            }
      }

      *returnSize = numsSize;
      return nums;
}
