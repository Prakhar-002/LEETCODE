//! https://github.com/Prakhar-002/LEETCODE


//Todo 📌 QUESTION NUMBER 3075 

class Solution {
      public long maximumHappinessSum(int[] happiness, int k) {
            Arrays.sort(happiness);
            int dec = 0;
            int n = happiness.length;
            long ans = 0;
            for (int i = n - 1; i >= n - k; i--) {
                  ans += Math.max(0, happiness[i] - dec);
                  dec++;
            }
            return ans;
      }
}