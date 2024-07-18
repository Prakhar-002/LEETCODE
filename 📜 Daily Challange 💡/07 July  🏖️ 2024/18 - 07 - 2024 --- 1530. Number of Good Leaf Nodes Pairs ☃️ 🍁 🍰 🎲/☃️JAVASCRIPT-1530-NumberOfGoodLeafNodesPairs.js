//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1530

//? ⌚ Time complexity -> O(n^2) 👉 Total nodes 

//? 🧺 Space complexity -> O(n) 👉 Total nodes 

var countPairs = function (root, distance) {

      // concept => take the distance of leaf node from every node in an array
      // then check for the all leaf possible

      let count = 0;

      const pairFinder = function (root) {
            // if we found null return 0 distance
            if (!root) {
                  return [0];
            }

            // for the leaf node return 1 distance
            if (!root.left && !root.right) {
                  return [1];
            }

            // find the all leaf that exist in left side
            let left = pairFinder(root.left);
            // find the all leaf that exist in right side
            let right = pairFinder(root.right);

            // processing check every possible pair
            for (let x of left) {
                  for (let y of right) {
                        if (x > 0 && y > 0 && x + y <= distance) {
                              count++;
                        }
                  }
            }

            // now add the all dist from left and right and return them
            // if distance is greater than 0 and less than distance
            return [...left.filter(x => x > 0 && x < distance).map(x => x + 1),
            ...right.filter(y => y > 0 && y < distance).map(y => y + 1)];
      };

      pairFinder(root);
      return count;
};