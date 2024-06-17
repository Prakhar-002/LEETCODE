class Solution:
      def subarraysDivByK(self, nums: List[int], k: int) -> int:
            prefix_sum = 0
            res = 0

            prefix_cnt_map = { 0 : 1} 

            for n in nums:
                  prefix_sum += n
                  reminder = prefix_sum % k

                  res += prefix_cnt_map.get(reminder, 0)
                  prefix_cnt_map[reminder] = prefix_cnt_map.get(reminder, 0) + 1

            return res 