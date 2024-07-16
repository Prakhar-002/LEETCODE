#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 2096

#? ⌚ Time complexity -> O(n) 👉 Total nodes 

#? 🧺 Space complexity -> O(n) 👉 Using array

class Solution:
      def getDirections(self, root: Optional[TreeNode], startValue: int, destValue: int) -> str:

            # function for finding the path 
            def dfs(node, path, target):
                  # if leave node
                  if not node:
                        return "" 

                  if node.val == target:
                        # got our finalPath
                        return path

                  path.append("L") # append "l" for left
                  gotPath = dfs(node.left, path, target)
                  if gotPath :
                        # passing same path to our lower case 
                        return gotPath

                  # pop "L" cause here we did not get our path
                  path.pop()

                  path.append("R") # append "R" for Right
                  gotPath = dfs(node.right, path, target)
                  if gotPath :
                        # passing same path to our lower case
                        return gotPath

                  #  pop "R" cause here we did not get our path
                  path.pop()

                  return ""

            # get the starting node path
            startPath = dfs(root, [], startValue)
            # get the destination node path
            destPath = dfs(root, [], destValue)

            # finding lowest common ancestor
            idx = 0

            while idx < min(len(startPath), len(destPath)) :
                  # if some where we got diff elem
                  if startPath[idx] != destPath[idx]:
                        # that will be our lowest common ancestor 
                        break
                  # if both path are same then there is exist LCA further
                  idx += 1 

            # convert every elem of start path to "U" cause we have to go upper side 
            # and add every elem of dest to our final path
            finalPath = ["U"] * len(startPath[idx :]) + destPath[idx :]

            # return in string so join it 
            return "".join(finalPath)