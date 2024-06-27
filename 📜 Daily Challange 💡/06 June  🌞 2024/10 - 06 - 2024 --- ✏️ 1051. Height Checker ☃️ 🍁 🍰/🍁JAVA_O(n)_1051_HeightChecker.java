//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 1051 

class Solution {
      public int heightChecker(int[] heights) {
            int heightFreq[] = new int[101];

            for (int height : heights) {
                  heightFreq[height]++;
            }

            int expected[] = new int[heights.length];

            int k = 0;

            for (int height = 0; height < 101; height++) {
                  int children = heightFreq[height];

                  while(children-- > 0) {
                        expected[k++] = height;
                  } 
            }

            int count = 0;

            for (int i = 0; i < heights.length; i++) {
                  if (heights[i] != expected[i]) {
                        count++;
                  }
            }

            return count;
      }
}