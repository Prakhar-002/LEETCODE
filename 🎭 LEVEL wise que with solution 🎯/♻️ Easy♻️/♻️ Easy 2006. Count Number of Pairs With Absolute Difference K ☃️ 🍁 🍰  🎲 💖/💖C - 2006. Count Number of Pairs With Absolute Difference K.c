//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2006

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(m)  ->  m = Unique(nums)

#include <stdio.h>
#include <stdlib.h>

#define MAX 101

int countKDifference(int* nums, int numsSize, int k) {
      int countMap[MAX] = {0};       // Frequency map for numbers [0, 100]
      int pairs = 0;                 // To store result

      // Count frequency of each number in the input array
      for (int i = 0; i < numsSize; i++) {
            countMap[nums[i]]++;
      }

      // For each number, check if (num + k) exists in the frequency map
      for (int num = 0; num < MAX - k; num++) {
            if (countMap[num] > 0 && countMap[num + k] > 0) {
                  // Multiply frequencies and add to the total pairs
                  pairs += countMap[num] * countMap[num + k];
            }
      }

      return pairs;
}
