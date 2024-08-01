#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2678

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(details)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def countSeniors(self, details: List[str]) -> int:
            oldPassenger = 0

            # extract the age for every passenger 
            for passenger in details:
                  # our age lie between 11 and 12 character
                  age = int(passenger[11 : 13])

                  # check if age is greater than 60
                  if age > 60:
                        # count old Passengers
                        oldPassenger += 1

            # return our ans
            return oldPassenger

#------------------------------------------------

# * One line code 

class Solution:
      def countSeniors(self, details: List[str]) -> int:
            return sum(1 for passenger in details if int(passenger[11:13]) > 60)

