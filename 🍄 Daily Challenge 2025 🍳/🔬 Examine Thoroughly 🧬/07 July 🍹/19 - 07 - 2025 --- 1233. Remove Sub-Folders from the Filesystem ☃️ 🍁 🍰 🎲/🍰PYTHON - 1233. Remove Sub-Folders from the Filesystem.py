#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1233

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(folder)

#? 🧺 Space complexity ➺ O(n)

import typing 

class Solution:
      def removeSubfolders(self, folder: typing.List[str]) -> typing.List[str]:
            # Sort the folders lexicographically 
            # so parent folders come before their subfolders
            folder.sort()

            # Initialize result list with the first folder
            ans = [folder[0]]

            # Iterate through remaining folders starting from index 1
            for i in range(1, len(folder)):
                  # Get the last added folder path and add a trailing slash
                  last_folder = ans[-1] + "/"

                  # Check if current folder starts with lastFolder
                  # If it doesn't start with lastFolder, then it's not a subfolder
                  if not folder[i].startswith(last_folder):
                        ans.append(folder[i])

            return ans