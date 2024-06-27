//! https://github.com/Prakhar-002/LEETCODE


//Todo 📌 QUESTION NUMBER 3068 

import java.util.*;

class Solution {

      public Integer[] xorArrCreator(int arr[], int k) {
            Integer xorArr[] = new Integer[arr.length];

            for (int i = 0; i < arr.length; i++) {
                  xorArr[i] = (arr[i] ^ k) - arr[i];
            }

            return xorArr;
      }

      public long numArrSum(int arr[]) {
            long sum = 0;

            for (int i = 0; i < arr.length; i++) {
                  sum += arr[i];
            }

            return sum;
      }

      public long maximumValueSum(int[] nums, int k, int[][] edges) {
            // Making xorArr
            Integer xorArr[] = xorArrCreator(nums, k);

            // Sort in reverse order
            Arrays.sort(xorArr, Collections.reverseOrder());

            // taking sum of all values in nums array
            long sum = numArrSum(nums);

            for (int i = 0; i < xorArr.length; i += 2) {
                  if (i == xorArr.length - 1) {
                        break;
                  }
                  long path_sum = xorArr[i] + xorArr[i + 1];
                  if (path_sum <= 0) {
                        break;
                  }
                  sum += path_sum;
            }

            return sum;
      }
}