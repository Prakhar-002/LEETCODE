#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 230

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = Nodes

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
            cnt = k                              # Counter to track how many nodes we've visited
            res = root.val                       # Placeholder for the result

            def dfs(node):
                  nonlocal res, cnt              # Access outer scope variables

                  if not node:                   # Base case: if node is None, return
                        return

                  dfs(node.left)                 # Traverse left subtree (inorder)

                  cnt -= 1                       # Visit the current node
                  if cnt == 0:                   # If it's the kth visited node
                        res = node.val           # Store result
                        return

                  dfs(node.right)                # Traverse right subtree

            dfs(root)                            # Start DFS traversal from root
            return res                           # Return the kth smallest value
