//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 872

//? ⌚ Time complexity ➺ O(n1 + n2) 👉🏻  n1, n2 = No. of nodes in roo1 and root2

//? 🧺 Space complexity ➺ O(h + l)  👉🏻  h = height of tree , l = No. of leaf nodes

// Function to recursively collect leaf values
void traverse(struct TreeNode* root, int* leafs, int* size) {
      if (root == NULL) {
            return;
      }

      // If the node is a leaf, add its value to the array
      if (root->left == NULL && root->right == NULL) {
            leafs[(*size)++] = root->val;
            return;
      }

      // Recursively traverse left and right subtrees
      traverse(root->left, leafs, size);
      traverse(root->right, leafs, size);
}

// Function to check if two trees are leaf-similar
bool leafSimilar(struct TreeNode* root1, struct TreeNode* root2) {
      int leafs1[100], leafs2[100]; // Arrays to store leaf values
      int size1 = 0, size2 = 0;    // Sizes of the leaf arrays

      // Collect leaf values for both trees
      traverse(root1, leafs1, &size1);
      traverse(root2, leafs2, &size2);

      // If the sizes of the leaf arrays are different, they are not similar
      if (size1 != size2) {
            return false;
      }

      // Compare the leaf arrays element by element
      for (int i = 0; i < size1; i++) {
            if (leafs1[i] != leafs2[i]) {
                  return false;
            }
      }

      return true;
}