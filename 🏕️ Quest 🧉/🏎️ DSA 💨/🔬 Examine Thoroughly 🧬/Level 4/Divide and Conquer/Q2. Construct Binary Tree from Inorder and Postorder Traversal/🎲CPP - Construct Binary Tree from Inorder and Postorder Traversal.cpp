
class Solution {
public:
      TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
            // If inorder is empty, there is no tree to build
            if (inorder.empty() || postorder.empty()) {
                  return nullptr;
            }

            // Map to store value -> index mapping for inorder
            // This allows O(1) lookup of root position in inorder
            unordered_map<int, int> inIndex;
            for (int i = 0; i < (int)inorder.size(); i++) {
                  inIndex[inorder[i]] = i;
            }

            // Start from the last index of postorder (which is the root of the whole tree)
            int postIdx = (int)postorder.size() - 1;

            // Helper function will build the tree using index ranges
            return build(inorder, postorder, inIndex, 0, (int)inorder.size() - 1, postIdx);
      }

private:
      // Helper function to build the tree from inorder[l..r]
      // postIdx is passed by reference so that it moves backward correctly
      TreeNode* build(const vector<int>& inorder,
                        const vector<int>& postorder,
                        unordered_map<int, int>& inIndex,
                        int l,
                        int r,
                        int& postIdx) {

            // If the current inorder segment is invalid, there is no node to create
            if (l > r) {
                  return nullptr;
            }

            // The current postorder index gives the root value of this subtree
            int rootVal = postorder[postIdx];
            postIdx--; // Move to the next root (from right to left in postorder)

            // Create the root node
            TreeNode* root = new TreeNode(rootVal);

            // Find the position of root value in inorder to split left and right subtrees
            int idx = inIndex[rootVal];

            // IMPORTANT: Build right subtree first, then left subtree
            // Because we are moving in postorder from the end:
            // postorder = [left, right, root] => when going backward: root, right, left
            root->right = build(inorder, postorder, inIndex, idx + 1, r, postIdx);
            root->left  = build(inorder, postorder, inIndex, l, idx - 1, postIdx);

            // Return the constructed subtree root
            return root;
      }
};
