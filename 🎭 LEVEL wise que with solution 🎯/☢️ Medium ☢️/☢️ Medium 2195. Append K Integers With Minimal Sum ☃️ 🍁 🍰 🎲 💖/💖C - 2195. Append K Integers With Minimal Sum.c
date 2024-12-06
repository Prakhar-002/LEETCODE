//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2195

//? ⌚ Time complexity ➺ O(n Log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>
#include <stdlib.h>

long long minimalKSum(int* nums, int numsSize, int k) {
      // Sort the input array
      qsort(nums, numsSize, sizeof(int), (int(*)(const void*, const void*)) strcmp);

      // Initialize the result sum
      long long res = 0;

      // Start from 1 and add the smallest missing numbers
      int prev = 0; // To track the previous number processed

      for (int i = 0; i < numsSize; i++) {
            int num = nums[i];
            // If there is a gap between prev and the current number
            if (num > prev + 1) {
                  // Calculate the number of missing elements in the gap
                  int gap = (k < (num - prev - 1)) ? k : (num - prev - 1);

                  // Add the sum of the first 'gap' missing numbers
                  res += (long long)(prev + 1 + prev + gap) * gap / 2;

                  // Reduce k by the number of elements added
                  k -= gap;

                  // If k becomes 0, we are done
                  if (k == 0) {
                        return res;
                  }
            }

            // Update prev to the current number
            prev = num;
      }

      // If k > 0, add the next k numbers starting from prev + 1
      if (k > 0) {
            res += (long long)(prev + 1 + prev + k) * k / 2;
      }

      return res;
}

