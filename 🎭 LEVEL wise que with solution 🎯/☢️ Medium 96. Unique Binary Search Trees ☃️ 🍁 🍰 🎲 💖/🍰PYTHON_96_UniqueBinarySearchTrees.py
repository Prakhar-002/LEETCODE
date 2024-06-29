#! https://github.com/Prakhar-002/LEETCODE


# Todo 📌 QUESTION NUMBER 96

#? ⌚ Time complexity -> O(n^2) 👉 Number of nodes (Given)

#? 🧺 Space complexity -> O(n)  👉 for array on length n + 1

class Solution:
      def numTrees(self, n: int) -> int:
            #* numTree [4] = numTree[0] * numTree[3] + 
            #*               numTree[1] * numTree[2] +
            #*               numTree[2] * numTree[1] + 
            #*               numTree[3] * numTree[0]

            # Making an array of n + 1 to store number of binary tree from Ith nodes 
            num_Tree = [1] * (n + 1)

            # base case if 0 node then 1 tree which is null
            # if 1 node then i tree with 1 root note only

            # now calculate from 2 nodes to n + 1 nodes
            for nodes in range(2, n + 1):
                  total = 0
                  for root in range(1, nodes + 1):
                        #  1 2 4 5 6
                        #          ^ -> nodes
                        #      ^ -> root
                        #    ^ -> left
                        # right = total nodes - root 
                        left = root - 1
                        right = nodes - root 
                        total += num_Tree[left] * num_Tree[right]
                  num_Tree[nodes] = total

            return num_Tree[n]