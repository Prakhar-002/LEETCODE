#! https://github.com/Prakhar-002/LEETCODE


#Todo 📌 QUESTION NUMBER 1442 

class Solution:
      def countTriplets(self, arr: List[int]) -> int:
            l = len(arr)
            triplets = 0

            for i in range (l - 1):
                  a = 0
                  for j in range (i + 1, l):
                        a ^= arr[j - 1]

                        b = 0
                        for k in range(j, l):
                              b ^= arr[k]

                              if(a == b) :
                                    triplets += 1

            return triplets
