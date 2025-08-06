//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 297

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Nodes

//? 🧺 Space complexity ➺ O(n)

public class Codec {
      // Serializes a tree to a single string.
      public String serialize(TreeNode root) {
            StringBuilder sb = new StringBuilder();

            // Helper function for preorder DFS traversal
            serializeHelper(root, sb);
            return sb.toString();
      }

      private void serializeHelper(TreeNode node, StringBuilder sb) {
            if (node == null) {
                  sb.append("N,"); // "N" denotes null node
                  return;
            }

            sb.append(node.val).append(","); // Append current node value
            serializeHelper(node.left, sb); // Serialize left subtree
            serializeHelper(node.right, sb); // Serialize right subtree
      }

      // Deserializes your encoded data to tree.
      public TreeNode deserialize(String data) {
            String[] vals = data.split(",");
            int[] index = { 0 }; // Array to simulate reference
            return deserializeHelper(vals, index);
      }

      private TreeNode deserializeHelper(String[] vals, int[] index) {
            if (vals[index[0]].equals("N")) {
                  index[0]++;
                  return null;
            }

            TreeNode node = new TreeNode(Integer.parseInt(vals[index[0]]));
            index[0]++;
            node.left = deserializeHelper(vals, index); // Reconstruct left
            node.right = deserializeHelper(vals, index); // Reconstruct right
            return node;
      }
}
