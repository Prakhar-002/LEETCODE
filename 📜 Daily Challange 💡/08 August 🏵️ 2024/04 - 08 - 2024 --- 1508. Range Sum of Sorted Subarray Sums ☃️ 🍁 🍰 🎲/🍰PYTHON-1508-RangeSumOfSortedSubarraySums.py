#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1508

#? ⌚ Time complexity ➺ O(n^2 Log n) 👉🏻 n = len(nums)

#? 🧺 Space complexity ➺ O(n ^ 2) 👉🏻 building array of sum of subArray

class Solution:
      def rangeSum(self, nums: List[int], n: int, left: int, right: int) -> int:
            # have a variable by which we've to mod 
            MOD = 10 ** 9 + 7

            # construct an array which is sum of subArray
            subArraySum = []

            # take the sum of all subarray
            for i in range(n):
                  curSum = 0
                  for j in range(i, n):
                        curSum = (curSum + nums[j]) % MOD
                        subArraySum.append(curSum)

            # sort our subarray sum array
            subArraySum.sort()

            subArrayNumSum = 0

            # value we wanted to sum are from left to right
            # index of those values will be left - 1 to right - 1
            for num in range(left - 1, right):
                  subArrayNumSum = (subArrayNumSum + subArraySum[num]) % MOD

            return subArrayNumSum
