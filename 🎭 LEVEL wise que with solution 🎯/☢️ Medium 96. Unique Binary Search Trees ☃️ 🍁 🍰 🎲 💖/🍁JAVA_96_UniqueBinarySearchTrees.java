//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 96

//? ⌚ Time complexity -> O(n^2) 👉 Number of nodes (Given)

//? 🧺 Space complexity -> O(n) 👉 for array on length n + 1


class Solution {
      public int numTrees(int n) {
            //* numTree [4] = numTree[0] * numTree[3] + 
            //*               numTree[1] * numTree[2] +
            //*               numTree[2] * numTree[1] + 
            //*               numTree[3] * numTree[0]


            // Making an array of n + 1 to store number of binary tree from Ith nodes 
            int[] numTree = new int[n + 1];

            // base case if 0 node then 1 tree which is null
            numTree[0] = 1;
            // if 1 node then i tree with 1 root note only
            numTree[1] = 1;

            // now calculate from 2 nodes to n + 1 nodes
            for (int nodes = 2; nodes < n + 1; nodes++) {
                  int total = 0;
                  for (int root = 1; root <= nodes; root++) {
                        //  1 2 4 5 6
                        //          ^ -> nodes
                        //      ^ -> root
                        //    ^ -> left
                        // right = total nodes - root 
                        int left = root - 1;
                        int right = nodes - root;
                        total += numTree[left] * numTree[right];
                  }
                  numTree[nodes] = total;
            }

            return numTree[n];
      }
}