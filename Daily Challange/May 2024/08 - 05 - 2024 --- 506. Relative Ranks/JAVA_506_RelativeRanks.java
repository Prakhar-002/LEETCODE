import java.util.*;
class Solution {
      public String[] findRelativeRanks(int[] score) {

            int n = score.length;

            int[][] sortArr = new int[n][2];
            for (int i = 0; i < n; i++) {
                  sortArr[i] = new int[] { i, score[i] };
            }

            Arrays.sort(sortArr, (a, b) -> (b[1] - a[1]));

            String[] rankArr = new String[n];

            for (int i = 0; i < n; i++) {

                  if (i == 0) {
                        rankArr[sortArr[i][0]] = "Gold Medal";
                  } else if (i == 1) {
                        rankArr[sortArr[i][0]] = "Silver Medal";
                  } else if (i == 2) {
                        rankArr[sortArr[i][0]] = "Bronze Medal";
                  } else {
                        rankArr[sortArr[i][0]] = (i + 1) + "";
                  }
            }

            return rankArr;
      }
}