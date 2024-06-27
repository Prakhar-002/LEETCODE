# //! https://github.com/Prakhar-002/LEETCODE


#Todo 📌 QUESTION NUMBER 826 

class Solution:
      def maxProfitAssignment(self, difficulty: List[int], profit: List[int], worker: List[int]) -> int:
            ans = 0
            # making zip of difficulty and profit and storing them together 
            jobs = sorted(zip(difficulty, profit))
            # sort in reverse order 
            worker.sort(reverse = 1)

            j = 0
            maxProfit = 0

            for w in sorted(worker):
                  # finding maxProfit that can our worker Ith can have 
                  while j < len(jobs) and  jobs[j][0] <= w:
                        # we'll update if we found profit greater than our previous profit
                        maxProfit = max(maxProfit, jobs[j][1])
                        j += 1
                  # we'll add our profit for every worker 
                  ans += maxProfit

            return ans