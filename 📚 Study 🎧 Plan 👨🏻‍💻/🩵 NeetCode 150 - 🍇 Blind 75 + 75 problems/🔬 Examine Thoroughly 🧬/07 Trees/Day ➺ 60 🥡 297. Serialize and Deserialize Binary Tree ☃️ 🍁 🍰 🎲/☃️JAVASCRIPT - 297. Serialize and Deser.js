//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 297

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Nodes

//? 🧺 Space complexity ➺ O(n)

var Codec = function () { };

// Serializes a tree to a single string.
Codec.prototype.serialize = function (root) {
      let res = [];

      // Helper DFS function to serialize in preorder
      const dfs = (node) => {
            if (!node) {
                  res.push("N");           // "N" for null
                  return;
            }

            res.push(node.val.toString()); // Add node value
            dfs(node.left);               // Serialize left
            dfs(node.right);              // Serialize right
      };

      dfs(root);
      return res.join(",");               // Join values with comma
};

// Deserializes your encoded data to tree.
Codec.prototype.deserialize = function (data) {
      const vals = data.split(",");
      let i = 0;

      // Helper DFS function to build the tree
      const dfs = () => {
            if (vals[i] === "N") {
                  i++;
                  return null;
            }

            let node = new TreeNode(parseInt(vals[i]));
            i++;
            node.left = dfs();           // Build left
            node.right = dfs();          // Build right
            return node;
      };

      return dfs();
};
