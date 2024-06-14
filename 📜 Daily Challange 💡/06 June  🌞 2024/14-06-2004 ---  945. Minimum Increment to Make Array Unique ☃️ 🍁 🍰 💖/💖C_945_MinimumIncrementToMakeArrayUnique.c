#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int arrMax(int arr[], int size){
      int max = 0;
      for (int i = 0; i < size; i++){
            max = fmax(max, arr[i]);
      }
      return max;
}

int minIncrementForUnique(int nums[], int numsSize){
      int freqCount[numsSize + arrMax(nums, numsSize)];
      memset(freqCount, 0, sizeof(freqCount));

      for (int i = 0; i < numsSize; i++){
            freqCount[nums[i]]++;
      }

      int increment = 0;

      for (int i = 0; i < sizeof(freqCount) / sizeof(freqCount[0]); i++){
            if (freqCount[i] > 1){
                  int extra = freqCount[i] - 1;
                  freqCount[i + 1] += extra;
                  increment += extra;
            }
      }

      return increment;
}
