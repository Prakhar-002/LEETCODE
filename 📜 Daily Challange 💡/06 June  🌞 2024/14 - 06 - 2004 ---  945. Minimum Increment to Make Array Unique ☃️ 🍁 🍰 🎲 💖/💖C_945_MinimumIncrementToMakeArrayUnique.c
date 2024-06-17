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
      // Make a array of length = length of nums and the max value present in nums array
      int freqCount[numsSize + arrMax(nums, numsSize)];
      //  Initialising every value of freqCount to 0
      memset(freqCount, 0, sizeof(freqCount));

      for (int i = 0; i < numsSize; i++){
            // Count freq of each element
            freqCount[nums[i]]++;
      }

      int increment = 0;

      for (int i = 0; i < sizeof(freqCount) / sizeof(freqCount[0]); i++){
            // Check if freq of elem is > 1 
            if (freqCount[i] > 1){
                  // Assign freq = 1 and take out the extra one
                  int extra = freqCount[i] - 1;
                  // add extra freq to next index (for making array unique)
                  freqCount[i + 1] += extra;
                  // add extra to our increment
                  increment += extra;
            }
      }

      return increment;
}
