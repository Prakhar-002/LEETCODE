//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 2096

//? ⌚ Time complexity -> O(n) 👉 Total nodes

//? 🧺 Space complexity -> O(n) 👉 Using array

#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
private:
      // function for finding the path
      vector<char> dfs(TreeNode * node, vector<char> & path, int target) {
            // if leaf node
            if (node == nullptr) {
                  return {};
            }

            if (node->val == target) {
                  // got our finalPath
                  return path;
            }

            path.push_back('L'); // append "L" for left
            vector<char> gotPath = dfs(node->left, path, target);
            if (!gotPath.empty()) {
                  // passing same path to our lower case
                  return gotPath;
            }

            // pop "L" cause here we did not get our path
            path.pop_back();

            path.push_back('R'); // append "R" for Right
            gotPath = dfs(node->right, path, target);
            if (!gotPath.empty()) {
                  // passing same path to our lower case
                  return gotPath;
            }

            // pop "R" cause here we did not get our path
            path.pop_back();

            return {};
      }

public:
      string getDirections(TreeNode *root, int startValue, int destValue) {
            // get the starting node path
            vector<char> startPath;
            startPath = dfs(root, startPath, startValue);
            // get the destination node path
            vector<char> destPath;
            destPath = dfs(root, destPath, destValue);

            // finding lowest common ancestor
            size_t idx = 0;

            while (idx < min(startPath.size(), destPath.size())) {
                  // if somewhere we got diff elem
                  if (startPath[idx] != destPath[idx]) {
                        // that will be our lowest common ancestor
                        break;
                  }
                  // if both paths are same then there exists LCA further
                  idx++;
            }

            // convert every elem of start path to "U" cause we have to go upper side
            // and add every elem of dest to our final path
            string finalPath;
            finalPath.append(startPath.size() - idx, 'U');
            finalPath.append(destPath.begin() + idx, destPath.end());

            // return as string
            return finalPath;
      }
};
