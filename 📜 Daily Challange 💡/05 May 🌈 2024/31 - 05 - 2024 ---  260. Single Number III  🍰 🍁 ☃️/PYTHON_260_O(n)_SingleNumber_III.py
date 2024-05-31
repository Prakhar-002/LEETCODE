class Solution:
      def singleNumber(self, nums: List[int]) -> List[int]:
            xor = 0
            for n in nums:
                  xor ^= n

            diff_bit = 1
            while not (diff_bit & xor) :
                  diff_bit = diff_bit << 1 # left shift by one

            a, b = 0, 0
            for n in nums:
                  if diff_bit & n:
                        a ^= n
                  else:
                        b ^= n

            return [a, b]

