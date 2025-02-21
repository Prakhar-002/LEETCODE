//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1261

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(n)

//* DFS 

#include <unordered_set>

using namespace std;

class FindElements {
private:
      unordered_set<int> seen; // Hash set to store recovered values

public:
      FindElements(TreeNode* root) {
            // Start DFS traversal to reconstruct tree
            dfs(root, 0);
      }

      /*
      * Check if the target value exists in the recovered tree.
      * Returns True if the target exists, otherwise False.
      */
      bool find(int target) {
            // Check if target exists in the recovered set
            return seen.find(target) != seen.end();
      }

      /*
      * Recovers the tree using DFS traversal.
      * cur_node: Current node being processed
      * cur_val: Corrected value of the current node
      */
private:
      void dfs(TreeNode* curNode, int curVal) {
            if (!curNode) {
                  return; // Base case: if node is null, stop recursion
            }

            // Store the recovered value
            seen.insert(curVal);
            
            // Recursively recover left and right children
            dfs(curNode->left, curVal * 2 + 1);
            dfs(curNode->right, curVal * 2 + 2);
      }
};

//!------------------------------------------------------------------------------------

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(n)

//* BFS 

#include <unordered_set>
#include <queue>

using namespace std;

class FindElements {
private:
      unordered_set<int> seen; // HashSet to store recovered values

public:
      /*
      * Constructor to recover the tree.
      * Uses BFS to reconstruct the tree and store valid values.
      */
      FindElements(TreeNode* root) {
            bfs(root);  // Start BFS traversal to recover tree
      }

      /*
      * Check if the target value exists in the recovered tree.
      * Returns True if found, otherwise False.
      */
      bool find(int target) {
            // Check if the target exists in the recovered set
            return seen.find(target) != seen.end();
      }

private:    
      /*
      * Recovers the tree using Breadth-First Search (BFS).
      * root: Root node of the contaminated tree.
      */
      void bfs(TreeNode* root) {
            queue<TreeNode*> q;
            root->val = 0;  // Set root value to 0
            q.push(root);  // Add root to the queue

            while (!q.empty()) {
                  TreeNode* curNode = q.front();
                  q.pop();  // Get front node
                  seen.insert(curNode->val);  // Store recovered value

                  // Process left child if it exists
                  if (curNode->left) {
                        curNode->left->val = curNode->val * 2 + 1;
                        q.push(curNode->left);
                  }

                  // Process right child if it exists
                  if (curNode->right) {
                        curNode->right->val = curNode->val * 2 + 2;
                        q.push(curNode->right);
                  }
            }
      }
};
