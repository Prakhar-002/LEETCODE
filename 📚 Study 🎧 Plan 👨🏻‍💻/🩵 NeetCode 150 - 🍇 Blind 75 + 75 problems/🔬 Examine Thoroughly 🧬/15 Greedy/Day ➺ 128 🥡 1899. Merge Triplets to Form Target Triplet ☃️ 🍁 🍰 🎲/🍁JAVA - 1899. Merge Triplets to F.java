//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1899

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(triplets)

//? 🧺 Space complexity ➺ O(n) 

import java.util.*;

class Solution {
      /**
       * Check if target triplet can be formed by merging input triplets.
       * Each valid triplet must not exceed target in any position.
       * Positions matching target are tracked in a set.
       */
      public boolean mergeTriplets(int[][] triplets, int[] target) {
            Set<Integer> good = new HashSet<>();

            for (int[] t : triplets) {
                  // Skip triplets exceeding target in any position
                  if (t[0] > target[0] || t[1] > target[1] || t[2] > target[2]) {
                        continue;
                  }

                  // Track positions where triplet matches target exactly
                  for (int i = 0; i < 3; i++) {
                        if (t[i] == target[i]) {
                              good.add(i);
                        }
                  }
            }

            // Target is formable if all three positions are covered
            return good.size() == 3;
      }
}
