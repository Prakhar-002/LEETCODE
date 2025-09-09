#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1317

#? ⌚ Time complexity ➺ O(n log n)

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def getNoZeroIntegers(self, n: int) -> List[int]:
            #      Iterate over possible values for A from 1 to n-1
            for A in range(1, n):
                  B = n - A                      #      Calculate B so that A + B = n
                  #      Check whether both A and B have no '0' in their digits
                  if "0" not in str(A) + str(B):
                        return [A, B]            #      Return the pair [A, B] if both are valid

            return []                            #      Return empty list if not found
