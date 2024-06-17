class Solution:
      def subarraySum(self, nums: List[int], k: int) -> int:
            res = 0
            curSum = 0

            prefixMap = { 0 : 1 }

            for n in nums : 
                  curSum += n
                  diff = curSum - k

                  res += prefixMap.get(diff, 0)
                  prefixMap[curSum] = prefixMap.get(curSum, 0) + 1

            return res