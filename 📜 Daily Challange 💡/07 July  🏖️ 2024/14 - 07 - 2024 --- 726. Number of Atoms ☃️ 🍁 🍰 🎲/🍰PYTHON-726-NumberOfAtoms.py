#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 726

#? ⌚ Time complexity -> O(n) 👉 No. of Char in String (Formula) 

#? 🧺 Space complexity -> O(n) 👉 USing A Stack of HashMap

from collections import defaultdict

class Solution:
      def countOfAtoms(self, formula: str) -> str:
            # Making a stack of HashMap
            stack = [defaultdict(int)]
            # iterator
            i = 0

            while i < len(formula):
                  # There are three case possible 
                  # 1st case open parenthesis
                  if formula[i] == "(":
                        # if we get a open parenthesis we add a new HashMap
                        # cause we store HashMap according parenthesis
                        stack.append(defaultdict(int))

                  # 2nd case close parenthesis
                  elif formula[i] == ")":
                        # if we get a close parenthesis we end up with the last HashMap
                        # so we will merge last HashMap with 2nd last HashMap
                        curMap = stack.pop()

                        # Count for that number occurrence after the parenthesis ()'2'
                        count = 0

                        # Now extract the number 
                        while i + 1 < len(formula) and formula[i + 1].isdigit() :
                              count = count * 10 + int(formula[i + 1])
                              i += 1

                        count = 1 if not count else count

                        # get the 2nd last HashMap and merge the Last (current) HashMap with 2nd last
                        previousMap = stack[-1]

                        for elem in curMap :
                              # we multiply with number occur after parenthesis
                              previousMap[elem] += curMap[elem] * count

                  # 3rd elem and it's count 
                  else :
                        # Extract the elem cause It can be one digit
                        element = formula[i]
                        # Count for that number occurrence
                        count = 0

                        # for elem if It is 2 digit then 
                        if i + 1 < len(formula) and formula[i + 1].islower() :
                              element = formula[i : i + 2]
                              i += 1

                        # Now extract the number 
                        while i + 1 < len(formula) and formula[i + 1].isdigit() :
                              count = count * 10 + int(formula[i + 1])
                              i += 1

                        # count will 1 if no number present after elem => KMg
                        count = 1 if not count else count
                        # get the last HashMap 
                        curMap = stack[-1]
                        # add the elem along with It's count
                        curMap[element] += count

                  # inc the count
                  i += 1 

            # after all parenthesis and going through whole formula there'll only one HashMap left
            cntMap = stack[-1]
            countAtom = ""

            for elem in sorted(cntMap.keys()) :
                  count = "" if cntMap[elem] == 1 else cntMap[elem]
                  countAtom += elem + str(count)

            return countAtom
