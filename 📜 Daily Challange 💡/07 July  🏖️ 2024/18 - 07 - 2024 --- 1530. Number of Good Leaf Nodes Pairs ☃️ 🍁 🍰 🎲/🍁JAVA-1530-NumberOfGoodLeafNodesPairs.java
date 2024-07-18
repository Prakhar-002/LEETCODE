//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1530

//? ⌚ Time complexity -> O(n^2) 👉 Total nodes 

//? 🧺 Space complexity -> O(n) 👉 Total nodes 

class Solution {

      // concept => take the distance of leaf node from every node in an array
      // then check for the all leaf possible

      public int count = 0;

      private int[] pairFinder(TreeNode root, int distance) {
            // if we found null return 0 distance
            if (root == null) {
                  return new int[] { 0 };
            }

            // for the leaf node return 1 distance
            if (root.left == null && root.right == null) {
                  return new int[] { 1 };
            }

            // find the all leaf that exist in left side
            int[] left = pairFinder(root.left, distance);
            // find the all leaf that exist in right side
            int[] right = pairFinder(root.right, distance);

            // processing check every possible pair
            for (int x : left) {
                  for (int y : right) {
                        // both should not be null
                        if (x > 0 && y > 0) {
                              // and if at any 2 leaf node distance is <= then count++
                              if (x + y <= distance) {
                                    count++;
                              }
                        }
                  }
            }

            // now add the all dist from left and right and return them
            // if distance is greater than 0 and less than distance

            int[] res = new int[left.length + right.length];

            int i = 0;
            for (int x : left) {
                  if (x > 0 && x < distance)
                        res[i++] = x + 1;
            }

            for (int y : right) {
                  if (y > 0 && y < distance)
                        res[i++] = y + 1;
            }

            return res;
      }

      public int countPairs(TreeNode root, int distance) {
            // find the helper function
            pairFinder(root, distance);
            return count;
      }
}