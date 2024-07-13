#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 2751

#? ⌚ Time complexity -> O(NLogN) 👉 SORTING 

#? 🧺 Space complexity -> O(n) 👉 using HashMap and Stack

class Solution:
      def survivedRobotsHealths(self, positions: List[int], healths: List[int], directions: str) -> List[int]:
            # making a map for position to index value 
            indexMap = {p : i for i, p in enumerate(positions)} 

            stack = []

            # we go in sorted way cause we are given position wise robot's health
            for position in sorted(positions):
                  # get the index of our current robot
                  idx = indexMap[position]

                  # robot is coming in  left -> and next coming from right <- then
                  # collision possible (top of stack) L ->  <- R (current robot)

                  # append Right dir Robot
                  if directions[idx] == "R":
                        stack.append(idx)

                  # if top is Left and current is Right
                  else :
                        # while stack is not empty and health[i] > 0
                        # cause we update the health will 0 if colloid
                        while stack and healths[idx] :
                              # pop our top of stack for left robot

                              # Take the left and right robot and colloid them

                              leftRobot = stack.pop()
                              rightRobot = idx

                              if healths[rightRobot] > healths[leftRobot] :
                                    # left will destroy
                                    healths[leftRobot] = 0
                                    # right will get dec in it's health by one
                                    healths[rightRobot] -= 1

                              elif healths[rightRobot] < healths[leftRobot] :
                                    # right will destroy
                                    healths[rightRobot] = 0
                                    # left will get dec in it's health by one
                                    healths[leftRobot] -= 1
                                    # cause left have health so it will be in our stack 
                                    stack.append(leftRobot)

                              else :
                                    # both will destroy themselves

                                    healths[leftRobot] = healths[rightRobot] = 0

            # return those robot who have health till now
            return [h for h in healths if h > 0]