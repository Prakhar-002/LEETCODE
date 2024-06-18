import java.util.*;
class Solution {
      public int maxProfitAssignment(int[] difficulty, int[] profit, int[] worker) {
            int ans = 0;
            // Making a arraylist of array
            // That will store the diff and profit 
            // to sort it together int[2]
            List<int[]> jobs = new ArrayList<>();

            for (int i = 0; i < difficulty.length; i++) {
                  // making arraylist of difficulty and profit storing them together 
                  jobs.add(new int[] { difficulty[i], profit[i] });
            }

            // sorting our job array and our workers array alone
            Collections.sort(jobs, (a, b) -> Integer.compare(a[0], b[0]));
            // OR
            //! Collections.sort(jobs, (a, b) -> a[0] - b[0]);
            Arrays.sort(worker);

            // iterate for every workers 
            // int  j = 0;
            // int maxProfit = 0;
            for (int i = 0, j = 0, maxProfit = 0; i < worker.length; i++) {
                  // finding maxProfit that can our worker Ith can have 
                  while (j < jobs.size() && jobs.get(j)[0] <= worker[i]) {
                        // we'll update if we found profit greater than our previous profit
                        maxProfit = Math.max(maxProfit, jobs.get(j)[1]);
                        j++;
                  }
                  // we'll add our profit for every worker
                  ans += maxProfit;
            }

            // return ans
            return ans;
      }
}