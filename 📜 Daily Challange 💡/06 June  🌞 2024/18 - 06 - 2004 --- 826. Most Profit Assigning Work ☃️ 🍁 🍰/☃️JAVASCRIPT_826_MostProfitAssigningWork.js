var maxProfitAssignment = function(difficulty, profit, worker) {
      let ans = 0
      // Making a array of array
      // That will store the diff and profit 
      // to sort it together int[2]
      let jobs = []

      for (let i = 0; i < difficulty.length; i++) {
            // making array of difficulty and profit storing them together 
            jobs.push([difficulty[i], profit[i]]);
      }

      // sorting our job array and our workers array alone
      jobs.sort((a, b) => a[0] - b[0]);
      worker.sort((a, b) => a - b);

      // iterate for every workers 
      // int  j = 0;
      // int maxProfit = 0;
      for (let i = 0, j = 0, maxProfit = 0; i < worker.length; i++) {
            // finding maxProfit that can our worker Ith can have 
            while(j < jobs.length && jobs[j][0] <= worker[i]){
                  // we'll update if we found profit greater than our previous profit
                  maxProfit = Math.max(maxProfit, jobs[j][1]);
                  j++;
            }
            // we'll add our profit for every worker
            ans += maxProfit;
      }

      return ans;
};