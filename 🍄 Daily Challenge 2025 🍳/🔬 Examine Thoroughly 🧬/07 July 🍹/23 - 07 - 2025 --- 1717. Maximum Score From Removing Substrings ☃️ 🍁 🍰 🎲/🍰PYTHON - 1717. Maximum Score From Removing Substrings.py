#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 1717

#? ⌚ Time complexity -> O(n) 👉 String length 

#? 🧺 Space complexity -> O(n) 👉 using Stack 

class Solution:
      def maximumGain(self, s: str, x: int, y: int) -> int:

            def removeByPair(pair, x, y) :
                  # let say x > y 
                  nonlocal s 
                  points = 0
                  stack = []

                  # first we will remove "ab" 
                  for ch in s:
                        # check for the ch if it is b and on top of our stack is a  
                        if ch == pair[1] and stack and stack[-1] == pair[0]:
                              # remove a from top 
                              stack.pop()
                              # add point for removing
                              points += x

                        else :
                              # just push every char in stack
                              stack.append(ch)

                  # now we will update the string for removing only "ba" from string 
                  s = "".join(stack)

                  # clear stack for reuse
                  stack.clear()

                  # now we will remove "ba" 
                  for ch in s:
                        # check for the ch if it is a and on top of our stack is b 
                        if ch == pair[0] and stack and stack[-1] == pair[1]:
                              # remove b from top 
                              stack.pop()
                              # add point for removing
                              points += y 

                        else :
                              # just push to our stack
                              stack.append(ch)

                  # return total points
                  return points

            # we will call as per the x and y 
            return removeByPair("ab", x, y) if x > y else removeByPair("ba", y, x)