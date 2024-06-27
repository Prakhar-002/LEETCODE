//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 826 

class Solution {
public:
      int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit,
                              vector<int>& worker) {
            int ans = 0;
            // Making a vector of pair
            // That will store the diff and profit
            // to sort it together
            vector<pair<int, int>> jobs;

            for (int i = 0; i < difficulty.size(); i++) {
                  // making vector of difficulty and profit storing them together
                  jobs.emplace_back(difficulty[i], profit[i]);
            }

            // sorting our job vector and our workers vector alone
            sort(jobs.begin(), jobs.end());
            sort(worker.begin(), worker.end());

            // iterate for every workers
            int j = 0;
            int maxProfit = 0;
            for (int i = 0; i < worker.size(); i++) {
                  // finding maxProfit that can our worker Ith can have
                  while (j < jobs.size() && jobs[j].first <= worker[i]) {
                        // we'll update if we found profit greater than our previous
                        // profit
                        maxProfit = max(maxProfit, jobs[j].second);
                        j++;
                  }
                  // we'll add our profit for every worker
                  ans += maxProfit;
            }

            // return ans
            return ans;
      }
};
