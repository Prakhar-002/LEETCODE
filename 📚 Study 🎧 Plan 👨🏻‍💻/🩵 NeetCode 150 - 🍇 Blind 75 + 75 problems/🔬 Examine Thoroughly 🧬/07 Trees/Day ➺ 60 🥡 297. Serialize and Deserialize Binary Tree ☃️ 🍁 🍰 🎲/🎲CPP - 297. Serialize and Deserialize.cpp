//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 297

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Nodes

//? 🧺 Space complexity ➺ O(n)

class Codec {
public:
      // Serializes a tree to a string
      string serialize(TreeNode* root) {
            string res;
            serializeHelper(root, res);
            return res;
      }

      // Helper function for serialization using DFS preorder
      void serializeHelper(TreeNode* node, string& res) {
            if (!node) {
                  res += "N,";
                  return;
            }

            res += to_string(node->val) + ",";
            serializeHelper(node->left, res);   // Serialize left
            serializeHelper(node->right, res);  // Serialize right
      }

      // Deserializes the encoded string to a tree
      TreeNode* deserialize(string data) {
            stringstream ss(data);
            string val;
            vector<string> vals;

            // Split the string by commas
            while (getline(ss, val, ',')) {
                  vals.push_back(val);
            }

            int idx = 0;
            return deserializeHelper(vals, idx);
      }

      // Helper function for reconstruction
      TreeNode* deserializeHelper(vector<string>& vals, int& idx) {
            if (vals[idx] == "N") {
                  idx++;
                  return nullptr;
            }

            TreeNode* node = new TreeNode(stoi(vals[idx++]));
            node->left = deserializeHelper(vals, idx);   // Build left
            node->right = deserializeHelper(vals, idx);  // Build right
            return node;
      }
};
