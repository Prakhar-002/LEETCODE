//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 96

//? ⌚ Time complexity -> O(n^2) 👉 Number of nodes (Given)

//? 🧺 Space complexity -> O(n) 👉 for array on length n + 1

var numTrees = function(n) { 
      //* numTree [4] = numTree[0] * numTree[3] + 
      //*               numTree[1] * numTree[2] +
      //*               numTree[2] * numTree[1] + 
      //*               numTree[3] * numTree[0]

      // Making an array of n + 1 to store number of binary tree from Ith nodes 
      let numTree = new Array(n + 1).fill(1); 

      // base case if 0 node then 1 tree which is null
      // if 1 node then i tree with 1 root note only

      // now calculate from 2 nodes to n + 1 nodes
      for (let nodes = 2; nodes < n + 1; nodes++) {
            let total = 0;
            for (let root = 1; root <= nodes; root++) {
                  //  1 2 4 5 6
                  //          ^ -> nodes
                  //      ^ -> root
                  //    ^ -> left
                  // right = total nodes - root 
                  let left = root - 1;
                  let right = nodes - root;
                  total += numTree[left] * numTree[right];
            }
            numTree[nodes] = total;
      }

      return numTree[n];
};
