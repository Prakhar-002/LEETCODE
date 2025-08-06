#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 297

# ? ⌚ Time complexity ➺ O(n) 👉🏻  n = Nodes

# ? 🧺 Space complexity ➺ O(n)

class Codec:
      def serialize(self, root):
            res = []

            # Helper function to serialize the tree using DFS
            def dfs(node):
                  if not node:
                        res.append("N")  # Use 'N' for None/null nodes
                        return

                  res.append(str(node.val))  # Add current node value
                  dfs(node.left)            # Serialize left subtree
                  dfs(node.right)           # Serialize right subtree

            dfs(root)
            return ",".join(res)  # Join all parts as a single string

      def deserialize(self, data):
            vals = data.split(",")  # Split the string into parts
            self.i = 0              # Index to track the current value

            # Helper function to reconstruct the tree
            def dfs():
                  if vals[self.i] == "N":
                        self.i += 1
                        return None  # Return None for "N"

                  node = TreeNode(int(vals[self.i]))  # Create new node
                  self.i += 1
                  node.left = dfs()     # Recurse left
                  node.right = dfs()    # Recurse right
                  return node           # Return constructed subtree

            return dfs()  # Start from root
