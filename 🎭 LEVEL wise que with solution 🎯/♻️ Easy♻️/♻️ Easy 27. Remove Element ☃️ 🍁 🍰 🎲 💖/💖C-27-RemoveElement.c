//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 27

//? ⌚ Time complexity -> O(n) 👉 length of arr

//? 🧺 Space complexity -> O(1) 

#include <stdio.h>

int removeElement(int* nums, int numsSize, int val) {
      int index = 0;
      for (int i = 0; i < numsSize; i++) {
            if (nums[i] != val) {
                  nums[index++] = nums[i];
            }
      }
      return index;
}
