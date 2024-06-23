//! https://github.com/Prakhar-002/LEETCODE

class Solution {
      public int[] relativeSortArray(int[] arr1, int[] arr2) {
            int[] freqCount = new int[1001];

            for (int n : arr1) {
                  freqCount[n]++;
            }

            int[] ans = new int[arr1.length];

            int i = 0;

            for (int n : arr2) {
                  while (freqCount[n]-- > 0) {
                        ans[i++] = n;
                  }
            } 

            for (int j = 0; j < freqCount.length; j++) {
                  while (freqCount[j]-- > 0) {
                        ans[i++] = j;
                  }
            }

            return ans;
      }
}