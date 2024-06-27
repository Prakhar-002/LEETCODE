#! https://github.com/Prakhar-002/LEETCODE


#Todo 📌 QUESTION NUMBER 1442 

class Solution:
      def countTriplets(self, arr: List[int]) -> int:
            l = len(arr)
            triplets = 0

            for i in range (l - 1):
                  curXor = arr[i]
                  for k in range (i + 1, l):
                        curXor ^= arr[k]
                        if curXor == 0:
                              triplets += k - i

            return triplets
