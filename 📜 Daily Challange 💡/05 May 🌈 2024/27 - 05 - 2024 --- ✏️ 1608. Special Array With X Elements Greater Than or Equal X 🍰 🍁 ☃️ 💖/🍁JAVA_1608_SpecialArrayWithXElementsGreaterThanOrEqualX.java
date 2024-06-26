//! https://github.com/Prakhar-002/LEETCODE


//Todo 📌 QUESTION NUMBER 1608 

import java.util.*;

class Solution {
      public int specialArray(int[] nums) {
            int countNo[] = new int[nums.length + 1];

            for (int el : nums) {
                  countNo[Math.min(el, nums.length)]++; // This will count all numbers in array
            }

            int totalRight = 0;

            for (int i = nums.length; i >=0 ; i--) {
                  totalRight += countNo[i];

                  if (i == totalRight) {
                        return totalRight;
                  }
            }

            return -1;

      }
}


