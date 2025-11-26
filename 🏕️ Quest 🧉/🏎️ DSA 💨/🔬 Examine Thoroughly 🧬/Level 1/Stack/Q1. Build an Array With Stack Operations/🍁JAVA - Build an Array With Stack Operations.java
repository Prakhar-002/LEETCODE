//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L1.3 Q1

//? ⌚ Time complexity ➺ O(n)

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {
      public List<String> buildArray(int[] target, int n) {
            List<String> operations = new ArrayList<>();
            int cur = 0;

            // Iterate through numbers from 1 to n
            for (int i = 1; i <= n; i++) {
                  if (cur == target.length) {
                        break;
                  }
                  if (target[cur] == i) {
                        // Push matching number
                        operations.add("Push");
                        cur++;
                  } else {
                        // Push then pop for numbers not in target
                        operations.add("Push");
                        operations.add("Pop");
                  }
            }

            return operations;
      }
}
