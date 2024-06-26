//! https://github.com/Prakhar-002/LEETCODE


//Todo 📌 QUESTION NUMBER 1608 

int specialArray(int* nums, int numsSize) {
      int countNo[numsSize + 1];

      for(int i = 0; i <= numsSize; i++){
            countNo[i] = 0;
      }

      for(int i = 0; i < numsSize; i++){
            countNo[nums[i] < numsSize ? nums[i] : numsSize]++;
      }

      int totalRight = 0;

      for(int i = numsSize ; i >= 0 ; i--){
            totalRight += countNo[i];

            if (i == totalRight){
                  return totalRight;
            }
      }

      return -1;
}