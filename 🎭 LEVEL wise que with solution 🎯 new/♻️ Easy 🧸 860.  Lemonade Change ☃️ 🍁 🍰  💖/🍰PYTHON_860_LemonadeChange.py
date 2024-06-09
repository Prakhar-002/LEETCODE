class Solution:
      def lemonadeChange(self, bills: List[int]) -> bool:
            five = 0
            ten = 0

            for bill in bills:
                  # if we get 5$ 
                  if bill == 5:
                        five += 1

                  elif bill == 10:
                        if five >= 1:
                              five -= 1
                              ten += 1

                        else :
                              return False

                  else :
                        if five >= 1 and ten >= 1:
                              five -= 1
                              ten -= 1

                        elif five >= 3:
                              five -= 3

                        else :
                              return False

            return True

