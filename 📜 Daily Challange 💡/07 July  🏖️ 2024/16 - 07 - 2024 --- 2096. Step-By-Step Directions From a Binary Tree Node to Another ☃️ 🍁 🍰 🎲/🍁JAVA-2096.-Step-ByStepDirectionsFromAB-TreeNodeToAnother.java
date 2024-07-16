//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 2096

//? ⌚ Time complexity -> O(n) 👉 Total nodes 

//? 🧺 Space complexity -> O(n) 👉 Using array

import java.util.*;

class Solution {
      // function for finding the path
      private List<Character> dfs(TreeNode node, List<Character> path, int target) {
            // if leaf node
            if (node == null) {
                  return new ArrayList<>();
            }

            if (node.val == target) {
                  // got our finalPath
                  return path;
            }

            path.add('L'); // append "L" for left
            List<Character> gotPath = dfs(node.left, path, target);
            if (!gotPath.isEmpty()) {
                  // passing same path to our lower case
                  return gotPath;
            }

            // pop "L" cause here we did not get our path
            path.remove(path.size() - 1);

            path.add('R'); // append "R" for Right
            gotPath = dfs(node.right, path, target);
            if (!gotPath.isEmpty()) {
                  // passing same path to our lower case
                  return gotPath;
            }

            // pop "R" cause here we did not get our path
            path.remove(path.size() - 1);

            return new ArrayList<>();
      }

      public String getDirections(TreeNode root, int startValue, int destValue) {

            // get the starting node path
            List<Character> startPath = dfs(root, new ArrayList<>(), startValue);
            // get the destination node path
            List<Character> destPath = dfs(root, new ArrayList<>(), destValue);

            // finding lowest common ancestor
            int idx = 0;

            while (idx < Math.min(startPath.size(), destPath.size())) {
                  // if somewhere we got diff elem
                  if (startPath.get(idx) != destPath.get(idx)) {
                        // that will be our lowest common ancestor
                        break;
                  }
                  // if both paths are same then there exists LCA further
                  idx++;
            }

            // convert every elem of start path to "U" cause we have to go upper side
            // and add every elem of dest to our final path
            StringBuilder finalPath = new StringBuilder();
            for (int i = idx; i < startPath.size(); i++) {
                  finalPath.append('U');
            }
            for (int i = idx; i < destPath.size(); i++) {
                  finalPath.append(destPath.get(i));
            }

            // return as string
            return finalPath.toString();
      }
}
