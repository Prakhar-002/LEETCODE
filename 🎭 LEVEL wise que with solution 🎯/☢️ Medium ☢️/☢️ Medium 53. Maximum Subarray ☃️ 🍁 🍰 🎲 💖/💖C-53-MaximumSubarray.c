//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 53

//? ⌚ Time complexity -> O(n) 👉 For length

//? 🧺 Space complexity -> O(1)

#include <stdio.h>
#include <limits.h>

int maxSubArray(int *nums, int numsSize){
      int curSum = 0;
      int maxSum = INT_MIN;

      for (int i = 0; i < numsSize; i++){
            // if less than 0 make it's own train
            // else it will a part of existing train
            curSum = (curSum < 0) ? nums[i] : curSum + nums[i];
            
            // take the max
            maxSum = (curSum > maxSum) ? curSum : maxSum;
      }

      return maxSum;
}