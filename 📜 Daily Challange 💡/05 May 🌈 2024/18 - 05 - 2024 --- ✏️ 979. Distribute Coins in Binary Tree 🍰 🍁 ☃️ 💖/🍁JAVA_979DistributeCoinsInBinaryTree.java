//! https://github.com/Prakhar-002/LEETCODE


//Todo 📌 QUESTION NUMBER 979 

import java.util.*;

class Solution {
      public int moves;

      public int countMoves(TreeNode root) {
            if (root == null) {
                  return 0;
            }

            int leftCoins = countMoves(root.left);
            int rightCoins = countMoves(root.right);

            moves += Math.abs(leftCoins) + Math.abs(rightCoins);

            return leftCoins + rightCoins + root.val - 1;
      }

      public int distributeCoins(TreeNode root) {
            moves = 0;
            countMoves(root);
            return moves;
      }

}