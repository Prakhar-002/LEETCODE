//! https://github.com/Prakhar-002/LEETCODE


//Todo 📌 QUESTION NUMBER 2441 

class Solution { 
      public int findMaxK(int[] nums) {
            int low = Integer.MAX_VALUE;
            int high = Integer.MIN_VALUE;

            // finding the low and high
            for (int n : nums) {
                  low = Math.min(n, low);
                  high = Math.max(n, high);
            }
            int len = Math.abs(low) + Math.abs(high) + 1;

            // making an array of 2 * (min + max + 1)  
            boolean[] visit = new boolean[2 * len];
            int res = -1;
            for (int n : nums) {
                  // Check if It's positive value also present in arr
                  if (visit[-n + len]) {
                        res = Math.max(res, Math.abs(n));
                  }
                  // assume adding every -ve number
                  visit[n + len ] = true;
            }
            return res;
      }
}