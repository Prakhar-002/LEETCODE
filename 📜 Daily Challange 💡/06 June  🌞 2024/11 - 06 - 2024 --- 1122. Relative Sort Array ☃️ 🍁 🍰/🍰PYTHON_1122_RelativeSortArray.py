# //! https://github.com/Prakhar-002/LEETCODE

class Solution:
      def relativeSortArray(self, arr1: List[int], arr2: List[int]) -> List[int]:
            freq_count = [0] * 1001

            for n in arr1:
                  freq_count[n] += 1

            res = []

            for n in arr2:
                  while (freq_count[n] > 0):
                        res.append(n)
                        freq_count[n] -= 1

            j = 0

            while j < len(freq_count) :
                  while freq_count[j] > 0:
                        res.append(j)
                        freq_count[j] -= 1
                  j += 1 

            return res


            