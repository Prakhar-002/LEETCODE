#! https://github.com/Prakhar-002/LEETCODE


# Todo 📌 QUESTION NUMBER 1550

#? ⌚ Time complexity -> O(n) 👉 length of array

#? 🧺 Space complexity -> O(1) 

class Solution:
      def threeConsecutiveOdds(self, arr: List[int]) -> bool:
            if len(arr) < 3:
                  return False

            odds = 0

            for n in arr:
                  #  if we get odd inc our odd count
                  if n % 2 != 0:
                        odds += 1
                        # if odd is 3 return tree
                        if odds >= 3:
                              return True
                  # if we hit one even odd count will 0
                  else :
                        odds = 0

            return odds >= 3