//! https://github.com/Prakhar-002/LEETCODE


//Todo 📌 QUESTION NUMBER 2441 

class Solution {
      public int findMaxK(int[] nums) {
            int max = -1;
            Set<Integer> s = new HashSet<>();
            for (int x : nums) {
                  s.add(x);
            } 
            for (int x : s) {
                  if (s.contains(-x)) {
                        max = Math.max(max, x);
                  }
            }
            return max; 
      }
}