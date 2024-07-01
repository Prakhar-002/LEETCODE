#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool isDivide(int n){
      int num = n;
      while (n > 0) {
            int rem = n % 10;
            if (rem == 0 || num % rem != 0){
                  return false;
            }
            n /= 10;
      }

      return true;
}

int *selfDividingNumbers(int left, int right, int *returnSize){
      int *res = (int *)malloc(sizeof(int) * (right - left + 1));
      *returnSize = 0;
      for (int i = left; i <= right; i++){
            if (isDivide(i)){
                  res[*returnSize] = i;
                  (*returnSize)++;
            }
      }

      return res;
}