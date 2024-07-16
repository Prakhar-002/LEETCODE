//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 2096

//? ⌚ Time complexity -> O(n) 👉 Total nodes 

//? 🧺 Space complexity -> O(n) 👉 Using array

var getDirections = function (root, startValue, destValue) {
      // function for finding the path
      const dfs = (node, path, target) => {
            // if leaf node
            if (node === null) {
                  return [];
            }

            if (node.val === target) {
                  // got our finalPath
                  return path;
            }

            path.push('L'); // append "L" for left
            let gotPath = dfs(node.left, path, target);
            if (gotPath.length > 0) {
                  // passing same path to our lower case
                  return gotPath;
            }

            // pop "L" cause here we did not get our path
            path.pop();

            path.push('R'); // append "R" for Right
            gotPath = dfs(node.right, path, target);
            if (gotPath.length > 0) {
                  // passing same path to our lower case
                  return gotPath;
            }

            // pop "R" cause here we did not get our path
            path.pop();

            return [];
      };

      // get the starting node path
      let startPath = dfs(root, [], startValue);
      // get the destination node path
      let destPath = dfs(root, [], destValue);

      // finding lowest common ancestor
      let idx = 0;

      while (idx < Math.min(startPath.length, destPath.length)) {
            // if somewhere we got diff elem
            if (startPath[idx] !== destPath[idx]) {
                  // that will be our lowest common ancestor
                  break;
            }
            // if both paths are same then there exists LCA further
            idx++;
      }

      // convert every elem of start path to "U" cause we have to go upper side
      // and add every elem of dest to our final path
      let finalPath = 'U'.repeat(startPath.length - idx) + destPath.slice(idx).join('');

      // return as string
      return finalPath;
};