//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1899

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(triplets)

//? 🧺 Space complexity ➺ O(n) 

function mergeTriplets(triplets, target) {
      const good = new Set();

      for (const t of triplets) {
            // Skip if triplet exceeds target in any position
            if (t[0] > target[0] || t[1] > target[1] || t[2] > target[2])
                  continue;

            // Add indices to set where triplet matches target values
            for (let i = 0; i < 3; i++) {
                  if (t[i] === target[i]) {
                        good.add(i);
                  }
            }
      }

      // Return true if all three positions are covered
      return good.size === 3;
}
