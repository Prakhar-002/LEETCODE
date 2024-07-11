#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 1190

#? ⌚ Time complexity -> O(n) 👉 String length

#? 🧺 Space complexity -> O(n) 👉 Making Reverse SubString

class Solution:
      def reverseParentheses(self, s: str) -> str:
            # we shall store i for "(" to j for ")"
            # store pair open parenthesis to it's close parenthesis
            parenPair = {}
            # using stack for extracting parenthesis
            stack = []

            for i , ch in enumerate(s):
                  # if we gor open parenthesis store the idx 
                  if ch == "(" :
                        stack.append(i)

                  elif ch == ")" :
                        # i is at close parenthesis
                        # j is at open parenthesis
                        j = stack.pop()
                        # store the pair (i to j) and (j to i)
                        parenPair[i] = j
                        parenPair[j] = i

            # preWork is done now main

            i, direction = 0, 1
            revStr = []

            while i < len(s):
                  if s[i] == "(" or s[i] == ")" :
                        # if some where we found parenthesis
                        # we switch to it's corresponding open or close paren
                        i = parenPair[i]
                        # and change the direction of adding in result
                        direction = -direction

                  else :
                        # simply add in our revStr
                        revStr.append(s[i])

                  # inc our i with direction 
                  # so either it will go with inc or dec mean -> dir or <- dir
                  i += direction

            # convert arr to string 
            return "".join(revStr)

# ------------------------------------------------------

# ⌚ Time complexity -> O(n ^ 2) 👉 n is String length

# 🧺 Space complexity -> O(n * m) 👉 using Stack m times

class Solution:
      def reverseParentheses(self, s: str) -> str:
            # take a empty stack
            stack = []

            # Traverse whole character in string 
            for ch in s :
                  # is we get a close parenthesis
                  if ch == ")" :
                        # partition to store the value btw ()
                        portion = []

                        # pop until open parenthesis come 
                        # for corresponding open parenthesis
                        while stack[-1] != "(" :
                              # pop from stack until "(" comes
                              portion.append(stack.pop())
                        # pop "(" too
                        stack.pop()
                        # now store the partition it self in stack
                        # cause stack push and pop reverse the string we done with reverse 
                        stack.extend(portion)

                  # we append ch in stack until a close parenthesis comes
                  else : 
                        stack.append(ch)

            # join stack values return string
            return "".join(stack)