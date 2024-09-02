#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1894

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(chalk)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      #  `k : initialChalkPieces`: An integer that represents an initial amount of chalk
      def chalkReplacer(self, chalk: List[int], k: int) -> int:
            # calculating the total amount of chalk needed 
            # for one complete round through all students
            totalChalkNeeded = sum(chalk)

            # calculates the remaining chalk after completing as many full rounds as possible
            remainingChalk = k % totalChalkNeeded

            #  iterates over each student 
            for studentIndex, studentChalkUse in enumerate(chalk):
                  # this means the current student is the one 
                  # who cannot complete their problem due to insufficient chalk
                  if remainingChalk < studentChalkUse:
                        # the loop ends by returning the student's index
                        return studentIndex

                  # student has enough chalk to finish their problem
                  remainingChalk -= studentChalkUse # subtracts the student's chalk usage
