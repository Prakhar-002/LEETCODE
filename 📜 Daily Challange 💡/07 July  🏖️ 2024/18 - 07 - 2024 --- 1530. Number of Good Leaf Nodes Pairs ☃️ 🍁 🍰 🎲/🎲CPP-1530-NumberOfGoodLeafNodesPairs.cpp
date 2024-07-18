//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1530

//? ⌚ Time complexity -> O(n^2) 👉 Total nodes 

//? 🧺 Space complexity -> O(n) 👉 Total nodes 

#include <vector>
using namespace std;

// concept => take the distance of leaf node from every node in an array
// then check for the all leaf possible

class Solution {
public:
      int count = 0;

      vector<int> pairFinder(TreeNode* root, int distance) {
            // if we found null return 0 distance
            if (root == NULL) {
                  return {0};
            }

            // for the leaf node return 1 distance
            if (root->left == NULL and root->right == NULL) {
                  return {1};
            }

            // find the all leaf that exist in left side
            vector<int> left = pairFinder(root->left, distance);
            // find the all leaf that exist in right side
            vector<int> right = pairFinder(root->right, distance);

            // processing check every possible pair
            for (int x : left) {
                  for (int y : right) {
                        // both should not be null
                        if (x > 0 and y > 0) {
                              // and if at any 2 leaf node distance is <= then count++
                              if (x + y <= distance) {
                                    count++;
                              }
                        }
                  }
            }

            // now add the all dist from left and right and return them
            // if distance is greater than 0 and less than distance
            vector<int> ans;

            for(int x : left){
                  if(x > 0 and x < distance)
                  ans.push_back(x + 1);
            }

            for(int y : right){
                  if( y > 0 and y < distance )
                  ans.push_back(y+1);
            }

            return ans;
      }

      int countPairs(TreeNode* root, int distance) {
            // find the helper function
            pairFinder(root, distance);
            return count;
      }
};