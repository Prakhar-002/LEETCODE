#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 1395

#? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(rating array)

#? 🧺 Space complexity ➺ O(1) 

class Solution:

      # Intuition is we go for every soldier we have btw 1 to last 2nd soldier

      # for ascending order

      # we count the soldier that have less rating and left of our current soldier
      # and count the soldier that are right and have greater rating than the current soldier

      # now calculate the descending order 

      # we count the soldier that have greater rating and left of our current soldier
      # and count the soldier that are right and have less rating than the current soldier

      # then we will multiply them and add to our team cause that will be the number of possible teams

      def numTeams(self, rating: List[int]) -> int:
            teams = 0
            ratingLength = len(rating) 

            # go for every soldier in our rating array 
            for soldier in range(1, ratingLength - 1):
                  leftSmaller = rightLarger = 0

                  # first check for the smaller one 
                  # and to the left side of our soldier
                  for s in range(soldier):
                        if rating[s] < rating[soldier]:
                              leftSmaller += 1

                  # now check for the larger one 
                  # and to the right side of our soldier
                  for s in range(soldier + 1, ratingLength):
                        if rating[s] > rating[soldier]:
                              rightLarger += 1

                  # make team of ascending order 
                  teams += leftSmaller * rightLarger

                  # now check for the larger one 
                  # and to the left side of our current soldier
                  # it will be total left - leftSmaller
                  leftLarger = soldier - leftSmaller

                  # now check for the smaller one 
                  # and to the right side of our current soldier
                  # it will be total right - leftLarger
                  rightSmaller = ratingLength - soldier - 1 - rightLarger

                  # make teams for descending order 
                  teams += leftLarger * rightSmaller

            return teams