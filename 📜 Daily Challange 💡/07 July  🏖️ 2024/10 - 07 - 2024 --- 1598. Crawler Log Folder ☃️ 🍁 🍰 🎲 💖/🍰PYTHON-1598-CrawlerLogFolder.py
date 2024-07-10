#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 1598

#? ⌚ Time complexity -> O(n) 👉 Traversing logs

#? 🧺 Space complexity -> O(1) 

class Solution:
      def minOperations(self, logs: List[str]) -> int:
            crawler = 0

            # Traverse whole logs 
            for log in logs:
                  # if "./" be in same directory
                  if log == "./" :
                        continue

                  # if "../" move to our parent directory we dec our level
                  elif log == "../" :
                        crawler = max(crawler - 1, 0)

                  # else go to child directory we inc our level
                  else :
                        crawler += 1

            return crawler